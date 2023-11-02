
@interface GEOCollectionSuggestionResult : NSObject {
    GEOPDCollectionSuggestionResult * _collectionSuggestionResult;
    NSArray * _collections;
}

@property (nonatomic, readonly) NSArray *collections;
@property (nonatomic, readonly) GEOExploreGuides *exploreGuides;

- (void).cxx_destruct;
- (id)collections;
- (id)exploreGuides;
- (id)initWithCollectionSuggestionResult:(id)arg1 mapsResults:(id)arg2;

@end
