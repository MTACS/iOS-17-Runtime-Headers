
@interface _DKMDCSWorkoutMonitor : _DKMonitor {
    _CDContextualChangeRegistration * _registration;
    _CDClientContext * _userContext;
}

+ (id)entitlements;
+ (id)eventStream;

- (void).cxx_destruct;
- (id)createWorkoutPredicate;
- (id)init;
- (void)start;
- (void)stop;

@end
