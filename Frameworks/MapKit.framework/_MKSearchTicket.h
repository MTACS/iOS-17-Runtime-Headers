
@interface _MKSearchTicket : _MKTicket <MKMapServiceSearchTicket>

@property (nonatomic, readonly) GEOMapRegion *boundingRegion;
@property (nonatomic, readonly) NSArray *browseCategories;
@property (nonatomic, readonly) GEOCategorySearchResultSection *categorySearchResultSection;
@property (getter=isChainResultSet, nonatomic, readonly) bool chainResultSet;
@property (nonatomic, readonly) GEOResolvedItem *clientResolvedResult;
@property (nonatomic, readonly) NSArray *collectionResults;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) GEORelatedSearchSuggestion *defaultRelatedSuggestion;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) GEODirectionIntent *directionIntent;
@property (nonatomic, readonly) bool disableAdditionalViewportPadding;
@property (nonatomic, readonly) NSArray *displayHeaderSubstitutes;
@property (nonatomic, readonly) NSArray *dotPlaces;
@property (nonatomic, readonly) unsigned int dymSuggestionVisibleTime;
@property (nonatomic, readonly) bool enableStructuredRAPAffordance;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSArray *exactMapItems;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) GEOPDPlaceSummaryLayoutMetadata *placeSummaryLayoutMetadata;
@property (nonatomic, readonly) NSArray *publisherResults;
@property (nonatomic, readonly) NSArray *refinedMapItems;
@property (nonatomic, readonly) NSArray *relatedEntitySections;
@property (nonatomic, readonly) NSArray *relatedSearchSuggestions;
@property (nonatomic, readonly) NSString *resultDisplayHeader;
@property (nonatomic, readonly) GEOResultRefinementGroup *resultRefinementGroup;
@property (nonatomic, readonly) NSArray *retainedSearchMetadata;
@property (nonatomic, readonly) GEOSearchAutoRedoThreshold *searchAutoRedoThreshold;
@property (nonatomic, readonly) NSString *searchQuery;
@property (nonatomic, readonly) NSArray *searchResultSections;
@property (nonatomic, readonly) int searchResultType;
@property (nonatomic, readonly) int searchResultViewType;
@property (nonatomic, readonly) GEOSearchSectionList *searchSectionList;
@property (nonatomic, readonly) NSString *sectionHeader;
@property (nonatomic, readonly) bool shouldEnableRedoSearch;
@property (nonatomic, readonly) bool showDymSuggestionCloseButton;
@property (readonly) Class superclass;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;

- (id)initWithSearchTicket:(id)arg1;
- (id)searchQuery;

@end
