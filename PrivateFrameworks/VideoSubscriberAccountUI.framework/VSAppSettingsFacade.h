
@interface VSAppSettingsFacade : NSObject {
    VSAccountChannels * _accountChannels;
    VSAccountChannelsCenter * _accountChannelsCenter;
    NSDictionary * _appSections;
    Class  _channelAppsOperationClass;
    NSOperation * _currentPresentationOperation;
    bool  _hasChannelApps;
    VSIdentityProvider * _identityProvider;
    NSArray * _knownAppBundles;
    VSAppSettingsViewModel * _mvpdAppSettingsViewModel;
    UIViewController * _mvpdInstallPromptPresentingViewController;
    bool  _needsPresentationOfMVPDAppInstallPromptIfAvailable;
    bool  _needsUpdateApps;
    NSOperationQueue * _privateQueue;
    int  _registrationToken;
    VSRestrictionsCenter * _restrictionsCenter;
    VSPersistentStorage * _storage;
    NSArray * _unredeemedVouchers;
}

@property (nonatomic, retain) VSAccountChannels *accountChannels;
@property (nonatomic, retain) VSAccountChannelsCenter *accountChannelsCenter;
@property (nonatomic, copy) NSDictionary *appSections;
@property (nonatomic, retain) Class channelAppsOperationClass;
@property (nonatomic, retain) NSOperation *currentPresentationOperation;
@property (nonatomic) bool hasChannelApps;
@property (nonatomic, retain) VSIdentityProvider *identityProvider;
@property (nonatomic, copy) NSArray *knownAppBundles;
@property (nonatomic, retain) VSAppSettingsViewModel *mvpdAppSettingsViewModel;
@property (nonatomic, retain) UIViewController *mvpdInstallPromptPresentingViewController;
@property (nonatomic) bool needsPresentationOfMVPDAppInstallPromptIfAvailable;
@property (nonatomic) bool needsUpdateApps;
@property (nonatomic, retain) NSOperationQueue *privateQueue;
@property (nonatomic) int registrationToken;
@property (nonatomic, retain) VSRestrictionsCenter *restrictionsCenter;
@property (nonatomic, retain) VSPersistentStorage *storage;
@property (nonatomic, copy) NSArray *unredeemedVouchers;

- (void).cxx_destruct;
- (void)_setNeedsUpdateApps;
- (void)_updateApps;
- (id)accountChannels;
- (id)accountChannelsCenter;
- (id)appSections;
- (Class)channelAppsOperationClass;
- (id)currentPresentationOperation;
- (void)dealloc;
- (bool)hasChannelApps;
- (id)identityProvider;
- (id)init;
- (id)initWithStorage:(id)arg1 restrictionsCenter:(id)arg2;
- (id)initWithStorage:(id)arg1 restrictionsCenter:(id)arg2 accountChannelsCenter:(id)arg3 channelAppsOperationClass:(Class)arg4;
- (id)knownAppBundles;
- (id)mvpdAppSettingsViewModel;
- (id)mvpdInstallPromptPresentingViewController;
- (bool)needsPresentationOfMVPDAppInstallPromptIfAvailable;
- (bool)needsUpdateApps;
- (void)presentMVPDAppInstallPromptFromViewController:(id)arg1;
- (id)privateQueue;
- (int)registrationToken;
- (id)restrictionsCenter;
- (void)setAccountChannels:(id)arg1;
- (void)setAccountChannelsCenter:(id)arg1;
- (void)setAppSections:(id)arg1;
- (void)setChannelAppsOperationClass:(Class)arg1;
- (void)setCurrentPresentationOperation:(id)arg1;
- (void)setHasChannelApps:(bool)arg1;
- (void)setIdentityProvider:(id)arg1;
- (void)setKnownAppBundles:(id)arg1;
- (void)setMvpdAppSettingsViewModel:(id)arg1;
- (void)setMvpdInstallPromptPresentingViewController:(id)arg1;
- (void)setNeedsPresentationOfMVPDAppInstallPromptIfAvailable:(bool)arg1;
- (void)setNeedsUpdateApps:(bool)arg1;
- (void)setPrivateQueue:(id)arg1;
- (void)setRegistrationToken:(int)arg1;
- (void)setRestrictionsCenter:(id)arg1;
- (void)setStorage:(id)arg1;
- (void)setUnredeemedVouchers:(id)arg1;
- (bool)shouldShowMVPDAppInstallPrompt;
- (bool)shouldShowMVPDAppInstallPromptFromViewController:(id)arg1;
- (id)storage;
- (id)unredeemedVouchers;
- (void)updateDecidedApps;
- (id)viewModelsForAppDescriptions:(id)arg1 bundleByBundleID:(id)arg2 vouchersForProvider:(id)arg3 restrictionsCenter:(id)arg4 privacyFacade:(id)arg5;
- (id)viewModelsForAvailableAppDescriptions:(id)arg1 subscribedAppDescriptions:(id)arg2 andNonChannelAppDescriptions:(id)arg3;

@end
