
@protocol SFHistoryViewDataSourceDelegate <NSObject>

@required

- (void)historyViewDataSource:(SFHistoryViewDataSource *)arg1 didComputeSessions:(NSOrderedSet *)arg2;

@end
