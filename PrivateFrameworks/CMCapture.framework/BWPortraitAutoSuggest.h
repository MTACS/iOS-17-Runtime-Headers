
@interface BWPortraitAutoSuggest : NSObject {
    bool  _doSuggest;
    unsigned int  _fadeInvalidTh;
    float  _fadeInvalidThCst;
    unsigned int  _fadeValidTh;
    unsigned int  _fadeValidThInvalidityActive;
    float  _fadeValidThInvalidityActiveSec;
    unsigned int  _fadeValidThInvalidityBuild;
    float  _fadeValidThInvalidityBuildSec;
    unsigned int  _invalidityCounter;
    bool  _lastDoSuggest;
    unsigned int  _marginInRatioHeight;
    unsigned int  _marginInRatioWidth;
    unsigned int  _marginOutRatioHeight;
    unsigned int  _marginOutRatioWidth;
    unsigned int  _maxMotionThreshold;
    unsigned int  _minMotionThreshold;
    unsigned int  _objectBoxFrameAreaValidityRatio;
    unsigned int  _objectBoxFrameAreaValidityRatioWhenOn;
    unsigned int  _objectCentersLookbackInterval;
    float  _objectCentersLookbackIntervalSec;
    float  _objectFrameRatio;
    bool  _portTypeIsFFC;
    bool  _shallowDepthOfFieldRenderingEnabled;
    unsigned int  _temporalValidityTh;
    NSMutableArray * _trackers;
    unsigned int  _validObjectCounterOld;
    unsigned int  _validObjectIntervalTh;
    float  _validObjectIntervalThSec;
    unsigned int  _validityCounter;
    float  _xObjectCenterStdTh;
    float  _yObjectCenterStdTh;
}

@property (nonatomic) bool portTypeIsFFC;
@property (nonatomic) bool shallowDepthOfFieldRenderingEnabled;

+ (void)initialize;

- (void)dealloc;
- (id)initWithTuningParameters:(id)arg1;
- (bool)portTypeIsFFC;
- (bool)runAutoSuggestionWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 portraitSceneMonitorStatus:(int*)arg2 zoomFactor:(float)arg3;
- (void)setPortTypeIsFFC:(bool)arg1;
- (void)setShallowDepthOfFieldRenderingEnabled:(bool)arg1;
- (bool)shallowDepthOfFieldRenderingEnabled;

@end
