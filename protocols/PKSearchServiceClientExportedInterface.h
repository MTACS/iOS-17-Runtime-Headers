
@protocol PKSearchServiceClientExportedInterface

@required

- (void)invalidateSearchResults;
- (void)searchDidCompleteWithError:(NSError *)arg1 forIdentifier:(NSString *)arg2;
- (void)searchDidReceivePartialResults:(PKSearchResults *)arg1 forIdentifier:(NSString *)arg2;

@end
