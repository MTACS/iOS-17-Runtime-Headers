
@protocol MLModelSpecificationLoader <NSObject>

@required

+ (<MLModeling> *)loadModelFromSpecification:(void*)arg1 configuration:(MLModelConfiguration *)arg2 error:(id*)arg3;

@end
