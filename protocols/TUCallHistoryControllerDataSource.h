
@protocol TUCallHistoryControllerDataSource <NSObject>

@required

- (void)allCallHistoryDeleted;
- (void)recentCallsDeleted:(NSArray *)arg1;

@end
