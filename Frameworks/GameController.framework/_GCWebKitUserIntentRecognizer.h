
@interface _GCWebKitUserIntentRecognizer : NSObject {
    double  _deadzoneSquared;
    int  _distanceThreshold;
    GCPhysicalInputProfile * _physicalInputProfile;
    double  _slidingWindowSegmentDuration;
    double  _slidingWindowTotalDuration;
    id /* block */  _thumbstickUserIntentHandler;
    NSMutableDictionary * _timers;
    NSMutableDictionary * _trackedInputs;
}

@property (nonatomic, readonly, copy) id /* block */ thumbstickUserIntentHandler;

- (void).cxx_destruct;
- (id)initWithPhysicalInputProfile:(id)arg1 thumbstickUserIntentHandler:(id /* block */)arg2;
- (id)initWithPhysicalInputProfile:(id)arg1 thumbstickUserIntentHandler:(id /* block */)arg2 slidingWindowTotalDuration:(double)arg3 slidingWindowSegmentDuration:(double)arg4 deadzone:(double)arg5 sensitivity:(int)arg6;
- (void)processChangedElements:(id)arg1 atTimestamp:(unsigned long long)arg2;
- (id /* block */)thumbstickUserIntentHandler;

@end
