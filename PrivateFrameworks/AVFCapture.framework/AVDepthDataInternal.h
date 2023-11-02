
@interface AVDepthDataInternal : NSObject {
    long long  accuracy;
    AVCameraCalibrationData * calibrationData;
    NSData * depthBlurEffectRenderingParameters;
    float  depthBlurEffectSimulatedAperture;
    bool  filtered;
    struct __CVBuffer { } * pixelBuffer;
    float  portraitLightingEffectStrength;
    float  portraitScore;
    bool  portraitScoreIsHigh;
    long long  quality;
    int  version;
}

@end
