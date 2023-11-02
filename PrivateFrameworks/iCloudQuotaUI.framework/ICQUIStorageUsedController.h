
@interface ICQUIStorageUsedController : NSObject <DelayedPushDelegate> {
    ACAccount * _account;
    PSSpecifier * _activeSpecifier;
    NSString * _appBundleID;
    ICQUIPreferencesLiftUIDelegate * _liftUIDelegate;
    UINavigationController * _navigationController;
    ICQPreferencesRemoteUIDelegate * _ruiDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginLiftUIFlowWithURL:(id)arg1;
- (void)_beginRUIFlowWithURL:(id)arg1;
- (void)_startSpinnerInSpecifier:(id)arg1;
- (void)_stopSpinnerInSpecifier:(id)arg1;
- (void)beginLoading;
- (void)beginLoadingForSpecifier:(id)arg1;
- (id)initWithAppBundleID:(id)arg1 account:(id)arg2 navigationController:(id)arg3;
- (void)loadFailed:(id)arg1 withError:(id)arg2;
- (void)loadFinished:(id)arg1;
- (void)loadStarted:(id)arg1;

@end
