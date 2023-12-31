
@interface CMSleepTracker : NSObject {
    CMSpringTrackerInternal * _internal;
}

@property (nonatomic, readonly) CMSpringTrackerInternal *_internal;

+ (bool)isAvailable;

- (id)_internal;
- (void)dealloc;
- (id)init;
- (bool)isTracking;
- (void)querySleepDataFromRecord:(id)arg1 handler:(id /* block */)arg2;
- (void)startWithHandler:(id /* block */)arg1;
- (void)stopWithHandler:(id /* block */)arg1;

@end
