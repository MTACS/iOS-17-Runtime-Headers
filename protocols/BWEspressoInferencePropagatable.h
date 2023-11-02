
@protocol BWEspressoInferencePropagatable <NSObject>

@required

- (<BWInferencePropagatable> *)propagatable;
- (void)setPropagatable:(id <BWInferencePropagatable>)arg1;
- (void)setTensorMemoryProvider:(id <BWEspressoInferenceTensorMemoryProvider>)arg1;
- (<BWEspressoInferenceTensorMemoryProvider> *)tensorMemoryProvider;

@end
