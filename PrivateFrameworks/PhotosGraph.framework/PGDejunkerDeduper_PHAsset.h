
@interface PGDejunkerDeduper_PHAsset : PGDejunkerDeduper_CLSCurationItem {
    NSDictionary * _averageFaceQualityByAssetUUID;
    NSDictionary * _peopleScenesByAssetUUID;
    NSDictionary * _personLocalIdentifiersByAssetUUID;
}

- (void).cxx_destruct;
- (void)_buildCachesWithAssets:(id)arg1 options:(id)arg2;
- (id)bestItemInItems:(id)arg1 options:(id)arg2;
- (id)debugPersonStringForItem:(id)arg1;
- (id)dejunkedDedupedAssetsInAssets:(id)arg1 options:(id)arg2 debugInfo:(id)arg3 progressBlock:(id /* block */)arg4;
- (id)faceprintByPersonLocalIdentifierByItemIdentifierWithItems:(id)arg1;
- (id)featureWithItem:(id)arg1;
- (bool)isJunkForItem:(id)arg1;
- (id)itemsSortedByScoreWithItems:(id)arg1 options:(id)arg2;

@end
