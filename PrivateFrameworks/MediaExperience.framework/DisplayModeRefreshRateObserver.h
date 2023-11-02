
@interface DisplayModeRefreshRateObserver : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    double  _refreshRate;
    CADisplay * _tvOutDisplay;
}

- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (double)readHDMILatencyFromCoreAnimation;
- (int)updateHDMILatencyOnCoreAnimation:(double)arg1;

@end
