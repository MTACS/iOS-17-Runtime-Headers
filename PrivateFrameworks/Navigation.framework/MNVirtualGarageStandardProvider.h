
@interface MNVirtualGarageStandardProvider : NSObject <MNVirtualGarageProvider, VGVirtualGarageObserver> {
    bool  _assumesFullCharge;
    <MNVirtualGarageProviderDelegate> * _delegate;
    double  _forcePeriodicUpdateInterval;
    NSTimer * _forceUpdateTimer;
    VGVirtualGarage * _garage;
    geo_isolater * _garageIsolater;
    bool  _isStarted;
    NSObject<OS_dispatch_queue> * _updateQueue;
    unsigned long long  _vehiclesCount;
}

@property (nonatomic, readonly) bool assumesFullCharge;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long vehiclesCount;
@property (nonatomic) <MNVirtualGarageProviderDelegate> *virtualGarageDelegate;

- (void).cxx_destruct;
- (void)_forceVirtualGarageSyncWithHandler:(id /* block */)arg1;
- (id)_selectedVehicle;
- (void)_sendVirtualGarageUpdateForSelectedVehicle:(id)arg1;
- (void)_setVirtualGarage:(id)arg1;
- (void)_updateCachedPropertiesForGarage:(id)arg1;
- (bool)assumesFullCharge;
- (void)dealloc;
- (id)init;
- (void)setVirtualGarageDelegate:(id)arg1;
- (void)startVirtualGarageUpdates;
- (void)stopVirtualGarageUpdates;
- (void)updatedVehicleStateWithHandler:(id /* block */)arg1;
- (unsigned long long)vehiclesCount;
- (id)virtualGarageDelegate;
- (void)virtualGarageDidUpdate:(id)arg1;

@end
