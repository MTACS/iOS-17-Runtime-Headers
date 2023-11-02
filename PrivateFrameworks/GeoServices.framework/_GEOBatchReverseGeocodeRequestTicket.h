
@interface _GEOBatchReverseGeocodeRequestTicket : _GEOPlaceRequestTicket <GEOMapServiceTicket> {
    id /* block */  _locationShifter;
    geo_isolater * _shiftIsolation;
}

@property (nonatomic, readonly) NSArray *browseCategories;
@property (nonatomic) unsigned long long cachePolicy;
@property (getter=isCancelled, nonatomic, readonly) bool cancelled;
@property (nonatomic, readonly) GEOCategorySearchResultSection *categorySearchResultSection;
@property (getter=isChainResultSet, nonatomic, readonly) bool chainResultSet;
@property (nonatomic, readonly) GEOResolvedItem *clientResolvedResult;
@property (nonatomic, readonly) NSArray *collectionResults;
@property (nonatomic, readonly) struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; } dataRequestKind;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) GEORelatedSearchSuggestion *defaultRelatedSuggestion;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) GEODirectionIntent *directionIntent;
@property (nonatomic, readonly) bool disableAdditionalViewportPadding;
@property (nonatomic, readonly) NSArray *displayHeaderSubstitutes;
@property (nonatomic, readonly) NSArray *dotPlaces;
@property (nonatomic, readonly) unsigned int dymSuggestionVisibleTime;
@property (nonatomic, readonly) bool enableStructuredRAPAffordance;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) GEOPDMerchantLookupResult *merchantLookupResult;
@property (nonatomic, readonly) GEOPDPlaceSummaryLayoutMetadata *placeSummaryLayoutMetadata;
@property (nonatomic, readonly) NSArray *publisherResults;
@property (nonatomic, readonly) NSArray *relatedEntitySections;
@property (nonatomic, readonly) NSArray *relatedSearchSuggestions;
@property (nonatomic, readonly) GEOMapRegion *resultBoundingRegion;
@property (nonatomic, readonly) NSString *resultDisplayHeader;
@property (nonatomic, readonly) GEOResultRefinementGroup *resultRefinementGroup;
@property (nonatomic, readonly) NSString *resultSectionHeader;
@property (nonatomic, readonly) NSArray *retainedSearchMetadata;
@property (nonatomic, readonly) GEOSearchAutoRedoThreshold *searchAutoRedoThreshold;
@property (nonatomic, readonly) NSArray *searchResultSections;
@property (nonatomic, readonly) int searchResultType;
@property (nonatomic, readonly) int searchResultViewType;
@property (nonatomic, readonly) GEOSearchSectionList *searchSectionList;
@property (nonatomic, readonly) bool shouldEnableRedoSearch;
@property (nonatomic, readonly) bool showDymSuggestionCloseButton;
@property (readonly) Class superclass;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;

- (void).cxx_destruct;
- (void)_handleResponse:(id)arg1 completion:(id /* block */)arg2;
- (void)_processRequest:(id)arg1 auditToken:(id)arg2 timeout:(double)arg3 withHandler:(id /* block */)arg4 refinedHandler:(id /* block */)arg5 networkActivity:(id /* block */)arg6;
- (void)_submitRequest:(id)arg1 auditToken:(id)arg2 timeout:(double)arg3 withHandler:(id /* block */)arg4 networkActivity:(id /* block */)arg5;
- (id)initWithRequest:(id)arg1 locationShifter:(id /* block */)arg2 traits:(id)arg3;

@end
