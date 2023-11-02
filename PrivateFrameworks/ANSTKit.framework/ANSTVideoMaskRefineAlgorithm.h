
@interface ANSTVideoMaskRefineAlgorithm : ANSTAlgorithm

+ (Class)_concreteClassOfVersion:(unsigned long long)arg1;
+ (id)new;
+ (id)supportedSemanticCategories;
+ (id)supportedSemanticCategoriesOfVersion:(unsigned long long)arg1;

- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (id)resultForPixelBuffer:(struct __CVBuffer { }*)arg1 coarseSegementationMasks:(id)arg2 error:(id*)arg3;

@end
