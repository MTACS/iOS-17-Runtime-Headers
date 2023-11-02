
@protocol NCNotificationRequestPresentingDelegate <NSObject>

@optional

- (void)notificationRequestPresenter:(id <NCNotificationRequestPresenting>)arg1 didVendTransitionBlockingAssertion:(id <NCInvalidatable>)arg2;
- (void)notificationRequestPresenter:(void *)arg1 executeAction:(void *)arg2 withParameters:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: <NCNotificationRequestPresenting> *, NCNotificationAction *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)notificationRequestPresenter:(void *)arg1 shouldTransitionToStage:(void *)arg2 forTrigger:(void *)arg3 completionBlock:(void *)arg4; // needs 4 arg types, found 9: <NCNotificationRequestPresenting> *, NSString *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (<NCNotificationStaticContentProviding> *)notificationRequestPresenter:(id <NCNotificationRequestPresenting>)arg1 staticContentProviderForNotificationRequest:(NCNotificationRequest *)arg2;
- (NSDictionary *)notificationRequestPresenterNotificationUsageTrackingState:(id <NCNotificationRequestPresenting>)arg1;

@end
