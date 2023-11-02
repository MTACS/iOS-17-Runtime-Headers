
@interface TVRViewServiceManager : NSObject <SBSRemoteAlertHandleObserver> {
    SBSRemoteAlertHandle * _alertHandle;
    NSString * _lastActiveEndpointIdentifier;
    TVRViewServiceConfigContext * _viewServiceContext;
}

@property (nonatomic, retain) SBSRemoteAlertHandle *alertHandle;
@property (nonatomic, readonly) bool canLaunchAsAnApp;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *lastActiveEndpointIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) TVRViewServiceConfigContext *viewServiceContext;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_actionForSetting:(unsigned long long)arg1 animationBlock:(id /* block */)arg2;
- (void)_fetchActiveEndpointUID;
- (void)_launchViewServiceSuspended;
- (void)_prewarmWithLaunchViewService:(bool)arg1 fetchActiveEndpoint:(bool)arg2;
- (id)_settingNameForValue:(unsigned long long)arg1;
- (id)alertHandle;
- (bool)canLaunchAsAnApp;
- (void)dismiss;
- (id)lastActiveEndpointIdentifier;
- (void)presentWithContext:(id)arg1;
- (void)prewarm;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;
- (void)setAlertHandle:(id)arg1;
- (void)setLastActiveEndpointIdentifier:(id)arg1;
- (void)setViewServiceContext:(id)arg1;
- (id)viewServiceContext;

@end
