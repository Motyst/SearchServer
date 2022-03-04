#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "../src/document.h"
#include "../src/paginator.h"
#include "../src/search_server.h"

namespace read_input{

void PrintDocument(const Document& document);

void PrintMatchDocumentResult(int document_id, const std::vector<std::string>& words, DocumentStatus status);

void AddDocument(SearchServer& search_server, int document_id, const std::string& document, DocumentStatus status,
                 const std::vector<int>& ratings);

void FindTopDocuments(const SearchServer& search_server, const std::string& raw_query);

void MatchDocuments(const SearchServer& search_server, const std::string& query);

std::ostream& operator<<(std::ostream& output, const Document& document);

}
