
@interface _MLNeuralNetworkBasicTensorDataStore : NSObject <_MLNeuralNetworkTensorDataStoring> {
    NSMutableData * _data;
}

@property (nonatomic, readonly) NSMutableData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)data;
- (id)initWithContentsOfFile:(id)arg1 error:(id*)arg2;
- (id)initWithData:(id)arg1;
- (id)tensorDataForOffset:(unsigned long long)arg1 expectedLength:(unsigned long long)arg2;
- (bool)writeToFile:(id)arg1 error:(id*)arg2;

@end
