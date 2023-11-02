
@interface MKLocalSearchKeypressMetrics : NSObject {
    NSString * _query;
    NSArray * _queryTokens;
    NSArray * _suggestionEntries;
}

@property (nonatomic, readonly, copy) NSString *query;
@property (nonatomic, readonly, copy) NSArray *queryTokens;
@property (nonatomic, readonly) NSArray *suggestionEntries;

- (void).cxx_destruct;
- (id)initWithQuery:(id)arg1 queryTokens:(id)arg2 suggestionEntries:(id)arg3;
- (id)query;
- (id)queryTokens;
- (void)submitWithStatus:(unsigned long long)arg1;
- (id)suggestionEntries;

@end
