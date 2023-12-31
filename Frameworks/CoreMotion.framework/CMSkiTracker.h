
@interface CMSkiTracker : NSObject {
    CMSkiTrackerInternal * _internal;
}

@property (nonatomic, readonly) CMSkiTrackerInternal *_internal;

+ (bool)isAvailable;

- (id)_internal;
- (void)dealloc;
- (id)init;
- (void)querySkiUpdatesFromRecord:(id)arg1 handler:(id /* block */)arg2;
- (void)startUpdatesFromRecord:(id)arg1 handler:(id /* block */)arg2;
- (void)stopUpdates;

@end
