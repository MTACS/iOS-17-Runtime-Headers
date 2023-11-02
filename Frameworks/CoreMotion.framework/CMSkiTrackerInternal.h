
@interface CMSkiTrackerInternal : NSObject {
    id /* block */  fHandler;
    NSObject<OS_dispatch_queue> * fInternalQueue;
    void * fLocationdConnection;
    CMSkiData * fMostRecentRecord;
    double  fRunDistanceOffset;
    double  fRunElevationDescendedOffset;
    bool  fStartedUpdates;
}

- (void)_handleUpdates:(id)arg1;
- (void)_queryUpdatesFromRecord:(id)arg1 handler:(id /* block */)arg2;
- (void)_startUpdatesFromRecord:(id)arg1 handler:(id /* block */)arg2;
- (void)_stopUpdates;
- (void)_teardown;
- (void)dealloc;
- (id)init;

@end
