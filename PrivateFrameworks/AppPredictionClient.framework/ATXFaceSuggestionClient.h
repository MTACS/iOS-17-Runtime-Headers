
@interface ATXFaceSuggestionClient : NSObject <ATXFaceSuggestionClientXPCInterface, ATXFaceSuggestionLogging, PBFGalleryProviding> {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _loggingQueue;
    ATXFaceGalleryBiomeStream * _stream;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_logEvent:(id)arg1;
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
- (id)init;
- (void)inputDescriptionForComplicationSuggestionSignal:(id)arg1 completion:(id /* block */)arg2;
- (void)logComplicationGalleryDidAppearWithComplicationSets:(id)arg1;
- (void)logComplicationGalleryDidDisappear;
- (void)logComplicationsSeenInGalleryWithEngagements:(id)arg1 completion:(id /* block */)arg2;
- (void)logDidAddComplication:(id)arg1;
- (void)logDidAddComplicationSet:(id)arg1;
- (void)logDidHideFaceGalleryItem:(id)arg1;
- (void)logDidTapComplication:(id)arg1;
- (void)logDidTapComplicationSet:(id)arg1;
- (void)logDidTapFaceGalleryItem:(id)arg1;
- (void)logFaceGalleryDidAppearWithFaceGalleryConfiguration:(id)arg1;
- (void)logFaceGalleryDidDisappear;
- (void)logFaceGalleryItemsDidAppear:(id)arg1;
- (void)logFaceGalleryItemsSeenInGalleryWithOutcomes:(id)arg1 completion:(id /* block */)arg2;
- (void)logPosterEdit:(id)arg1 completion:(id /* block */)arg2;
- (void)logPosterEditUIViewedWithCompletion:(id /* block */)arg1;
- (void)logPosterSwitch:(id)arg1 completion:(id /* block */)arg2;
- (void)posterBoardDidUpdateConfigurations:(id)arg1 completion:(id /* block */)arg2;
- (void)posterBoardDidUpdateDescriptors:(id)arg1 completion:(id /* block */)arg2;
- (void)refreshComplicationsCacheWithCompletion:(id /* block */)arg1;
- (void)regenerateFaceGalleryConfigurationWithCompletion:(id /* block */)arg1;
- (void)synchronousDateOfLastGalleryAppearanceWithCompletion:(id /* block */)arg1;

@end
