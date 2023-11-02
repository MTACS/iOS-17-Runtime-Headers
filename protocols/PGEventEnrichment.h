
@protocol PGEventEnrichment <NSObject>

@required

- (PGGraphPersonNodeCollection *)anniversaryPersonNodes;
- (PGGraphPersonNodeCollection *)birthdayPersonNodes;
- (PGGraphMomentNodeCollection *)eventEnrichmentMomentNodes;
- (NSArray *)eventEnrichmentSortedMomentNodes;
- (PHAssetCollection *)fetchAssetCollectionInPhotoLibrary:(PHPhotoLibrary *)arg1;
- (bool)isAggregation;
- (bool)isLongTrip;
- (bool)isShortTrip;
- (bool)isTrip;
- (NSSet *)meaningLabels;
- (NSSet *)reliableMeaningLabels;
- (NSString *)uuid;

@end
