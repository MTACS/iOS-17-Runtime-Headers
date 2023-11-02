
@interface GEOCollectionResult : NSObject {
    GEOPlaceCollection * _collection;
    GEOPDComponent * _collectionComponent;
    GEOPDCollectionResult * _collectionResult;
}

@property (nonatomic, readonly) GEOPlaceCollection *collection;
@property (nonatomic, readonly) NSArray *placeCollectionItems;

+ (id)collectionResultsFromResponse:(id)arg1;

- (void).cxx_destruct;
- (id)collection;
- (id)initWithCollectionResult:(id)arg1;
- (id)placeCollectionItems;

@end
