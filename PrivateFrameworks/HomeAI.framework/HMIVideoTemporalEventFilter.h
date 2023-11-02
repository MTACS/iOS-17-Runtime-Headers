
@interface HMIVideoTemporalEventFilter : HMFObject <HMFLogging> {
    HMIVideoAnalyzerFrameResult * _prevFrameResult;
    NSMutableArray * _stationaryObjects;
    NSDictionary * _targetEventClassRanks;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _timeInterval;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) HMIVideoAnalyzerFrameResult *prevFrameResult;
@property (readonly) NSMutableArray *stationaryObjects;
@property (readonly) Class superclass;
@property (readonly) NSDictionary *targetEventClassRanks;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } timeInterval;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_filterEvents:(id)arg1 stationaryEvents:(id)arg2 motionDetection:(id)arg3;
- (id)_filterEvents:(id)arg1 stationaryEvents:(id)arg2 motionDetection:(id)arg3 prevFrameResult:(id)arg4 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5;
- (id)_filterEvents:(id)arg1 stationaryEvents:(id)arg2 stationaryObjects:(id)arg3 expirationPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 imageSize:(struct CGSize { double x1; double x2; })arg5;
- (bool)_resetPreviousFrameResult:(id)arg1 expirationPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)applyFilterWithFrameResult:(id)arg1 motionDetection:(id)arg2;
- (id)init;
- (id)prevFrameResult;
- (void)setPrevFrameResult:(id)arg1;
- (id)stationaryObjects;
- (id)targetEventClassRanks;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timeInterval;

@end
