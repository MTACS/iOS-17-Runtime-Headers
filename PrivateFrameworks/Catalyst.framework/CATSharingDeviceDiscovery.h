
@interface CATSharingDeviceDiscovery : NSObject {
    bool  _invalidated;
    NSArray * _nearbyDevices;
    <CATSharingDeviceDiscoveryDelegate> * mDelegate;
    CATOperationQueue * mDelegationQueue;
    <CATSharingDiscoveryPrimitives> * mDiscoveryPrimitives;
}

@property (nonatomic) bool invalidated;
@property (nonatomic, copy) NSArray *nearbyDevices;

- (void).cxx_destruct;
- (void)_activate;
- (void)_invalidateWithError:(id)arg1;
- (void)activate;
- (void)addPrimitiveHandlers;
- (void)deviceFound:(id)arg1;
- (void)deviceLost:(id)arg1;
- (id)initWithDiscoveryPrimitives:(id)arg1 delegate:(id)arg2 delegateOperationQueue:(id)arg3;
- (void)invalidate;
- (bool)invalidated;
- (id)nearbyDevices;
- (id)pairingTerminalForDevice:(id)arg1;
- (void)removePrimitiveHandlers;
- (void)setInvalidated:(bool)arg1;
- (void)setNearbyDevices:(id)arg1;

@end
