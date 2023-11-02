
@interface PSUICarrierSpaceGroup : NSObject <RemoteUIControllerDelegate> {
    CTCarrierSpaceCapabilities * _capabilities;
    CoreTelephonyClient * _ctClient;
    PSSpecifier * _groupSpecifier;
    NSString * _instance;
    bool  _isSubscriptionDataPreferred;
    PSListController * _listController;
    PSUICarrierSpaceOptInSplashScreen * _optInSplashScreen;
    PSSpecifier * _parentSpecifier;
    RemoteUIController * _remoteUIController;
    NSDictionary * _specifersByID;
    CTXPCServiceSubscriptionContext * _subscriptionContext;
}

@property (nonatomic, retain) CTCarrierSpaceCapabilities *capabilities;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) PSSpecifier *groupSpecifier;
@property (readonly) unsigned long long hash;
@property (nonatomic) PSListController *listController;
@property (nonatomic, retain) PSUICarrierSpaceOptInSplashScreen *optInSplashScreen;
@property (nonatomic) PSSpecifier *parentSpecifier;
@property (nonatomic, retain) RemoteUIController *remoteUIController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)agreePressed;
- (id)capabilities;
- (id)carrierServicesSpecifier;
- (void)carrierSpaceChanged;
- (id)cellularPlansSpecifier;
- (id)descriptionForPlans:(id)arg1;
- (id)descriptionForUsage:(id)arg1;
- (void)disagreeOrCancelPressed;
- (id)getLogger;
- (id)groupSpecifier;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 parentSpecifier:(id)arg3 ctClient:(id)arg4;
- (id)listController;
- (void)newCarrierNotification;
- (void)openURLWithSpecifier:(id)arg1;
- (id)optInSplashScreen;
- (id)parentSpecifier;
- (void)prepareSpecifiers;
- (void)refreshSpecifiers;
- (id)remoteUIController;
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)remoteUIController:(id)arg1 willPresentModalNavigationController:(id)arg2;
- (void)setCapabilities:(id)arg1;
- (void)setGroupSpecifier:(id)arg1;
- (void)setIsSubscriptionDataPreferred;
- (void)setListController:(id)arg1;
- (void)setOptInSplashScreen:(id)arg1;
- (void)setParentSpecifier:(id)arg1;
- (void)setRemoteUIController:(id)arg1;
- (void)showConsentFlow:(id)arg1;
- (void)showTermsAndConditions:(id)arg1 consentFlowInfo:(id)arg2;
- (id)specifierForID:(id)arg1;
- (id)usageSpecifier;

@end
