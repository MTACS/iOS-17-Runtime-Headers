
@protocol MKCollectionDataProvider <NSObject>

@required

- (void)displayCollections;
- (void)refreshCollections;

@optional

- (MKPlaceCollectionViewModel *)collectionAtIndex:(long long)arg1;
- (NSArray *)collections;
- (GEOPlaceCollection *)geoCollectionAtIndex:(long long)arg1;
- (long long)numberOfCollections;
- (long long)numberOfSections;
- (long long)sectionKindAtIndex:(long long)arg1;

@end
