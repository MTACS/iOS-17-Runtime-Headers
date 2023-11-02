
@protocol _MLNeuralNetworkTensorDataStoring <NSObject>

@required

- (MLCTensorData *)tensorDataForOffset:(unsigned long long)arg1 expectedLength:(unsigned long long)arg2;
- (bool)writeToFile:(NSString *)arg1 error:(id*)arg2;

@end
