
@interface BWTiledEspressoInferenceStorage : BWInferenceProviderStorage {
    NSArray * _espressoStorages;
}

@property (nonatomic, readonly) NSArray *espressoStorages;

- (void)dealloc;
- (id)espressoStorages;
- (id)initWithRequirementsNeedingPixelBuffers:(id)arg1 requirementsNeedingPixelBufferPools:(id)arg2 espressoStorages:(id)arg3;

@end
