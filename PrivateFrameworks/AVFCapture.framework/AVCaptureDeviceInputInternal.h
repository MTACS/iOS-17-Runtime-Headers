
@interface AVCaptureDeviceInputInternal : NSObject {
    long long  audioCaptureMode;
    bool  backgroundBlurAllowed;
    bool  cameraCalibrationDataDeliveryEnabled;
    bool  centerStageAllowed;
    AVCaptureDevice * device;
    <AVCallbackCancellation> * deviceOpenCallbackInvoker;
    float  maxGainOverride;
    NSArray * multiCamPorts;
    float  portraitLightingEffectStrength;
    NSArray * ports;
    bool  reactionEffectsAllowed;
    bool  ready;
    float  simulatedAperture;
    bool  studioLightingAllowed;
    bool  unifiedAutoExposureDefaultsEnabled;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  videoMinFrameDurationOverride;
    bool  visionDataDeliveryEnabled;
    AVWeakReference * weakReference;
}

- (void)dealloc;

@end
