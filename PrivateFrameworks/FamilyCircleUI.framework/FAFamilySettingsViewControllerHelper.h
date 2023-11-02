
@interface FAFamilySettingsViewControllerHelper : NSObject <RemoteUIControllerDelegate> {
    AIDAAccountManager * _accountManager;
    ACAccountStore * _accountStore;
    ACAccount * _appleAccount;
    AAGrandSlamSigner * _appleIDGrandSlamSigner;
    AAUIRemoteUIController * _appleIDRemoteUIController;
    NSMutableURLRequest * _currentRemoteUIRequest;
    <FAFamilySettingsViewControllerHelperDelegate> * _delegate;
    FAProfilePictureStore * _familyPictureStore;
    FACircleRemoteUIDelegate * _familyRemoteUIDelegate;
    AAUIRemoteUIController * _familyV2RemoteUIController;
    bool  _fetchingPaymentInfo;
    bool  _fetchingPaymentMethodImage;
    ACAccount * _grandSlamAccount;
    AAGrandSlamSigner * _iCloudGrandSlamSigner;
    AAUIRemoteUIController * _iCloudRemoteUIController;
    ACAccount * _itunesAccount;
    FAFamilyMember * _memberBeingViewed;
    UINavigationController * _navigationController;
    NSOperationQueue * _networkingQueue;
    NSMutableDictionary * _objectModelDecorators;
    FAFamilyCreditCard * _paymentMethod;
    FARequestConfigurator * _requestConfigurator;
    AAUIServerUIHookHandler * _serverUIHookHandler;
    NSURL * _urlBeingLoaded;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FAFamilySettingsViewControllerHelperDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UINavigationController *navigationController;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSURL *urlBeingLoaded;

- (void).cxx_destruct;
- (id)_appleIDGrandSlamSigner;
- (void)_fetchFamilyPaymentInfoWithCompletion:(id /* block */)arg1;
- (void)_handleObjectModelChangeForController:(id)arg1 objectModel:(id)arg2 isModal:(bool)arg3;
- (id)_itunesAccount;
- (id)_requestConfigurator;
- (void)_setFresnoRemoteUIDelgate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithAppleAccount:(id)arg1 grandSlamSigner:(id)arg2 familyPictureStore:(id)arg3 accountManager:(id)arg4;
- (void)loadMemberDetailsForFamilyMember:(id)arg1 completion:(id /* block */)arg2;
- (bool)loadRemoteUIWithRequest:(id)arg1 type:(long long)arg2 completion:(id /* block */)arg3;
- (bool)loadRemoteUIWithRequest:(id)arg1 url:(id)arg2 type:(long long)arg3 completion:(id /* block */)arg4;
- (id)navigationController;
- (id)remoteUIController:(id)arg1 createPageWithName:(id)arg2 attributes:(id)arg3;
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long*)arg3;
- (void)remoteUIController:(id)arg1 didRefreshObjectModel:(id)arg2;
- (void)remoteUIController:(id)arg1 didRemoveObjectModel:(id)arg2;
- (void)remoteUIController:(id)arg1 willLoadRequest:(id)arg2;
- (void)remoteUIController:(id)arg1 willPresentModalNavigationController:(id)arg2;
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(bool)arg3;
- (void)remoteUIControllerDidDismiss:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNavigationController:(id)arg1;
- (void)setUrlBeingLoaded:(id)arg1;
- (id)urlBeingLoaded;

@end
