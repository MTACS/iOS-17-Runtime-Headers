
@protocol SKManagerListener <NSObject>

@optional

- (void)disksAppeared:(NSArray *)arg1;
- (void)disksChanged:(NSArray *)arg1;
- (void)disksDisappeared:(NSArray *)arg1;
- (void)initialPopulateComplete;
- (void)managerResumed;
- (void)managerStalled;
- (NSSet *)visibleDiskRoles;

@end
