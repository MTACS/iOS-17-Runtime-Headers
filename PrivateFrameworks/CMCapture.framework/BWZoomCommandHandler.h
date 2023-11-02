
@interface BWZoomCommandHandler : NSObject {
    float  _allowableMinimumDigitalZoomFactorDuringZoomOut;
    float  _appliedZoomFactor;
    bool  _clientCanCompensateForDelay;
    float  _earlySwitchOverScaleFactorForZoomIn;
    NSArray * _fudgedZoomRanges;
    int  _lastFrameCaptureID;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastFramePTSes;
    float  _lastRequestedZoomFactor;
    float  _maxFudgedZoomFactor;
    float  _maxZoomFactorToApplyFudge;
    float  _minFudgedZoomFactor;
    float  _minZoomFactorToApplyFudge;
    float  _rampAcceleration;
    bool  _rampActive;
    int  _rampCommandID;
    float  _rampCurrentVelocity;
    double  _rampDuration;
    float  _rampSnapFraction;
    float  _rampStartFactor;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _rampStartTime;
    float  _rampStartVelocity;
    float  _rampTargetFactor;
    float  _rampTargetVelocity;
    int  _rampTuning;
    int  _rampType;
    float  _rampZoomFactorOfInterest;
    float  _springRampFriction;
    int  _springRampStartFrameDelayAt30fps;
    float  _springRampTension;
    long long  _timeForLastRequestedZoomFactor;
    <BWZoomCompletionDelegate> * _zoomCompletionDelegate;
    <BWZoomCompletionDelegate> * _zoomCompletionDelegateForStereoAudio;
    BWZoomDelayBuffer * _zoomDelayBuffer;
    bool  _zoomFactorServiced;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _zoomLock;
}

@property (readonly) float allowableMinimumDigitalZoomFactorDuringZoomOut;
@property (readonly) float appliedZoomFactor;
@property (readonly) float appliedZoomFactorWithoutFudge;
@property (readonly) float earlySwitchOverScaleFactorForZoomIn;
@property (readonly) float rampTargetZoomFactor;
@property (readonly) int rampTuning;
@property (readonly) float rampZoomFactorOfInterest;
@property float requestedZoomFactor;
@property (readonly) float requestedZoomFactorWithoutFudge;
@property (nonatomic) <BWZoomCompletionDelegate> *zoomCompletionDelegate;
@property (nonatomic) <BWZoomCompletionDelegate> *zoomCompletionDelegateForStereoAudio;

+ (void)initialize;

- (float)allowableMinimumDigitalZoomFactorDuringZoomOut;
- (float)appliedZoomFactor;
- (float)appliedZoomFactorWithoutFudge;
- (float)applyFudgeToZoomFactor:(float)arg1;
- (void)dealloc;
- (float)earlySwitchOverScaleFactorForZoomIn;
- (id)init;
- (float)predictRampZoomFactorAfterNumberOfFrames:(int)arg1 settingZoomFactorOfInterest:(float)arg2;
- (float)rampTargetZoomFactor;
- (void)rampToVideoZoomFactor:(float)arg1 usingSpringWithTension:(float)arg2 friction:(float)arg3 snapFraction:(float)arg4 rampTuning:(int)arg5 earlySwitchOverScaleFactorForZoomIn:(float)arg6 allowableMinimumDigitalZoomFactorDuringZoomOut:(float)arg7 rampStartFrameDelayAt30fps:(int)arg8 commandID:(int)arg9;
- (void)rampToVideoZoomFactor:(float)arg1 withRampType:(int)arg2 rate:(float)arg3 duration:(double)arg4 snapToTargetZoomFactorWithinRampFraction:(float)arg5 rampTuning:(int)arg6 earlySwitchOverScaleFactorForZoomIn:(float)arg7 allowableMinimumDigitalZoomFactorDuringZoomOut:(float)arg8 commandID:(int)arg9;
- (int)rampTuning;
- (float)rampZoomFactorOfInterest;
- (float)requestedZoomFactor;
- (float)requestedZoomFactorWithoutFudge;
- (void)reset;
- (void)resetZoomFactorOfInterest;
- (void)setFudgedZoomRanges:(id)arg1;
- (void)setRequestedZoomFactor:(float)arg1;
- (void)setTypicalISPZoomDelay:(unsigned int)arg1 clientCanCompensateForDelay:(bool)arg2;
- (void)setZoomCompletionDelegate:(id)arg1;
- (void)setZoomCompletionDelegateForStereoAudio:(id)arg1;
- (long long)timeForLastRequestedZoomFactor;
- (void)updateAppliedZoomFactorForDelayedISPAppliedZoomFactor:(float)arg1;
- (float)updateZoomModelAndAppliedZoomFactorForNextFrameWithPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 captureID:(int)arg2 delayedISPAppliedZoomFactor:(float)arg3;
- (float)updateZoomModelForNextFrameWithPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 captureID:(int)arg2;
- (id)zoomCompletionDelegate;
- (id)zoomCompletionDelegateForStereoAudio;

@end
