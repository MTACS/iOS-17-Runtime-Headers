
@interface BWPersonSegmentationFilteringNode : BWNode {
    bool  _alignsMaskWithPrimaryCaptureRect;
    struct opaqueCMSampleBuffer { } * _cachedFilteredMaskSampleBuffer;
    struct opaqueCMFormatDescription { } * _filteredMaskFormatDescription;
    bool  _frameRateUpsamplingEnabled;
    int  _gpuPriority;
    unsigned int  _inputOrientationRelativeToSensor;
    FigSemanticStyleFilteringV1 * _segmentationMaskFilter;
}

+ (void)initialize;

- (bool)alignsMaskWithPrimaryCaptureRect;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (id)initWithGPUPriority:(int)arg1 frameRateUpsamplingEnabled:(bool)arg2;
- (unsigned int)inputOrientationRelativeToSensor;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setAlignsMaskWithPrimaryCaptureRect:(bool)arg1;
- (void)setInputOrientationRelativeToSensor:(unsigned int)arg1;

@end
