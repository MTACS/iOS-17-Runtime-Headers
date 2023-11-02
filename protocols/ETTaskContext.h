
@protocol ETTaskContext

@required

- (<ETDataProvider> *)doInferenceOnData:(id <ETDataProvider>)arg1 error:(id*)arg2;
- (ETDataTensor *)getTensorNamed:(NSString *)arg1;
- (bool)saveNetwork:(NSString *)arg1 inplace:(bool)arg2 error:(id*)arg3;
- (bool)setTensorNamed:(NSString *)arg1 withValue:(ETDataTensor *)arg2 error:(id*)arg3;

@end
