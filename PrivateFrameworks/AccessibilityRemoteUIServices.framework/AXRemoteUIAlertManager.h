
@interface AXRemoteUIAlertManager : NSObject <SBSRemoteAlertHandleObserver> {
    NSMutableDictionary * _remoteCallbackHolders;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *remoteCallbackHolders;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (void)_sbs_presentRemoteUIAlertWithIdentifier:(id)arg1 viewControllerClassName:(id)arg2 userInfo:(id)arg3 presentationHandler:(id /* block */)arg4 dismissalHandler:(id /* block */)arg5;
- (void)presentRemoteUIAlertWithIdentifier:(id)arg1 viewControllerClassName:(id)arg2 userInfo:(id)arg3 presentationHandler:(id /* block */)arg4 dismissalHandler:(id /* block */)arg5;
- (void)remoteAlertHandleDidActivate:(id)arg1;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;
- (id)remoteCallbackHolders;
- (void)setRemoteCallbackHolders:(id)arg1;

@end
