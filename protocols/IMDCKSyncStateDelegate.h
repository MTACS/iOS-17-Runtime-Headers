
@protocol IMDCKSyncStateDelegate <NSObject>

@optional

- (void)syncStateDidUpdate:(IMDCKSyncState *)arg1;
- (void)syncStateWillUpdate:(IMDCKSyncState *)arg1;

@end
