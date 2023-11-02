
@protocol MLNeuralNetwork <NSObject>

@required

- (<MLFeatureProvider> *)evaluate:(id <MLFeatureProvider>)arg1 error:(id*)arg2;

@end
