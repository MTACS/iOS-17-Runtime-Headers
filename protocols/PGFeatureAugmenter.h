
@protocol PGFeatureAugmenter <PGFeatureTransformer>

@required

+ (<PGFeatureAugmenter> *)instanceWithParameters:(NSArray *)arg1 error:(id*)arg2;

- (NSArray *)floatVectorsWithFloatVectors:(NSArray *)arg1 error:(id*)arg2;

@end
