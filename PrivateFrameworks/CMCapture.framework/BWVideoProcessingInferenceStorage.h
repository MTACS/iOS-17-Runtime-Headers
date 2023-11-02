
@interface BWVideoProcessingInferenceStorage : BWInferenceProviderStorage {
    NSMutableDictionary * _metadataDictionaryForRequirement;
}

- (void)dealloc;
- (id)initWithRequirementsNeedingPixelBuffers:(id)arg1 requirementsNeedingPixelBufferPools:(id)arg2;
- (id)newMetadataDictionarySatisfyingRequirement:(id)arg1;
- (void)setDictionary:(id)arg1 forMetadataRequirement:(id)arg2;

@end
