
@interface KVJSONDatasetReader : NSObject <KVDatasetReader> {
    KVDatasetInfo * _datasetInfo;
    NSArray * _items;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)datasetInfo;
- (id)description;
- (bool)enumerateItemsWithError:(id*)arg1 usingBlock:(id /* block */)arg2;
- (id)initWithDictionary:(id)arg1 error:(id*)arg2;

@end
