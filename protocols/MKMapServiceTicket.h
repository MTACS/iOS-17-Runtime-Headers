
@protocol MKMapServiceTicket <NSObject>

@required

- (void)applyToCorrectedSearch:(GEORPCorrectedSearch *)arg1;
- (void)applyToPlaceInfo:(GEORPPlaceInfo *)arg1;
- (GEOMapRegion *)boundingRegion;
- (NSArray *)browseCategories;
- (void)cancel;
- (GEOCategorySearchResultSection *)categorySearchResultSection;
- (GEOResolvedItem *)clientResolvedResult;
- (NSArray *)collectionResults;
- (GEORelatedSearchSuggestion *)defaultRelatedSuggestion;
- (GEODirectionIntent *)directionIntent;
- (bool)disableAdditionalViewportPadding;
- (NSArray *)displayHeaderSubstitutes;
- (NSArray *)dotPlaces;
- (unsigned int)dymSuggestionVisibleTime;
- (bool)enableStructuredRAPAffordance;
- (NSError *)error;
- (NSArray *)exactMapItems;
- (bool)isChainResultSet;
- (GEOPDPlaceSummaryLayoutMetadata *)placeSummaryLayoutMetadata;
- (NSArray *)publisherResults;
- (NSArray *)refinedMapItems;
- (NSArray *)relatedEntitySections;
- (NSArray *)relatedSearchSuggestions;
- (NSString *)resultDisplayHeader;
- (GEOResultRefinementGroup *)resultRefinementGroup;
- (NSArray *)retainedSearchMetadata;
- (GEOSearchAutoRedoThreshold *)searchAutoRedoThreshold;
- (NSArray *)searchResultSections;
- (int)searchResultType;
- (int)searchResultViewType;
- (GEOSearchSectionList *)searchSectionList;
- (NSString *)sectionHeader;
- (bool)shouldEnableRedoSearch;
- (bool)showDymSuggestionCloseButton;
- (void)submitWithHandler:(void *)arg1 networkActivity:(void *)arg2; // needs 2 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*, id /* block */, void*, void, id /* block */, bool, void*
- (void)submitWithHandler:(void *)arg1 queue:(void *)arg2 networkActivity:(void *)arg3; // needs 3 arg types, found 14: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*, NSObject<OS_dispatch_queue> *, id /* block */, void*, void, id /* block */, bool, void*
- (void)submitWithHandler:(void *)arg1 timeout:(void *)arg2 networkActivity:(void *)arg3; // needs 3 arg types, found 14: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*, long long, id /* block */, void*, void, id /* block */, bool, void*
- (void)submitWithRefinedHandler:(void *)arg1 networkActivity:(void *)arg2; // needs 2 arg types, found 14: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSArray *, NSError *, void*, id /* block */, void*, void, id /* block */, bool, void*
- (void)submitWithRefinedHandler:(void *)arg1 timeout:(void *)arg2 networkActivity:(void *)arg3; // needs 3 arg types, found 15: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSArray *, NSError *, void*, long long, id /* block */, void*, void, id /* block */, bool, void*
- (GEOMapServiceTraits *)traits;

@end
