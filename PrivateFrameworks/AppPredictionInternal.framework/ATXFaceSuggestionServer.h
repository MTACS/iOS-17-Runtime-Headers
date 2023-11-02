
@interface ATXFaceSuggestionServer : NSObject <ATXFaceSuggestionClientXPCInterface, ATXFaceSuggestionGeneratorDelegate, ATXPosterDescriptorCacheObserver, ATXWidgetDescriptorCacheObserver, NSXPCListenerDelegate> {
    ATXFaceSuggestionAssetParameters * _assetParameters;
    ATXComplicationSuggestionGenerator * _complicationsGenerator;
    ATXPosterConfigurationCache * _configurationCache;
    ATXPosterDescriptorCache * _descriptorCache;
    ATXFaceSuggestionGenerator * _faceSuggestionGenerator;
    NSXPCListener * _listener;
    _PASSimpleCoalescingTimer * _modeFaceSuggestionRefreshCoalescingTimer;
    _ATXInternalUninstallNotification * _uninstallNotification;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)descriptorCacheDidUpdateWithDescriptors:(id)arg1;
- (void)fetchComplicationSetsForFaceGalleryItem:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchComplicationSuggestionsModelDescriptionWithCompletion:(id /* block */)arg1;
- (void)fetchFaceGalleryConfigurationWithCompletion:(id /* block */)arg1;
- (void)fetchFaceSuggestionsForFocusMode:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchInlineComplicationSetForFaceGalleryItem:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchLandscapeComplicationSetsForFaceGalleryItem:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchMetricsDescriptionWithCompletion:(id /* block */)arg1;
- (void)fetchPosterConfigurationsWithCompletion:(id /* block */)arg1;
- (void)fetchPosterDescriptorsAndSuggestionDataWithCompletion:(id /* block */)arg1;
- (void)fetchRankedPosterDescriptors:(id /* block */)arg1;
- (void)fetchScoredComplicationDescriptionWithCompletion:(id /* block */)arg1;
- (void)generatorDidUpdateFaceGalleryConfiguration:(id)arg1;
- (id)init;
- (void)inputDescriptionForComplicationSuggestionSignal:(id)arg1 completion:(id /* block */)arg2;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)logComplicationsSeenInGalleryWithEngagements:(id)arg1 completion:(id /* block */)arg2;
- (void)logFaceGalleryDidAppearWithFaceGalleryConfiguration:(id)arg1;
- (void)logFaceGalleryItemsSeenInGalleryWithOutcomes:(id)arg1 completion:(id /* block */)arg2;
- (void)logPosterEdit:(id)arg1 completion:(id /* block */)arg2;
- (void)logPosterEditUIViewedWithCompletion:(id /* block */)arg1;
- (void)logPosterSwitch:(id)arg1 completion:(id /* block */)arg2;
- (void)posterBoardDidUpdateConfigurations:(id)arg1 completion:(id /* block */)arg2;
- (void)posterBoardDidUpdateDescriptors:(id)arg1 completion:(id /* block */)arg2;
- (void)refreshComplicationsCacheWithCompletion:(id /* block */)arg1;
- (void)regenerateFaceGalleryConfigurationWithCompletion:(id /* block */)arg1;
- (void)synchronousDateOfLastGalleryAppearanceWithCompletion:(id /* block */)arg1;
- (void)widgetDescriptorCacheDidUpdateDescriptors:(id)arg1;

@end
