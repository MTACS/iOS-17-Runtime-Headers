
@interface EMFQueryResultOverrideList : NSObject {
    NSDictionary * _overrideMap;
}

- (void).cxx_destruct;
- (id)_metadataForString:(id)arg1;
- (id)_overriddenResultsRawStringExactMatchForQuery:(id)arg1;
- (id)_overriddenResultsRawStringExactMatchForRawString:(id)arg1 andSearchType:(unsigned long long)arg2;
- (id)_overriddenResultsRawStringPrefixMatchForQuery:(id)arg1;
- (id)_overriddenResultsTokenExactMatchForQuery:(id)arg1;
- (id)_overriddenResultsTokenPrefixMatchForQuery:(id)arg1;
- (id)initWithOverrideListURL:(id)arg1;
- (id)overriddenResultsForQuery:(id)arg1;
- (id)overriddenResultsForQuery:(id)arg1 searchType:(unsigned long long)arg2;

@end
