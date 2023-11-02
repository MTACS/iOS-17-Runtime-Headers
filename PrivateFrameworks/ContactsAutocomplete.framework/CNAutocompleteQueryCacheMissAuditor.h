
@interface CNAutocompleteQueryCacheMissAuditor : NSObject {
    NSArray * _cachedResults;
    CNAutocompleteQueryCacheMissLogger * _logger;
}

@property (copy) NSArray *cachedResults;
@property (retain) CNAutocompleteQueryCacheMissLogger *logger;

- (void).cxx_destruct;
- (id)cachedResults;
- (id)description;
- (void)didReturnCachedResults:(id)arg1;
- (void)didReturnLiveResults:(id)arg1;
- (id)init;
- (id)initWithLogger:(id)arg1;
- (id)logger;
- (void)setCachedResults:(id)arg1;
- (void)setLogger:(id)arg1;

@end
