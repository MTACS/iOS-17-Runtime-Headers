
@interface SBAmbientMotionDetectionWakeAttributeMonitor : NSObject {
    NSHashTable * _observers;
    bool  _shouldEnableMotionDetectionWake;
}

@property (setter=_setShouldEnableMotionDetectionWake:, nonatomic) bool shouldEnableMotionDetectionWake;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_setShouldEnableMotionDetectionWake:(bool)arg1;
- (void)addObserver:(id)arg1;
- (id)init;
- (void)removeObserver:(id)arg1;
- (bool)shouldEnableMotionDetectionWake;

@end
