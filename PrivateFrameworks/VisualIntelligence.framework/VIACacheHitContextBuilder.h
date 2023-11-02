
@interface VIACacheHitContextBuilder : NSObject {
    NSString * _applicationIdentifier;
    unsigned long long  _cachedResultsQueryID;
    NSString * _engagementSuggestionType;
    unsigned long long  _queryID;
}

- (void).cxx_destruct;
- (id)build;
- (id)setApplicationIdentifer:(id)arg1;
- (id)setCachedResultQueryID:(unsigned long long)arg1;
- (id)setEngagementSuggestionType:(id)arg1;
- (id)setQueryID:(unsigned long long)arg1;

@end
