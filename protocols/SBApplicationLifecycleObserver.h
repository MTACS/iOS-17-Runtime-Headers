
@protocol SBApplicationLifecycleObserver

@required

- (void)applicationRestrictionsMayHaveChanged;
- (void)applicationVisibilityMayHaveChanged;
- (void)applicationsAdded:(NSArray *)arg1;
- (void)applicationsDemoted:(NSArray *)arg1;
- (void)applicationsRemoved:(NSArray *)arg1;
- (void)applicationsReplaced:(NSArray *)arg1;
- (void)applicationsUpdated:(NSArray *)arg1;

@end
