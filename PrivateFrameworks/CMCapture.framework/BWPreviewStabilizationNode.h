
@interface BWPreviewStabilizationNode : BWNode {
    struct CGPoint { 
        double x; 
        double y; 
    }  _appliedTranslation;
    bool  _enableStabilizationTransitionRamps;
    bool  _isStillImagePreview;
    NSString * _lastPortType;
    NSString * _lastRecommendedMasterPortType;
    int  _lastRecommendedMasterSelectionReason;
    bool  _lastStabilizingEnabled;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastTranslationBeforeCameraFallbackRampStart;
    BWPreviewGyroStabilization * _previewStabilization;
    BWRamp * _stabilizationCameraFallbackRamp;
    bool  _stabilizationCameraFallbackRampEnabled;
    int  _stabilizationCameraFallbackRampFrameCount;
    int  _stabilizationEnterRampFrameCount;
    int  _stabilizationExitRampFrameCount;
    BWRamp * _stabilizationTransitionRamp;
    bool  _stabilizeFallbackCamera;
    NSDictionary * _staticParametersByPortType;
    bool  _updateFinalCropRectWithStabilizationShift;
}

+ (void)initialize;

- (void)dealloc;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (id)initWithCameraInfoByPortType:(id)arg1 forStillImagePreview:(bool)arg2 updateFinalCropRectWithStabilizationShift:(bool)arg3;
- (id)nodeSubType;
- (id)nodeType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;

@end
