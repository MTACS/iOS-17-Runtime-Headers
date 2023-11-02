
@interface WBSPhishingAssetController : NSObject <WBSMobileAssetControllerDelegate, WBSPhishingAssetControllerProtocol, WBSRemotePlistControllerDelegate> {
    <WBSMobileAssetControllerProtocol> * _assetController;
    NSURL * _assetURL;
    bool  _canUpdateConfiguration;
    WBSPhishingConfiguration * _configuration;
    WBSRemotePlistController * _configurationController;
    <WBSPhishingAssetControllerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property <WBSPhishingAssetControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)mobileAssetType;

- (void).cxx_destruct;
- (void)_configurationWasUpdated:(id)arg1;
- (id)_createConfigurationControllerWithDefaultConfigurationURL:(id)arg1 updateConfiguration:(id)arg2 defaultsKey:(id)arg3;
- (bool)_sendAssetToDelegateIfPossible;
- (bool)_sendAssetToDelegateIfPossible:(id)arg1;
- (id)delegate;
- (void)didDownloadPlistForRemotePlistController:(id)arg1;
- (id)init;
- (id)initWithMobileAssetController:(id)arg1 canUpdateConfiguration:(bool)arg2;
- (void)mobileAssetController:(id)arg1 didBecomeAvailable:(id)arg2;
- (void)mobileAssetController:(id)arg1 didDownload:(id)arg2;
- (void)mobileAssetController:(id)arg1 didFailCatalogDownload:(id)arg2;
- (void)mobileAssetController:(id)arg1 didFailDownload:(id)arg2;
- (void)mobileAssetController:(id)arg1 didFailRetrieve:(id)arg2;
- (void)mobileAssetController:(id)arg1 willPerformQuery:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
