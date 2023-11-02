
@protocol GEOCompletionItem <NSObject>

@required

- (long long)autocompleteCellType;
- (NSString *)calloutTitle;
- (GEOResolvedItem *)clientResolved;
- (GEOCollectionResult *)collectionResult;
- (GEODirectionIntent *)directionIntent;
- (float)disambiguationRadiusMeters;
- (NSArray *)displayLines;
- (NSData *)entryMetadata;
- (long long)entryTapBehavior;
- (<GEOMapItem> *)geoMapItem;
- (bool)getCoordinate:(struct { double x1; double x2; }*)arg1;
- (bool)hasDisambiguationRadiusMeters;
- (bool)hasQueryAcceleratorAffordanceEnabled;
- (bool)hasSortPriority;
- (NSArray *)highlightsForLine:(unsigned long long)arg1;
- (GEOStyleAttributes *)iconStyleAttributes;
- (GEOMapItemIdentifier *)identifier;
- (NSData *)metadata;
- (int)placeType;
- (GEOPublisherResult *)publisherResult;
- (NSString *)queryAcceleratorCompletionString;
- (NSString *)queryLine;
- (NSArray *)resultRefinements;
- (GEORetainedSearchMetadata *)retainedSearchMetadata;
- (GEOSearchCategory *)searchCategory;
- (void)sendFeedback;
- (GEOServerResultScoreMetadata *)serverResultScoreMetadata;
- (long long)sortPriority;
- (bool)supportsOfflineDownload;
- (long long)type;

@end
