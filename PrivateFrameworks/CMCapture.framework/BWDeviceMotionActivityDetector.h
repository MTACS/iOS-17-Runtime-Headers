
@interface BWDeviceMotionActivityDetector : NSObject {
    double  _directionalMotionDetectionAngularRotationThreshold;
    bool  _directionalMotionDetectionEnabled;
    struct { 
        bool doingBiasEstimation; 
        double timestamp; 
        struct { 
            double w; 
            double x; 
            double y; 
            double z; 
        } quaternion; 
    }  _directionalMotionDetectionReferenceDirection;
    BWMotionSampleRingBuffer * _motionDataRingBuffer;
    bool  _motionMetadataStatusChecked;
    bool  _newMotionDataAvailable;
    struct OpaqueFigSimpleMutex { } * _ringMutex;
    bool  _robustMethodEnabled;
    bool  _stationary;
}

@property (getter=isDirectionalMotionDetectionEnabled) bool directionalMotionDetectionEnabled;
@property (getter=isStationary, nonatomic, readonly) bool stationary;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (bool)isDirectionalMotionDetectionEnabled;
- (bool)isStationary;
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)setDirectionalMotionDetectionEnabled:(bool)arg1;

@end
