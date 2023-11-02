
@protocol PGFeatureTransformer <NSObject>

@required

+ (<PGFeatureTransformer> *)instanceWithParameters:(NSArray *)arg1 error:(id*)arg2;
+ (NSString *)name;

- (MAFloatVector *)floatVectorWithFloatVector:(MAFloatVector *)arg1 error:(id*)arg2;

@end
