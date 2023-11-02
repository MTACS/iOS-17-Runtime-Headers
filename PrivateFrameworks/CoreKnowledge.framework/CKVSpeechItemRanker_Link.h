
@interface CKVSpeechItemRanker_Link : CKVSpeechItemRanker {
    NSMutableDictionary * _dynamicRecords;
    NSSet * _dynamicTermDenyList;
    NSMutableDictionary * _oovRecords;
}

+ (bool)enumerateItemsWithError:(id*)arg1 capacityAllocation:(id)arg2 items:(id)arg3 upperBounds:(id)arg4 totalCapacity:(unsigned long long)arg5 database:(id)arg6 usingBlock:(id /* block */)arg7;

- (void).cxx_destruct;
- (bool)addDataset:(id)arg1;
- (id)allocateCapacity;
- (id)datasets;
- (id)description;
- (id)dynamicTermsDataset;
- (bool)enumerateDynamicItemsWithError:(id*)arg1 capacityAllocation:(id)arg2 usingBlock:(id /* block */)arg3;
- (bool)enumerateOOVItemsWithError:(id*)arg1 capacityAllocation:(id)arg2 usingBlock:(id /* block */)arg3;
- (bool)enumerateRankedItemsWithError:(id*)arg1 usingBlock:(id /* block */)arg2;
- (id)fairItemCountPerAppForRecords:(id)arg1 itemCounts:(id)arg2 threshold:(unsigned long long)arg3;
- (bool)hasDatasets;
- (id)initWithDatabase:(id)arg1;
- (id)itemCountsForRecords:(id)arg1;
- (id)oovTermsDataset;

@end
