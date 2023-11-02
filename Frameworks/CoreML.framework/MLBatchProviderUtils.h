
@interface MLBatchProviderUtils : NSObject

+ (id)batchFromConcatinatingBatches:(id)arg1;
+ (id)batchWithSubsetOfFeaturesNamed:(id)arg1 fromBatch:(id)arg2;
+ (id)dictionaryFromBatch:(id)arg1;
+ (id)dictionaryFromBatch:(id)arg1 featureNames:(id)arg2;
+ (id)featureDescriptionsByNameForBatch:(id)arg1 error:(id*)arg2;
+ (id)featureNamesInBatch:(id)arg1;
+ (id)featureProviderArrayFromBatch:(id)arg1;
+ (id)featureValueArrayForName:(id)arg1 batch:(id)arg2 error:(id*)arg3;
+ (id)lazyBatchIndexIntoBatch:(id)arg1 indices:(id)arg2 error:(id*)arg3;
+ (id)lazyBatchWindowIntoBatch:(id)arg1 startIndex:(unsigned long long)arg2 windowLength:(unsigned long long)arg3 error:(id*)arg4;
+ (id)lazyBatchWithFeaturesInBatch:(id)arg1 addedToBatch:(id)arg2 error:(id*)arg3;
+ (bool)vectorizeFeaturesNamed:(id)arg1 fromBatch:(id)arg2 intoRowsOfDoubleMatrix:(id)arg3 error:(id*)arg4;

@end
