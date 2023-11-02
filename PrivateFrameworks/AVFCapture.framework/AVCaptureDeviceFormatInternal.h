
@interface AVCaptureDeviceFormatInternal : NSObject {
    bool  backgroundBlurSupported;
    bool  backgroundBlurSupportedForContinuityCamera;
    bool  centerStageSupported;
    bool  centerStageSupportedForContinuityCamera;
    bool  continuousZoomWithDepthEnabled;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  defaultActiveMaxFrameDuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  defaultActiveMinFrameDuration;
    bool  depthDataFormatsDisabled;
    NSDictionary * fcSourceAttributes;
    struct opaqueCMFormatDescription { } * formatDescription;
    bool  isDepthDataFormat;
    bool  reactionEffectsSupported;
    bool  reactionEffectsSupportedForContinuityCamera;
    FigCaptureSourceFormat * sourceFormat;
    bool  studioLightingSupported;
    bool  studioLightingSupportedForContinuityCamera;
    NSArray * supportedDepthDataFormats;
    NSArray * supportedMaxPhotoDimensions;
    NSArray * videoSupportedFrameRateRanges;
}

@end
