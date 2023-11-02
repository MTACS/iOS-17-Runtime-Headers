
@interface CKVDatabaseSearcher : NSObject {
    CKVIndexManager * _idxMgr;
}

+ (id)_datasetRecordForOriginAppId:(id)arg1 itemType:(long long)arg2 database:(id)arg3 error:(id*)arg4;
+ (id)_datasetRowIdToDatasetHashMap:(id)arg1;
+ (id)_datasetRowIdToRecordMap:(id)arg1 error:(id*)arg2;
+ (bool)_enumerateLocalItemsWithBatchSize:(unsigned long long)arg1 offset:(unsigned long long)arg2 enumerateAll:(bool)arg3 database:(id)arg4 error:(id*)arg5 usingBlock:(id /* block */)arg6;
+ (bool)_selectContentAndProduceItem:(id*)arg1 withProvenanceRecord:(id)arg2 database:(id)arg3 error:(id*)arg4;
+ (bool)_selectContentRecord:(id*)arg1 withDatasetRowId:(id)arg2 withContentHash:(id)arg3 database:(id)arg4 error:(id*)arg5;
+ (id)_selectItemForLocalInstance:(id)arg1 outInstanceHash:(id*)arg2 database:(id)arg3 error:(id*)arg4;
+ (bool)_selectProvenanceRecord:(id*)arg1 withProvenanceRowId:(id)arg2 database:(id)arg3 error:(id*)arg4;
+ (id)countDatasetItems:(id)arg1 database:(id)arg2 error:(id*)arg3;
+ (bool)enumerateAllItemsOfDataset:(id)arg1 database:(id)arg2 batchSize:(unsigned long long)arg3 error:(id*)arg4 usingBlock:(id /* block */)arg5;
+ (bool)enumerateAllLocalItemsWithBatchSize:(unsigned long long)arg1 database:(id)arg2 error:(id*)arg3 usingBlock:(id /* block */)arg4;
+ (bool)enumerateLocalItemsOfDataset:(id)arg1 database:(id)arg2 batchSize:(unsigned long long)arg3 uptoRank:(id)arg4 error:(id*)arg5 usingBlock:(id /* block */)arg6;
+ (id)selectAllDatasets:(id)arg1 error:(id*)arg2;
+ (id)selectAllDatasetsFromDatabases:(id)arg1 outDatasetCount:(unsigned int*)arg2 error:(id*)arg3;
+ (id)selectDatasetsWithItemTypes:(id)arg1 database:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (bool)_enumerateResultsOfFTSSearch:(id)arg1 searchCriteria:(id)arg2 sortByRelevance:(bool)arg3 error:(id*)arg4 usingBlock:(id /* block */)arg5;
- (id)_selectItemsWithRecordIds:(id)arg1 databaseConnection:(id)arg2 error:(id*)arg3;
- (id)computeAllDatasetStatistics;
- (bool)enumerateLocalItemsBatchWithSize:(unsigned long long)arg1 offset:(unsigned long long)arg2 error:(id*)arg3 usingBlock:(id /* block */)arg4;
- (bool)enumerateLocalItemsLastModifiedForOriginAppId:(id)arg1 itemType:(long long)arg2 batchSize:(unsigned long long)arg3 error:(id*)arg4 usingBlock:(id /* block */)arg5;
- (id)initWithIndexManager:(id)arg1;
- (id)searchLocalFTSWithCriteria:(id)arg1 sortByRelevance:(bool)arg2 error:(id*)arg3;
- (id)selectLocalDeletedAppSpecificDatasetOriginAppIdsWithItemType:(long long)arg1 batchSize:(unsigned long long)arg2 error:(id*)arg3;

@end
