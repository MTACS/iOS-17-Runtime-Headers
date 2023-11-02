
@interface PGKeyCurator : NSObject {
    CLSAssetsBeautifier * _beautifier;
    PGCurationCriteriaFactory * _curationCriteriaFactory;
    CLSSimilarStacker * _similarStacker;
}

- (void).cxx_destruct;
- (id)_keyItemInItems:(id)arg1 options:(id)arg2 criteria:(id)arg3 debugInfo:(id)arg4 progressBlock:(id /* block */)arg5;
- (id)bestItemIdentifierWithItems:(id)arg1 options:(id)arg2 debugInfo:(out id*)arg3 criteria:(id)arg4 curationOptions:(id)arg5;
- (id)bestItemInItems:(id)arg1 options:(id)arg2 criteria:(id)arg3 minimumCriteriaScore:(double)arg4 triedAndFailedToDoBetter:(bool*)arg5;
- (id)bestItemInItems:(id)arg1 options:(id)arg2 criteria:(id)arg3 minimumCriteriaScore:(double)arg4 useIconicScore:(bool)arg5;
- (bool)cluster:(id)arg1 isBetterThanCluster:(id)arg2 forMemories:(bool)arg3 allowGuestAsset:(bool)arg4;
- (bool)cluster:(id)arg1 scoresBetterThanCluster:(id)arg2;
- (id)clusterWithSubclusters:(id)arg1 keyItem:(id)arg2;
- (id)initWithCurationCriteriaFactory:(id)arg1;
- (bool)item:(id)arg1 passesCriteria:(id)arg2 score:(double*)arg3;
- (id)itemsByIconicScoreBucketWithItems:(id)arg1;
- (id)keyItemIdentifierWithItems:(id)arg1 options:(id)arg2 debugInfo:(out id*)arg3;
- (id)keyItemInItems:(id)arg1 options:(id)arg2 criteria:(id)arg3 debugInfo:(id)arg4 progressBlock:(id /* block */)arg5;
- (id)keyItemWithFeeder:(id)arg1 options:(id)arg2 criteria:(id)arg3 debugInfo:(id)arg4 progressBlock:(id /* block */)arg5;
- (bool)scoreLevelOfCluster:(id)arg1 isAboveScoreLevelOfCluster:(id)arg2;

@end
