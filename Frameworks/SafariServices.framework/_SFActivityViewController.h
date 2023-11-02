
@interface _SFActivityViewController : UIActivityViewController <_SFActivityItemCustomizationDelegate> {
    NSArray * _activityItemProviders;
    NSMutableSet * _activityTypesExcludedDueToSelectedCustomization;
    NSString * _currentExtensionIdentifier;
    _SFActivityItemCustomizationController * _customizationController;
    <_SFActivityViewControllerDelegate> * _delegate;
    NSArray * _initialApplicationActivities;
    _SFActivityItemProviderCollection * _itemProviderCollection;
    _SFPrintController * _printController;
    long long  _provenance;
    _SFSafariSharingExtensionController * _sharingExtensionController;
    NSURL * _sharingURL;
}

@property (nonatomic, readonly) NSArray *activityItemProviders;
@property (nonatomic, copy) NSString *currentExtensionIdentifier;
@property (nonatomic, retain) _SFActivityItemCustomizationController *customizationController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_SFActivityViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _SFPrintController *printController;
@property (nonatomic) long long provenance;
@property (nonatomic) _SFSafariSharingExtensionController *sharingExtensionController;
@property (nonatomic, retain) NSURL *sharingURL;
@property (readonly) Class superclass;

+ (id)activeWebPageExtensionItemForURL:(id)arg1 withPreviewImageHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (bool)_containsProviderForDownloadActivityAndGetMIMEType:(id*)arg1 uti:(id*)arg2;
- (void)_executeActivity;
- (id)_extensionItemForExtensionActivity:(id)arg1;
- (id)_javaScriptProcessingFileURLInExtension:(id)arg1;
- (void)_performActivity:(id)arg1;
- (void)_prepareActivity:(id)arg1 completion:(id /* block */)arg2;
- (void)_preparePrint:(id)arg1 completion:(id /* block */)arg2;
- (void)_processJavaScriptFinalizeReturnedItems:(id)arg1 forExtension:(id)arg2;
- (void)_updateActivityItems:(id)arg1;
- (void)_updateActivityItems:(id)arg1 applicationActivities:(id)arg2;
- (void)_updatePrintControllerWithActivityItems:(id)arg1;
- (void)activityDidComplete:(id)arg1 withReturnedItems:(id)arg2 success:(bool)arg3;
- (id)activityItemProviders;
- (id)currentExtensionIdentifier;
- (id)customizationController;
- (void)customizationControllerCustomizationsDidChange:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)excludedActivityTypes;
- (id)initWithActivityItemProviderCollection:(id)arg1 applicationActivities:(id)arg2 sharingURL:(id)arg3 sourceURL:(id)arg4;
- (id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2 sharingURL:(id)arg3 sourceURL:(id)arg4;
- (void)prepareJavaScriptExtensionItemForActivity:(id)arg1;
- (id)printController;
- (long long)provenance;
- (void)setCurrentExtensionIdentifier:(id)arg1;
- (void)setCustomizationController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPrintController:(id)arg1;
- (void)setProvenance:(long long)arg1;
- (void)setSharingExtensionController:(id)arg1;
- (void)setSharingURL:(id)arg1;
- (id)sharingExtensionController;
- (id)sharingURL;

@end
