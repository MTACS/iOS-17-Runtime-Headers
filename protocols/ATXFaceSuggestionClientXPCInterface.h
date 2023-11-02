
@protocol ATXFaceSuggestionClientXPCInterface

@required

- (void)fetchComplicationSetsForFaceGalleryItem:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: ATXFaceGalleryItem *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)fetchComplicationSuggestionsModelDescriptionWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)fetchFaceGalleryConfigurationWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ATXFaceGalleryConfiguration *, NSError *, void*
- (void)fetchFaceSuggestionsForFocusMode:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: ATXFaceSuggestionFocusMode *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)fetchInlineComplicationSetForFaceGalleryItem:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: ATXFaceGalleryItem *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ATXComplicationSet *, NSError *, void*
- (void)fetchLandscapeComplicationSetsForFaceGalleryItem:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: ATXFaceGalleryItem *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)fetchMetricsDescriptionWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)fetchPosterConfigurationsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)fetchPosterDescriptorsAndSuggestionDataWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)fetchRankedPosterDescriptors:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)fetchScoredComplicationDescriptionWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)inputDescriptionForComplicationSuggestionSignal:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)logComplicationsSeenInGalleryWithEngagements:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)logFaceGalleryDidAppearWithFaceGalleryConfiguration:(ATXFaceGalleryConfiguration *)arg1;
- (void)logFaceGalleryItemsSeenInGalleryWithOutcomes:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)logPosterEdit:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: ATXPosterEdit *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)logPosterEditUIViewedWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)logPosterSwitch:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: ATXPosterSwitch *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)posterBoardDidUpdateConfigurations:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)posterBoardDidUpdateDescriptors:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)refreshComplicationsCacheWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)regenerateFaceGalleryConfigurationWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ATXFaceGalleryConfiguration *, NSError *, void*
- (void)synchronousDateOfLastGalleryAppearanceWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDate *, NSError *, void*

@end
