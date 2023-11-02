
@interface CMContinuityCaptureProximityMonitor : NSObject <NIInternalSessionDelegate> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    <CMContinuityCaptureProximityMonitorDelegate> * _delegate;
    int  _errorCount;
    bool  _havePendingUpdates;
    NIRegionPredicate * _innerPredicate;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSMutableSet * _knownDevices;
    NSMutableSet * _nearby;
    NISession * _niSession;
    NIRegionPredicate * _outerPredicate;
    NSMutableSet * _tracking;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invalidate;
- (void)_startNearbyInteractionSession;
- (void)beginTracking:(id)arg1;
- (void)dealloc;
- (void)endTracking:(id)arg1;
- (id)initWithQueue:(id)arg1 delegate:(id)arg2;
- (void)invalidate;
- (bool)isDeviceKnown:(id)arg1;
- (bool)isDeviceNearby:(id)arg1;
- (void)session:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)session:(id)arg1 object:(id)arg2 didUpdateRegion:(id)arg3 previousRegion:(id)arg4;
- (void)sessionSuspensionEnded:(id)arg1;
- (void)sessionWasSuspended:(id)arg1;

@end
