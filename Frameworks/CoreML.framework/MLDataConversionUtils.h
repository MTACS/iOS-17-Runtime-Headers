
@interface MLDataConversionUtils : NSObject

+ (id)batchProviderFromEspressoDataProvider:(id)arg1 neuralNetworkEngine:(id)arg2 options:(id)arg3 error:(id*)arg4;
+ (id)batchProviderFromMLComputeDataProvider:(id)arg1 neuralNetworkEngine:(id)arg2 options:(id)arg3 error:(id*)arg4;
+ (id)espressoDataProviderFromBatchProvider:(id)arg1 forPrediction:(bool)arg2 neuralNetworkEngine:(id)arg3 error:(id*)arg4;
+ (id)espressoDataProviderFromFeatureProvider:(id)arg1 forPrediction:(bool)arg2 neuralNetworkEngine:(id)arg3 error:(id*)arg4;
+ (id)featureProviderFomMLComputeDataProvider:(id)arg1 neuralNetworkEngine:(id)arg2 options:(id)arg3 error:(id*)arg4;
+ (id)featureProviderFromEspressoDataProvider:(id)arg1 neuralNetworkEngine:(id)arg2 options:(id)arg3 error:(id*)arg4;
+ (id)mlComputeDataProviderFromBatchProvider:(id)arg1 batchSize:(unsigned long long)arg2 forPrediction:(bool)arg3 neuralNetworkEngine:(id)arg4 error:(id*)arg5;
+ (unsigned long long)mlComputeDataTypeSize:(long long)arg1;
+ (bool)populateEspressoShapeAndStridesFromInputShape:(id)arg1 ndRepresentation:(bool)arg2 espressoShape:(id*)arg3 espressoStrides:(id*)arg4 error:(id*)arg5;
+ (bool)populateShapeAndStrideFor:(id)arg1 inputShape:(id)arg2 outputShape:(id*)arg3 outputStrides:(id*)arg4 error:(id*)arg5;
+ (unsigned long long)sizeFromShape:(id)arg1;
+ (id)stridesForShape:(id)arg1;

@end
