
@interface LPAppleMapsMetadataProviderSpecialization : LPMetadataProviderSpecialization {
    bool  _cancelled;
    LPMapCollectionMetadata * _collectionMetadata;
    MKPlaceCuratedCollectionRefiner * _curatedCollectionRefiner;
    CLGeocoder * _geocoder;
    LPMapMetadata * _mapMetadata;
    _MKURLParser * _parser;
    LPMapCollectionPublisherMetadata * _publisherMetadata;
    MKPlacePublisherRefiner * _publisherRefiner;
}

+ (unsigned long long)specialization;
+ (id)specializedMetadataProviderForURLWithContext:(id)arg1;

- (void).cxx_destruct;
- (void)cancel;
- (void)complete;
- (void)completeWithCollection;
- (void)completeWithCuratedCollection;
- (void)completeWithDirections;
- (void)completeWithMapItem:(id)arg1;
- (void)completeWithPlacemark:(id)arg1;
- (void)completeWithPublisher;
- (void)completeWithSearchQuery:(id)arg1;
- (void)continueWithLookAroundSnapshotWithOptions:(id)arg1;
- (void)continueWithSnapshotOfMapItems:(id)arg1 inRegion:(struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)continueWithSnapshotOfMapRegion:(struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)fail;
- (id)geocoder;
- (bool)isSearch;
- (void)populateImageWithMapSnapshot:(id)arg1;
- (void)resolveMapRegionWithCompletionHandler:(id /* block */)arg1;
- (void)start;

@end
