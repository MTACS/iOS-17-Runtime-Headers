
@protocol MTSyncServiceDelegate <NSObject>

@required

- (void)applyChange:(id <MTSyncable>)arg1;
- (NSArray *)pendingChanges;
- (void)pendingChangesSent:(NSArray *)arg1;
- (void)resetDataStore;

@end
