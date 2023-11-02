
@interface DBSessionController : NSObject <CARSessionObserving> {
    DBClusterControlChannel * _clusterControlChannel;
    CARSession * _currentSession;
    CRVehicle * _currentVehicle;
    <DBSessionControllerDelegate> * _delegate;
    DBLayerMetadataService * _layerMetadataService;
    NSMutableSet * _layerMetadataServiceRequesters;
    CARObserverHashTable * _observers;
    CRPairedVehicleManager * _pairedVehicleManager;
    CARSessionStatus * _sessionStatus;
    NSObject<OS_dispatch_queue> * _vehicleUpdateQueue;
}

@property (nonatomic, retain) DBClusterControlChannel *clusterControlChannel;
@property (nonatomic, retain) CARSession *currentSession;
@property (nonatomic, retain) CRVehicle *currentVehicle;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DBSessionControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) DBLayerMetadataService *layerMetadataService;
@property (nonatomic, retain) NSMutableSet *layerMetadataServiceRequesters;
@property (nonatomic, retain) CARObserverHashTable *observers;
@property (nonatomic, retain) CRPairedVehicleManager *pairedVehicleManager;
@property (nonatomic, retain) CARSessionStatus *sessionStatus;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *vehicleUpdateQueue;

- (void).cxx_destruct;
- (void)_pairedVehiclesDidChange:(id)arg1;
- (id)_sync_pairedVehicle;
- (void)_updateLayerMetadataService;
- (void)_updateVehicleAppearancePreferenceIfNecessary;
- (void)_updateVehicleInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)_updateVehicleInfoSync;
- (void)_updateVehicleInfoWithCompletion:(id /* block */)arg1;
- (void)addSessionObserver:(id)arg1;
- (id)clusterControlChannel;
- (id)currentSession;
- (id)currentVehicle;
- (id)delegate;
- (id)init;
- (id)layerMetadataService;
- (id)layerMetadataServiceRequesters;
- (id)observers;
- (id)pairedVehicleManager;
- (void)removeSessionObserver:(id)arg1;
- (void)sessionDidConnect:(id)arg1;
- (void)sessionDidDisconnect:(id)arg1;
- (id)sessionStatus;
- (void)setClusterControlChannel:(id)arg1;
- (void)setCurrentSession:(id)arg1;
- (void)setCurrentVehicle:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLayerMetadataService:(id)arg1;
- (void)setLayerMetadataServiceRequesters:(id)arg1;
- (void)setNeedsLayerMetadataService:(bool)arg1 forDisplayIdentity:(id)arg2;
- (void)setObservers:(id)arg1;
- (void)setPairedVehicleManager:(id)arg1;
- (void)setSessionStatus:(id)arg1;
- (void)setVehicleUpdateQueue:(id)arg1;
- (id)vehicleUpdateQueue;

@end
