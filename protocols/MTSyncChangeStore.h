
@protocol MTSyncChangeStore <NSObject>

@required

- (NAFuture *)loadChanges;
- (void)persistChanges:(NSArray *)arg1;

@end
