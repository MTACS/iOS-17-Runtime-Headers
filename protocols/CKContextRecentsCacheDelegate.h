
@protocol CKContextRecentsCacheDelegate <NSObject>

@optional

- (void)didInitiatePruningMaintenanceTaskForCache:(CKContextRecentsCache *)arg1 existingRecentsUUIDs:(NSArray *)arg2;
- (void)modeDidChangeToModeWithUUIDString:(NSString *)arg1 forCache:(CKContextRecentsCache *)arg2;

@end
