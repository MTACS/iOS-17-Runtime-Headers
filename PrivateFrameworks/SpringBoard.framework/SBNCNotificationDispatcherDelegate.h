
@interface SBNCNotificationDispatcherDelegate : NSObject <NCNotificationDispatcherDelegate> {
    SBNotificationBannerDestination * _bannerDestination;
}

@property (nonatomic) SBNotificationBannerDestination *bannerDestination;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_requestAuthenticationWithCompletion:(id /* block */)arg1;
- (id)bannerDestination;
- (void)dispatcher:(id)arg1 didExecuteAction:(id)arg2 forNotificationRequest:(id)arg3;
- (void)dispatcher:(id)arg1 launchBackgroundApplicationForAction:(id)arg2 notificationRequest:(id)arg3 fromDestination:(id)arg4 withParameters:(id)arg5;
- (void)dispatcher:(id)arg1 launchForegroundApplicationForAction:(id)arg2 notificationRequest:(id)arg3 fromDestination:(id)arg4 withParameters:(id)arg5;
- (void)dispatcher:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forDestination:(id)arg3 notificationRequest:(id)arg4 withParameters:(id)arg5 completionBlock:(id /* block */)arg6;
- (void)dispatcher:(id)arg1 willExecuteAction:(id)arg2 forDestination:(id)arg3 notificationRequest:(id)arg4 requestAuthentication:(bool)arg5 withParameters:(id)arg6 completionBlock:(id /* block */)arg7;
- (void)setBannerDestination:(id)arg1;

@end
