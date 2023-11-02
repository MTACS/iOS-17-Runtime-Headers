
@interface KVDataset : NSObject {
    NSObject<KVDatasetReader> * _datasetReader;
}

- (void).cxx_destruct;
- (id)datasetInfo;
- (id)description;
- (bool)enumerateItemsWithError:(id*)arg1 usingBlock:(id /* block */)arg2;
- (id)init;
- (id)initWithReader:(id)arg1;

@end
