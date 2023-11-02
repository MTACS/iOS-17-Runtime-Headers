
@protocol GEOMapServiceTicket <GEOMapServiceCancellableTicket, GEOMapServiceCorrectableTicket, GEOMapServiceThrottlableTicket>

@required

- (void)applyToPlaceInfo:(GEORPPlaceInfo *)arg1;
- (NSArray *)browseCategories;
- (unsigned long long)cachePolicy;
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
- (bool)isChainResultSet;
- (GEOPDMerchantLookupResult *)merchantLookupResult;
- (GEOPDPlaceSummaryLayoutMetadata *)placeSummaryLayoutMetadata;
- (NSArray *)publisherResults;
- (NSArray *)relatedEntitySections;
- (NSArray *)relatedSearchSuggestions;
- (GEOMapRegion *)resultBoundingRegion;
- (NSString *)resultDisplayHeader;
- (GEOResultRefinementGroup *)resultRefinementGroup;
- (NSString *)resultSectionHeader;
- (NSArray *)retainedSearchMetadata;
- (GEOSearchAutoRedoThreshold *)searchAutoRedoThreshold;
- (NSArray *)searchResultSections;
- (int)searchResultType;
- (int)searchResultViewType;
- (GEOSearchSectionList *)searchSectionList;
- (void)setCachePolicy:(unsigned long long)arg1;
- (bool)shouldEnableRedoSearch;
- (bool)showDymSuggestionCloseButton;
- (void)submitWithHandler:(void *)arg1 auditToken:(void *)arg2 timeout:(void *)arg3 networkActivity:(void *)arg4; // needs 4 arg types, found 15: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*, GEOApplicationAuditToken *, long long, id /* block */, void*, void, id /* block */, bool, void*
- (void)submitWithHandler:(void *)arg1 auditToken:(void *)arg2 timeout:(void *)arg3 networkActivity:(void *)arg4 queue:(void *)arg5; // needs 5 arg types, found 16: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*, GEOApplicationAuditToken *, long long, id /* block */, void*, void, id /* block */, bool, void*, NSObject<OS_dispatch_queue> *
- (void)submitWithHandler:(void *)arg1 networkActivity:(void *)arg2; // needs 2 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*, id /* block */, void*, void, id /* block */, bool, void*
- (void)submitWithHandler:(void *)arg1 networkActivity:(void *)arg2 queue:(void *)arg3; // needs 3 arg types, found 14: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*, id /* block */, void*, void, id /* block */, bool, void*, NSObject<OS_dispatch_queue> *
- (void)submitWithHandler:(void *)arg1 timeout:(void *)arg2 networkActivity:(void *)arg3; // needs 3 arg types, found 14: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*, long long, id /* block */, void*, void, id /* block */, bool, void*
- (void)submitWithHandler:(void *)arg1 timeout:(void *)arg2 networkActivity:(void *)arg3 queue:(void *)arg4; // needs 4 arg types, found 15: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*, long long, id /* block */, void*, void, id /* block */, bool, void*, NSObject<OS_dispatch_queue> *
- (void)submitWithRefinedHandler:(void *)arg1 auditToken:(void *)arg2 timeout:(void *)arg3 networkActivity:(void *)arg4; // needs 4 arg types, found 16: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSArray *, NSError *, void*, GEOApplicationAuditToken *, long long, id /* block */, void*, void, id /* block */, bool, void*
- (void)submitWithRefinedHandler:(void *)arg1 auditToken:(void *)arg2 timeout:(void *)arg3 networkActivity:(void *)arg4 queue:(void *)arg5; // needs 5 arg types, found 17: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSArray *, NSError *, void*, GEOApplicationAuditToken *, long long, id /* block */, void*, void, id /* block */, bool, void*, NSObject<OS_dispatch_queue> *
- (void)submitWithRefinedHandler:(void *)arg1 networkActivity:(void *)arg2; // needs 2 arg types, found 14: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSArray *, NSError *, void*, id /* block */, void*, void, id /* block */, bool, void*
- (void)submitWithRefinedHandler:(void *)arg1 networkActivity:(void *)arg2 queue:(void *)arg3; // needs 3 arg types, found 15: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSArray *, NSError *, void*, id /* block */, void*, void, id /* block */, bool, void*, NSObject<OS_dispatch_queue> *
- (void)submitWithRefinedHandler:(void *)arg1 timeout:(void *)arg2 networkActivity:(void *)arg3; // needs 3 arg types, found 15: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSArray *, NSError *, void*, long long, id /* block */, void*, void, id /* block */, bool, void*
- (void)submitWithRefinedHandler:(void *)arg1 timeout:(void *)arg2 networkActivity:(void *)arg3 queue:(void *)arg4; // needs 4 arg types, found 16: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSArray *, NSError *, void*, long long, id /* block */, void*, void, id /* block */, bool, void*, NSObject<OS_dispatch_queue> *
- (GEOMapServiceTraits *)traits;

@end
