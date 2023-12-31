
@interface TSUMemoryWatcher : NSObject {
    TSUFlushingManager * _flushingManager;
    bool  _going;
    bool  _stop;
}

- (void)_periodicallySimulateMemoryWarning:(id)arg1;
- (void)_simulateMemoryWarning:(id)arg1;
- (void)beginObserving;
- (void)dealloc;
- (id)initWithFlushingManager:(id)arg1;
- (void)stopObserving;

@end
