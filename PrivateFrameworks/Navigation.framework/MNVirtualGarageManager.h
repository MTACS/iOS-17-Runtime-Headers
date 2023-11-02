
@interface MNVirtualGarageManager : NSObject <MNVirtualGarageProviderDelegate> {
    bool  _isStarted;
    VGVehicle * _lastVehicle;
    NSString * _lastVehicleName;
    GEOObserverHashTable * _observers;
    <MNVirtualGarageProvider> * _provider;
    NSTimer * _timer;
    MNTraceRecorder * _traceRecorder;
}

@property (nonatomic, readonly) bool assumesFullCharge;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) VGVehicle *lastVehicle;
@property (nonatomic, readonly) NSString *lastVehicleName;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long vehiclesCount;

+ (id)sharedManager;

- (void).cxx_destruct;
- (bool)_isStandardProvider:(id)arg1;
- (id)_standardVirtualGarageProvider;
- (void)_start;
- (void)_stop;
- (bool)assumesFullCharge;
- (void)dealloc;
- (id)initPrivate;
- (id)lastVehicle;
- (id)lastVehicleName;
- (void)registerObserver:(id)arg1;
- (void)setProvider:(id)arg1;
- (void)setTraceRecorder:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)updatedVehicleStateWithHandler:(id /* block */)arg1;
- (unsigned long long)vehiclesCount;
- (void)virtualGarageProvider:(id)arg1 didUpdateSelectedVehicle:(id)arg2;

@end
