
@interface BWMetadataDetectorGatingOutputController : NSObject <BWMetadataDetectedResultsObserver> {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _currentPTS;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _detectedCodesLastSeenPTS;
    NSArray * _detectionFrameRateRamp;
    BOOL  _detectionFrameRateRampIndex;
    BOOL  _detectionFrameRateRampStartIndex;
    NSObject<OS_dispatch_group> * _detectorAvailableGroup;
    bool  _emittedFirstBufferAfterSceneChange;
    bool  _firstBufferAfterSceneChangeHasCodes;
    bool  _forceSynchronizedControllersToRunDetectionImmediately;
    bool  _isHandlingFirstBufferAfterSceneChange;
    bool  _isSmartCameraSceneConfident;
    long long  _lastDetectedCodesCount;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastDetectionPTS;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    FigCaptureLogSmartCameraGating * _logger;
    bool  _lowPowerModeEnabled;
    NSString * _name;
    BWNodeOutput * _nodeOutput;
    bool  _sceneLikelyToHaveCodes;
    bool  _sceneMotionEstimatesSupported;
    BWSceneStabilityMonitor * _sceneStabilityMonitor;
    bool  _shouldApplySceneMotion;
    bool  _shouldEmitFirstBufferAfterSceneChange;
    bool  _shouldRunDetection;
    bool  _synchronizeWithOtherControllers;
    bool  _usesSceneClassifierToGateDetection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forceSynchronizedControllersToRunDetectionImmediately;
@property (getter=isHandlingFirstBufferAfterSceneChange, nonatomic, readonly) bool handlingFirstBufferAfterSceneChange;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long lastDetectedCodesCount;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } lastDetectionPTS;
@property (nonatomic, retain) FigCaptureLogSmartCameraGating *logger;
@property (nonatomic) bool lowPowerModeEnabled;
@property (nonatomic, readonly) BWNodeOutput *nodeOutput;
@property (nonatomic, readonly) bool sceneLikelyToHaveCodes;
@property (nonatomic) bool sceneMotionEstimatesSupported;
@property (nonatomic, readonly) bool shouldApplySceneMotion;
@property (nonatomic, readonly) bool shouldEmitBuffer;
@property (nonatomic) bool shouldEmitFirstBufferAfterSceneChange;
@property (nonatomic, readonly) bool shouldRunDetection;
@property (getter=isSmartCameraSceneConfident, nonatomic) bool smartCameraSceneConfident;
@property (readonly) Class superclass;
@property (nonatomic) bool synchronizeWithOtherControllers;
@property (nonatomic) bool usesSceneClassifierToGateDetection;

- (void)dealloc;
- (void)emitPixelBuffer:(struct __CVBuffer { }*)arg1 inputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 appliedPrimaryCaptureRect:(bool)arg3;
- (void)enableDetectionFrameRateControllingWithRamp:(id)arg1 startIndex:(BOOL)arg2;
- (bool)forceSynchronizedControllersToRunDetectionImmediately;
- (id)initWithOutput:(id)arg1 name:(id)arg2 sceneStabilityMonitor:(id)arg3 detectorAvailableGroup:(id)arg4;
- (bool)isHandlingFirstBufferAfterSceneChange;
- (bool)isSmartCameraSceneConfident;
- (long long)lastDetectedCodesCount;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })lastDetectionPTS;
- (id)logger;
- (bool)lowPowerModeEnabled;
- (void)node:(id)arg1 didEmitCodesCount:(long long)arg2 emittedIdentifiers:(id)arg3 originalPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (id)nodeOutput;
- (void)prepareToEmitBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (bool)sceneLikelyToHaveCodes;
- (bool)sceneMotionEstimatesSupported;
- (void)setForceSynchronizedControllersToRunDetectionImmediately:(bool)arg1;
- (void)setLastDetectedCodesCount:(long long)arg1;
- (void)setLastDetectedCodesCount:(long long)arg1 originalPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)setLastDetectionPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setLogger:(id)arg1;
- (void)setLowPowerModeEnabled:(bool)arg1;
- (void)setSceneMotionEstimatesSupported:(bool)arg1;
- (void)setShouldEmitFirstBufferAfterSceneChange:(bool)arg1;
- (void)setSmartCameraSceneConfident:(bool)arg1;
- (void)setSynchronizeWithOtherControllers:(bool)arg1;
- (void)setUsesSceneClassifierToGateDetection:(bool)arg1;
- (bool)shouldApplySceneMotion;
- (bool)shouldEmitBuffer;
- (bool)shouldEmitFirstBufferAfterSceneChange;
- (bool)shouldRunDetection;
- (bool)synchronizeWithOtherControllers;
- (bool)usesSceneClassifierToGateDetection;

@end
