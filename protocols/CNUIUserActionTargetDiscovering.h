
@protocol CNUIUserActionTargetDiscovering <NSObject>

@required

- (CNObservable *)observableForTargetsChangedForActionType:(NSString *)arg1 schedulerProvider:(id <CNSchedulerProvider>)arg2;
- (CNObservable *)targetsForActionType:(NSString *)arg1;
- (CNFuture *)thirdPartyTargetsForActionTypes:(NSArray *)arg1;
- (CNFuture *)thirdPartyTargetsForBundleIdentifier:(NSString *)arg1;

@end
