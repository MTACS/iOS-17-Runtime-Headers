
@interface WBSQueryParameterFilteringData : NSObject {
    NSMutableOrderedSet * _originalAndAdjustedURLs;
}

@property (nonatomic, readonly) long long numberOfFilteredQueryParameters;

- (void).cxx_destruct;
- (void)addAdjustedURL:(id)arg1 originalURL:(id)arg2;
- (void)addData:(id)arg1;
- (id)init;
- (long long)numberOfFilteredQueryParameters;

@end
