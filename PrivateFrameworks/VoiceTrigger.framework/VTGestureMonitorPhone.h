
@interface VTGestureMonitorPhone : VTGestureMonitor <CMWakeGestureDelegate> {
    CMWakeGestureManager * _gestureManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (void)startObserving;
- (void)wakeGestureManager:(id)arg1 didUpdateWakeGesture:(long long)arg2;

@end
