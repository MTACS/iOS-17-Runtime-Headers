
@interface GEOClientRankingModelFeatureSourceIdentifier : GEOClientRankingModelFeatureIdentifier {
    int  _serverEntryType;
    long long  _sourceType;
    int  _suggestionType;
}

@property (nonatomic, readonly) int serverEntryType;
@property (nonatomic, readonly) long long sourceType;
@property (nonatomic, readonly) int suggestionType;

- (long long)featureIdentifierType;
- (id)init;
- (id)initWithSuggestionType:(int)arg1 serverEntryType:(int)arg2 sourceType:(long long)arg3;
- (int)serverEntryType;
- (long long)sourceType;
- (int)suggestionType;

@end
