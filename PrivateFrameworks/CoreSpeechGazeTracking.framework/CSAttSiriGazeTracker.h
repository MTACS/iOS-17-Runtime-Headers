
@interface CSAttSiriGazeTracker : NSObject <CSAttSiriFaceTrackingCaptureDelegate> {
    NSMutableArray * _areasOfInterest;
    <CSAttSiriGazeTrackerDelegate> * _delegate;
    struct CGPoint { 
        double x; 
        double y; 
    }  _gazePoint;
    bool  _hasFace;
    bool  _mouthOpen;
    CSAttSiriGazeAreaOfInterest * _mouthTracker;
    NSObject<OS_dispatch_queue> * _processingQueue;
    bool  _useDefaultFaceCaptureSession;
    CSAttSiriGazeTrackingData * dataParser;
    CSAttSiriGeneralizedRegressorCalibration * gazeEstimator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } gazePoint;
@property (nonatomic, readonly) bool hasFace;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool mouthOpen;
@property (readonly) Class superclass;

+ (float)extraHorizontalGazePadding;
+ (float)extraVerticalGazePadding;

- (void).cxx_destruct;
- (void)_updateActiveAreas:(bool)arg1 point:(struct CGPoint { double x1; double x2; })arg2;
- (void)_updateMouth:(bool)arg1;
- (void)addAreaOfInterest:(id)arg1;
- (bool)areaOfInterest:(id)arg1 hadGazeFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (bool)areaOfInterestHasGaze:(id)arg1;
- (void)didOutputGazeTrackingData:(id)arg1 time:(unsigned long long)arg2;
- (void)gazeEstimate:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })gazePoint;
- (void)gazeTrackerDidMakeObservationWithFace:(bool)arg1 andGaze:(struct CGPoint { double x1; double x2; })arg2;
- (void)gazeTrackerFaceTrackingMetaDataUpdate:(id)arg1 atMachAbsTime:(unsigned long long)arg2;
- (bool)hasFace;
- (id)initWithDelegate:(id)arg1 gazeModelFile:(id)arg2 useDefaultFaceCaptureSession:(bool)arg3;
- (id)initWithDelegate:(id)arg1 gazeModelFile:(id)arg2 useDefaultFaceCaptureSession:(bool)arg3 areasOfInterest:(id)arg4;
- (bool)mouthIsOpen;
- (bool)mouthOpen;
- (bool)mouthOpeningsFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (void)removeAllAreasOfInterest;
- (void)removeAreaOfInterest:(id)arg1;
- (void)start;
- (void)stop;

@end
