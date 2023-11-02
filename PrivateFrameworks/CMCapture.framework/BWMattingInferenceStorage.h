
@interface BWMattingInferenceStorage : BWInferenceProviderStorage {
    NSMutableDictionary * _metadataDictionaryByRequirement;
}

+ (void)initialize;

- (void)dealloc;
- (id)newMetadataDictionarySatisfyingRequirement:(id)arg1;
- (struct opaqueCMSampleBuffer { }*)newSampleBufferSatisfyingRequirement:(id)arg1 withPropagationSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)setDictionary:(id)arg1 forMetadataRequirement:(id)arg2;

@end
