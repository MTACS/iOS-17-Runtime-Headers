
@interface SiriNLUTypesConverterUtils : NSObject

+ (struct unique_ptr<sirinluexternal::EntityCandidate, std::default_delete<sirinluexternal::EntityCandidate>> { struct __compressed_pair<sirinluexternal::EntityCandidate *, std::default_delete<sirinluexternal::EntityCandidate>> { struct EntityCandidate {} *x_1_1_1; } x1; })convertEntityCandidateFromObjCToCpp:(id)arg1;
+ (id)convertMatchingSpanFromCppToObjC:(void*)arg1;
+ (struct unique_ptr<sirinluinternal::MatchingSpan, std::default_delete<sirinluinternal::MatchingSpan>> { struct __compressed_pair<sirinluinternal::MatchingSpan *, std::default_delete<sirinluinternal::MatchingSpan>> { struct MatchingSpan {} *x_1_1_1; } x1; })convertMatchingSpanFromObjCToCpp:(id)arg1;
+ (struct unique_ptr<sirinluinternal::NLv4EmbeddingTensor, std::default_delete<sirinluinternal::NLv4EmbeddingTensor>> { struct __compressed_pair<sirinluinternal::NLv4EmbeddingTensor *, std::default_delete<sirinluinternal::NLv4EmbeddingTensor>> { struct NLv4EmbeddingTensor {} *x_1_1_1; } x1; })convertNLv4EmbeddingTensorFromObjCToCpp:(id)arg1;
+ (id)convertNLv4ParserRequestFromCppToObjC:(void*)arg1;
+ (struct unique_ptr<sirinluinternalnlv4_parser::NLv4ParserRequest, std::default_delete<sirinluinternalnlv4_parser::NLv4ParserRequest>> { struct __compressed_pair<sirinluinternalnlv4_parser::NLv4ParserRequest *, std::default_delete<sirinluinternalnlv4_parser::NLv4ParserRequest>> { struct NLv4ParserRequest {} *x_1_1_1; } x1; })convertNLv4ParserRequestToCpp:(id)arg1;
+ (id)convertNLv4ParserResponseFromCppToObjC:(void*)arg1;
+ (struct unique_ptr<sirinluinternalssu::SSURequest, std::default_delete<sirinluinternalssu::SSURequest>> { struct __compressed_pair<sirinluinternalssu::SSURequest *, std::default_delete<sirinluinternalssu::SSURequest>> { struct SSURequest {} *x_1_1_1; } x1; })convertSSURequestFromObjCToCpp:(id)arg1;
+ (id)convertSSUResponseFromCppToObjC:(void*)arg1;
+ (struct unique_ptr<sirinluinternal::TokenChain, std::default_delete<sirinluinternal::TokenChain>> { struct __compressed_pair<sirinluinternal::TokenChain *, std::default_delete<sirinluinternal::TokenChain>> { struct TokenChain {} *x_1_1_1; } x1; })convertTokenChainFromObjCToCpp:(id)arg1;
+ (struct unique_ptr<sirinluexternal::UsoGraph, std::default_delete<sirinluexternal::UsoGraph>> { struct __compressed_pair<sirinluexternal::UsoGraph *, std::default_delete<sirinluexternal::UsoGraph>> { struct UsoGraph {} *x_1_1_1; } x1; })convertUsoGraphFromObjCToCpp:(id)arg1;
+ (struct Reader { char *x1; unsigned long long x2; unsigned long long x3; bool x4; })getCppReaderFromObjCObject:(id)arg1;

@end
