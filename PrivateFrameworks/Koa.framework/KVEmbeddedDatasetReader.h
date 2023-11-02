
@interface KVEmbeddedDatasetReader : NSObject <KVDatasetReader> {
    NSData * _data;
    const struct Dataset { unsigned char x1[1]; } * _dataset;
    KVDatasetInfo * _datasetInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)datasetInfo;
- (id)description;
- (bool)enumerateItemsWithError:(id*)arg1 usingBlock:(id /* block */)arg2;
- (id)initWithData:(id)arg1 dataset:(const struct Dataset { unsigned char x1[1]; }*)arg2 error:(id*)arg3;

@end
