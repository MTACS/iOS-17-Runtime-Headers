
@protocol PKSearchServiceObserver <NSObject>

@optional

- (void)invalidateSearchResults;
- (void)searchDidCompleteWithError:(NSError *)arg1 results:(PKSearchResults *)arg2 forIdentifier:(NSString *)arg3;

@end
