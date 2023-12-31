
@interface _UIMotionEffectCoreMotionEventProvider : _UIMotionEffectEventProvider {
    NSOperationQueue * _motionEventQueue;
    CMMotionManager * _motionManager;
}

- (void).cxx_destruct;
- (id)currentEvent;
- (void)dealloc;
- (double)fastUpdateIntervalForLogs;
- (id)init;
- (void)setSlowUpdatesEnabled:(bool)arg1;
- (bool)shouldLogEvents;
- (double)slowUpdateIntervalForLogs;
- (void)startGeneratingEvents;
- (void)stopGeneratingEvents;

@end
