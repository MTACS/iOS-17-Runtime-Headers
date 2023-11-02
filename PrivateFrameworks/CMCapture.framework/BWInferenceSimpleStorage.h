
@interface BWInferenceSimpleStorage : NSObject <BWInferenceStorage> {
    NSMutableDictionary * _pixelBufferByRequirement;
    NSMutableDictionary * _pixelBufferPoolByRequirement;
    NSArray * _requirementsNeedingPixelBufferPools;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *inferenceResults;
@property (nonatomic, readonly) BWInferenceProviderStorage *inferenceStorage;
@property (nonatomic, readonly, copy) NSArray *requirementsNeedingPixelBufferPools;
@property (nonatomic, readonly, copy) NSArray *requirementsNeedingPixelBuffers;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <BWInferenceTextureStorage> *textureStorage;

- (void)clear;
- (void)dealloc;
- (id)inferenceResults;
- (id)inferenceStorage;
- (id)initWithRequirementsNeedingPools:(id)arg1;
- (struct __CVBuffer { }*)pixelBufferForRequirement:(id)arg1;
- (id)pixelBufferPoolForRequirement:(id)arg1;
- (id)requirementsNeedingPixelBufferPools;
- (id)requirementsNeedingPixelBuffers;
- (void)setInferenceResults:(id)arg1;
- (void)setPixelBuffer:(struct __CVBuffer { }*)arg1 forRequirement:(id)arg2;
- (void)setPixelBufferPool:(id)arg1 forRequirement:(id)arg2;
- (id)textureStorage;

@end
