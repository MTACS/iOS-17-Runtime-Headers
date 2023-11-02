
@protocol WBSHistoryLoaderDelegate <NSObject>

@required

- (void)historyLoader:(id <WBSHistoryLoader>)arg1 didLoadItems:(NSArray *)arg2 stringsForUserTypeDomainExpansion:(NSCountedSet *)arg3;
- (void)historyLoaderDidFinishLoading:(id <WBSHistoryLoader>)arg1;

@end
