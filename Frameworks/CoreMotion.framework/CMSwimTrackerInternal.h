
@interface CMSwimTrackerInternal : NSObject {
    double  fActiveTime;
    double  fDistanceOffset;
    id /* block */  fHandler;
    NSObject<OS_dispatch_queue> * fInternalQueue;
    unsigned long long  fLapCountOffset;
    void * fLocationdConnection;
    unsigned long long  fSegmentCountOffset;
    bool  fStartedUpdates;
    unsigned long long  fStrokeCountOffset;
}

- (void)_handleUpdates:(id)arg1;
- (void)_querySWOLFSummaryWithSessionID:(id)arg1 handler:(id /* block */)arg2;
- (void)_querySwimUpdatesFromRecord:(id)arg1 handler:(id /* block */)arg2;
- (void)_resetOffsets;
- (void)_startUpdatesFromRecord:(id)arg1 handler:(id /* block */)arg2;
- (void)_stopUpdates;
- (void)_teardown;
- (void)dealloc;
- (id)init;

@end
