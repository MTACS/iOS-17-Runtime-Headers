
@interface PRBeaconRangingSession : NSObject <PRBeaconListenerDelegate> {
    PRBeaconDescriptor * _activeDescriptor;
    PRBeaconListener * _beaconListener;
    unsigned long long  _beaconListenerState;
    <PRBeaconRangingSessionDelegate> * _delegate;
    NSObject<OS_os_log> * _logger;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property <PRBeaconRangingSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)beaconListener:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)beaconListener:(id)arg1 didFailWithError:(id)arg2;
- (void)beaconListener:(id)arg1 didOutputRangeResults:(id)arg2;
- (id)delegate;
- (void)didFailWithError:(id)arg1;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)startRangingInternal;
- (void)startRangingWithBeaconsMatchingDescriptor:(id)arg1;
- (void)stopRangingInternal;
- (void)stopRangingWithBeaconsMatchingDescriptor:(id)arg1;

@end
