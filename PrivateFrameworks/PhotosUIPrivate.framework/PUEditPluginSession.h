
@interface PUEditPluginSession : NSObject <PUEditExtensionActivityViewControllerDelegate, PUEditPluginHostViewControllerDataSource, PUEditPluginHostViewControllerDelegate> {
    long long  _adjustmentType;
    <PUEditableAsset> * _asset;
    PUEditPlugin * _currentPlugin;
    <PUEditPluginSessionDataSource> * _dataSource;
    <PUEditPluginSessionDelegate> * _delegate;
    UIViewController * _hostViewController;
    bool  _isAvailable;
    PUEditPluginManager * _pluginManager;
    UINavigationController * _pluginNavigationController;
}

@property (nonatomic) long long adjustmentType;
@property (nonatomic, retain) <PUEditableAsset> *asset;
@property (nonatomic, retain) PUEditPlugin *currentPlugin;
@property (nonatomic) <PUEditPluginSessionDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUEditPluginSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIViewController *hostViewController;
@property (nonatomic) bool isAvailable;
@property (nonatomic, readonly) bool markupIsAvailable;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginMarkupSessionWithAsset:(id)arg1 fromViewController:(id)arg2;
- (void)_beginSessionWithAsset:(id)arg1 fromViewController:(id)arg2 sourceElement:(id)arg3 includeMarkupInList:(bool)arg4;
- (void)_launchPlugin:(id)arg1 afterDismissingViewController:(id)arg2;
- (id)_linkPresentationImage;
- (id)_localizedEditorListTitle;
- (void)_pluginManagerPluginsDidChange:(id)arg1;
- (void)_unlockScreenIfNeededWithCompletionHandler:(id /* block */)arg1;
- (long long)adjustmentType;
- (id)asset;
- (void)beginMarkupSessionWithAsset:(id)arg1 fromViewController:(id)arg2;
- (void)beginSessionWithAsset:(id)arg1 fromViewController:(id)arg2 sourceElement:(id)arg3 includeMarkupInList:(bool)arg4;
- (id)currentPlugin;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (void)dismissSession;
- (void)editExtensionActivityViewController:(id)arg1 didSelectActivity:(id)arg2;
- (void)editPluginHostViewController:(id)arg1 commitContentEditingOutput:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)editPluginHostViewController:(id)arg1 didFinishWithCompletionType:(unsigned long long)arg2;
- (void)editPluginHostViewController:(id)arg1 loadItemProviderWithHandler:(id /* block */)arg2;
- (id)hostViewController;
- (id)init;
- (bool)isAvailable;
- (void)loadItemProviderWithSupportedAdjustmentData:(id)arg1 loadHandler:(id /* block */)arg2;
- (bool)markupIsAvailable;
- (unsigned long long)pluginManagerMediaType;
- (void)presentAlertController:(id)arg1;
- (void)setAdjustmentType:(long long)arg1;
- (void)setAsset:(id)arg1;
- (void)setCurrentPlugin:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHostViewController:(id)arg1;
- (void)setIsAvailable:(bool)arg1;
- (void)shouldLaunchPlugin:(id)arg1 completion:(id /* block */)arg2;
- (void)updateAvailability;
- (void)updatePluginManager;

@end
