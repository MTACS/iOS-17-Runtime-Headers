
@interface PHSmartAlbum : PHAssetCollection

+ (id)_collectionSubtypeExpressionForFetchRequests;
+ (id)albumKindFromSmartAlbumSubtype:(long long)arg1;
+ (id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2;
+ (id)fetchType;
+ (id)managedEntityName;

- (bool)collectionHasFixedOrder;

@end
