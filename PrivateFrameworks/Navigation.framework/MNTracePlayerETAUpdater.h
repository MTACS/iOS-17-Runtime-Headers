
@interface MNTracePlayerETAUpdater : MNSessionUpdateManager

- (void)_updateForETARoute:(id)arg1;
- (void)playETAUpdate:(id)arg1;
- (void)resumeUpdateRequests;
- (void)startUpdateRequestsForRoutes:(id)arg1 andNavigationType:(long long)arg2;

@end
