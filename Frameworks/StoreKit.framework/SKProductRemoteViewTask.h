
@interface SKProductRemoteViewTask : NSObject <SKProductPageRemoteViewControllerDelegate, UIAdaptivePresentationControllerDelegate> {
    NSDictionary * _cachedParameters;
    NSMutableArray * _configurationActions;
    bool  _didLoad;
    NSMutableArray * _entitledConfigurationActions;
    NSString * _extensionID;
    ServiceCardContainerViewController * _extensionRemoteCardContainerViewController;
    _UIResilientRemoteViewContainerViewController * _extensionRemoteContainerViewController;
    SKProductPageRemoteViewController * _extensionRemoteViewController;
    <NSCopying> * _extensionRequest;
    NSString * _hostApplicationOverride;
    bool  _isAskToBuy;
    bool  _isClientEntitled;
    bool  _isFetchingExtension;
    bool  _isPreview;
    NSString * _logKey;
    NSError * _lookupError;
    NSDictionary * _lookupResult;
    NSExtension * _productPageExtension;
    SKStoreProductViewController * _storeController;
    SKRemoteProductViewController * _uiServiceRemoteViewController;
    bool  _visibleInClientWindow;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addChildController:(id)arg1 toController:(id)arg2;
- (void)_addConfigurationAction:(id /* block */)arg1 needsEntitlement:(bool)arg2;
- (void)_didReceiveExtensionRemoteViewController:(id)arg1;
- (void)_executeConfigurationActionsForExtension:(id)arg1;
- (void)_executeConfigurationActionsForUIService:(id)arg1;
- (void)_finishWithResult:(long long)arg1;
- (id)_hostApplicationIdentifier;
- (bool)_isProductUnavailableError:(id)arg1;
- (bool)_isViewControllerDescendant:(id)arg1 ofViewController:(id)arg2;
- (id)_keyProfileForProductLookup;
- (void)_killExtensionIfNecessary;
- (void)_loadUIServiceIfNecessaryWithCompletion:(id /* block */)arg1;
- (id)_productIDFromParameters:(id)arg1;
- (void)_showErrorController;
- (void)_showExtensionFromUIService;
- (void)_showExtensionIfNeeded;
- (void)_showExtensionWithID:(id)arg1;
- (void)dealloc;
- (void)finishImmediately;
- (id)initWithStoreController:(id)arg1;
- (void)loadProductWithPageDictionary:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)loadProductWithRequest:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)loadProductWithURL:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)lookupProductWithParameters:(id)arg1 completion:(id /* block */)arg2;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)productPageRemoteViewController:(id)arg1 didTerminateWithError:(id)arg2;
- (void)productPageRemoteViewController:(id)arg1 finishWithResult:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)productPageRemoteViewControllerLoadDidFinish:(id)arg1;
- (void)setAdditionalBuyParameters:(id)arg1;
- (void)setAffiliateIdentifier:(id)arg1;
- (void)setAskToBuy:(bool)arg1;
- (void)setCancelButtonTitle:(id)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setHostBundleIdentifier:(id)arg1;
- (void)setPresentationStyle:(id)arg1;
- (void)setPreview:(id)arg1;
- (void)setProductPageStyle:(id)arg1;
- (void)setPromptString:(id)arg1;
- (void)setRightBarButtonTitle:(id)arg1;
- (void)setScriptContextDictionary:(id)arg1;
- (void)setShowsRightBarButton:(bool)arg1;
- (void)setShowsStoreButton:(id)arg1;
- (void)setUsageContext:(id)arg1;
- (void)setVisibleInClientWindow:(id)arg1;
- (void)storeProductViewControllerDidAppear;
- (void)storeProductViewControllerWillAppear;

@end
