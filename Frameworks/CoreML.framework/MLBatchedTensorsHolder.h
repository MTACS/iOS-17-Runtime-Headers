
@interface MLBatchedTensorsHolder : NSObject {
    NSDictionary * _batchedTensors;
    unsigned long long  _numberOfTensors;
}

@property (nonatomic, readonly) NSDictionary *batchedTensors;
@property (nonatomic, readonly) unsigned long long numberOfTensors;

- (void).cxx_destruct;
- (id)batchedTensors;
- (id)initWithBatchedTensors:(id)arg1 numberOfTensors:(unsigned long long)arg2;
- (unsigned long long)numberOfTensors;

@end
