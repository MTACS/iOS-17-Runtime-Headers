
@interface CKVSpeechItemRanker_AutoShortcuts : CKVSpeechItemRanker {
    NSMutableDictionary * _datasetDict;
}

- (void).cxx_destruct;
- (bool)addDataset:(id)arg1;
- (id)datasets;
- (bool)enumerateRankedItemsWithError:(id*)arg1 usingBlock:(id /* block */)arg2;
- (bool)hasDatasets;
- (id)initWithDatabase:(id)arg1;

@end
