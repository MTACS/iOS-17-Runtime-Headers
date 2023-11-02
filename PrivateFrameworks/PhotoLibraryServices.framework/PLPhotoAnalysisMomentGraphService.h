
@interface PLPhotoAnalysisMomentGraphService : NSObject {
    <PLPhotoAnalysisServiceProvider> * _serviceProvider;
}

- (void).cxx_destruct;
- (id)graphStatusWithError:(id*)arg1;
- (id)initWithServiceProvider:(id)arg1;
- (void)performGraphIncrementalUpdateWithOptions:(id)arg1 reply:(id /* block */)arg2;
- (void)performGraphRebuildWithOptions:(id)arg1 reply:(id /* block */)arg2;
- (void)performMemoryNodesRebuildForCategory:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (id)requestAssetSearchKeywordsForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 error:(id*)arg3;
- (id)requestGraphSearchMetadataWithOptions:(id)arg1 error:(id*)arg2;
- (id)requestSearchIndexKeywordsForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 error:(id*)arg3;
- (id)requestSearchableAssetUUIDsBySocialGroupForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 isFullAnalysis:(bool)arg3 error:(id*)arg4;
- (id)requestSynonymsDictionariesWithError:(id*)arg1;
- (id)requestZeroKeywordsWithOptions:(id)arg1 error:(id*)arg2;

@end
