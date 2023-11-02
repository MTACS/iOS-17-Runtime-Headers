
@protocol BWInferenceStorage <NSObject>

@required

- (void)clear;
- (NSDictionary *)inferenceResults;
- (BWInferenceProviderStorage *)inferenceStorage;
- (struct __CVBuffer { }*)pixelBufferForRequirement:(BWInferenceVideoRequirement *)arg1;
- (BWPixelBufferPool *)pixelBufferPoolForRequirement:(BWInferenceVideoRequirement *)arg1;
- (NSArray *)requirementsNeedingPixelBufferPools;
- (NSArray *)requirementsNeedingPixelBuffers;
- (void)setInferenceResults:(NSDictionary *)arg1;
- (void)setPixelBuffer:(struct __CVBuffer { }*)arg1 forRequirement:(BWInferenceVideoRequirement *)arg2;
- (void)setPixelBufferPool:(BWPixelBufferPool *)arg1 forRequirement:(BWInferenceVideoRequirement *)arg2;
- (<BWInferenceTextureStorage> *)textureStorage;

@end
