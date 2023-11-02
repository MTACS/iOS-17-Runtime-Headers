
@interface TVLDisplayColorCalibrator : NSObject <TVLRGBColorDetectorDelegate> {
    TVLRGBColorDetector * _colorDetector;
    NSArray * _detectorMargin;
    NSArray * _detectorTarget;
    NSNumber * _maximumMotion;
    NSNumber * _pitchMargin;
    id /* block */  _progressEventHandler;
    unsigned long long  _role;
    CUMessageSession * _session;
    unsigned long long  _state;
    NSNumber * _stationaryFrames;
    bool  _useSlowALS;
    NSNumber * _yawMargin;
}

@property (nonatomic, retain) TVLRGBColorDetector *colorDetector;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *detectorMargin;
@property (nonatomic, readonly) NSArray *detectorTarget;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *maximumMotion;
@property (nonatomic, readonly) NSNumber *pitchMargin;
@property (nonatomic, copy) id /* block */ progressEventHandler;
@property (nonatomic, readonly) unsigned long long role;
@property (nonatomic, retain) CUMessageSession *session;
@property (nonatomic) unsigned long long state;
@property (nonatomic, readonly) NSNumber *stationaryFrames;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool useSlowALS;
@property (nonatomic, readonly) NSNumber *yawMargin;

- (void).cxx_destruct;
- (void)_initWithMessageSession:(id)arg1;
- (void)_invalidateWithError:(id)arg1;
- (void)_postProgressEvent:(unsigned long long)arg1 withInfo:(id)arg2;
- (void)_respondAndInvalidateWithError:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_sendMessage:(id)arg1 withResponse:(id /* block */)arg2;
- (void)_startPositioning;
- (void)_startReadings;
- (void)_tearDown;
- (void)activate;
- (void)calibrate;
- (id)colorDetector;
- (void)colorDetector:(id)arg1 backlightStateChanged:(bool)arg2;
- (void)colorDetector:(id)arg1 metThresholdConditionsWithColor:(id)arg2;
- (void)colorDetector:(id)arg1 movementDetected:(double)arg2;
- (id)detectorMargin;
- (id)detectorTarget;
- (id)initWithMessageSession:(id)arg1;
- (void)invalidate;
- (id)maximumMotion;
- (id)pitchMargin;
- (id /* block */)progressEventHandler;
- (unsigned long long)role;
- (id)session;
- (void)setColorDetector:(id)arg1;
- (void)setProgressEventHandler:(id /* block */)arg1;
- (void)setSession:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;
- (id)stationaryFrames;
- (bool)useSlowALS;
- (id)yawMargin;

@end
