
@interface BWImageControlModeTransitionMonitor : NSObject {
    double  _coarseFocusCheckTimeout;
    bool  _coarseFocusHasSettled;
    NSMutableDictionary * _currentFrameRatesByPortType;
    NSMutableDictionary * _currentLTMCurvesByPortType;
    NSMutableDictionary * _currentSphereModesByPortType;
    NSDictionary * _expectedLTMCurvesByPortType;
    NSDictionary * _expectedMaximumFrameRatesByPortType;
    NSDictionary * _expectedMinimumFrameRatesByPortType;
    NSDictionary * _expectedSphereModesByPortType;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _firstFramePTS;
    int  _frameWaitCount;
    int  _ltmCurvesTransitionFrameCount;
    int  _ltmCurvesTransitionFrameWaitCount;
    bool  _waitForTorchToRampUp;
}

@property (nonatomic) double coarseFocusCheckTimeout;
@property (nonatomic, copy) NSDictionary *expectedLTMCurvesByPortType;
@property (nonatomic, copy) NSDictionary *expectedMaximumFrameRatesByPortType;
@property (nonatomic, copy) NSDictionary *expectedMinimumFrameRatesByPortType;
@property (nonatomic, copy) NSDictionary *expectedSphereModesByPortType;
@property (nonatomic) int ltmCurvesTransitionFrameCount;
@property (nonatomic) bool waitForTorchToRampUp;

+ (void)initialize;

- (double)coarseFocusCheckTimeout;
- (void)dealloc;
- (id)description;
- (id)expectedLTMCurvesByPortType;
- (id)expectedMaximumFrameRatesByPortType;
- (id)expectedMinimumFrameRatesByPortType;
- (id)expectedSphereModesByPortType;
- (id)init;
- (bool)isTransitionCompleteWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 masterCaptureStreamPortType:(id)arg2 activeSlaveStreamPortType:(id)arg3;
- (int)ltmCurvesTransitionFrameCount;
- (void)setCoarseFocusCheckTimeout:(double)arg1;
- (void)setExpectedLTMCurvesByPortType:(id)arg1;
- (void)setExpectedMaximumFrameRatesByPortType:(id)arg1;
- (void)setExpectedMinimumFrameRatesByPortType:(id)arg1;
- (void)setExpectedSphereModesByPortType:(id)arg1;
- (void)setLtmCurvesTransitionFrameCount:(int)arg1;
- (void)setWaitForTorchToRampUp:(bool)arg1;
- (bool)waitForTorchToRampUp;

@end
