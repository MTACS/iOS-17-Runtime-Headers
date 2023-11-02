
@interface KVDatasetBuilder : NSObject {
    KVDatasetInfo * _datasetInfo;
    unsigned int  _itemCount;
    NSObject<KVProfileWriter> * _writer;
}

- (void).cxx_destruct;
- (bool)_finishWithError:(id*)arg1;
- (id)addItem:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithDatasetInfo:(id)arg1 writer:(id)arg2 error:(id*)arg3;

@end
