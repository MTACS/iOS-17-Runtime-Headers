
@interface GEOAllCollectionsViewResult : NSObject {
    GEOPDAllCollectionsViewResult * _allCollectionsViewResult;
    NSArray * _places;
}

@property (nonatomic, readonly) NSArray *collectionIdentifiers;
@property (nonatomic, readonly) NSArray *resultFilters;

- (void).cxx_destruct;
- (id)collectionIdentifiers;
- (id)initWithAllCollectionsViewResult:(id)arg1;
- (id)initWithAllCollectionsViewResult:(id)arg1 withPlaces:(id)arg2;
- (id)resultFilters;

@end
