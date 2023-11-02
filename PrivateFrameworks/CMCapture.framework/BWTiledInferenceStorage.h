
@interface BWTiledInferenceStorage : BWInferenceProviderStorage {
    NSArray * _espressoStorages;
    BWInferenceSimpleTextureStorage * _textureStorage;
}

@property (nonatomic, readonly) NSArray *espressoStorages;

- (void)clear;
- (void)dealloc;
- (id)espressoStorages;
- (id)initWithRequirementsNeedingPixelBuffers:(id)arg1 requirementsNeedingPixelBufferPools:(id)arg2 espressoStorages:(id)arg3;
- (id)textureStorage;

@end
