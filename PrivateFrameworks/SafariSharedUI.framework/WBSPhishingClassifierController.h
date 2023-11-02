
@interface WBSPhishingClassifierController : NSObject <WBSPhishingAssetControllerDelegate, WBSPhishingClassifier> {
    <WBSPhishingAssetControllerProtocol> * _assetController;
    WBSPhishingURLClassifierCache * _cache;
    WBSPhishingConfiguration * _configuration;
    WBSPhishingURLClassifierConfigurationOverrideAdapter * _configurationAdapter;
    <WBSPhishingClassifierControllerDelegate> * _delegate;
    <WBSPhishingImageClassifierModelProtocol> * _model;
    NSObject<OS_dispatch_queue> * _queue;
    <WBSPhishingURLClassifier> * _root;
}

@property <WBSPhishingClassifierControllerDelegate> *delegate;

+ (bool)isDisabled;

- (void).cxx_destruct;
- (void)classifyURL:(id)arg1 image:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)classifyURL:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)classifyURL:(id)arg1 webView:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)delegate;
- (id)initWithAssetController:(id)arg1 history:(id)arg2 crowdsourcedFeedbackAllowList:(id)arg3;
- (id)initWithHistory:(id)arg1 crowdsourcedFeedbackAllowList:(id)arg2;
- (void)phishingAssetController:(id)arg1 didFailCatalogDownload:(id)arg2;
- (void)phishingAssetController:(id)arg1 didFailDownload:(id)arg2;
- (void)phishingAssetController:(id)arg1 didFailLoad:(id)arg2;
- (void)phishingAssetController:(id)arg1 didFailModelInitialization:(id)arg2;
- (void)phishingAssetController:(id)arg1 didLoadImageClassifierModel:(id)arg2 configuration:(id)arg3;
- (void)setClassification:(unsigned long long)arg1 forURL:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)takeSnapshotForWebView:(id)arg1 completionHandler:(id /* block */)arg2;

@end
