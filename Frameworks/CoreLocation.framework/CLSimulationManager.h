
@interface CLSimulationManager : NSObject {
    NSXPCConnection * _connection;
    unsigned char  _locationDeliveryBehavior;
    double  _locationDistance;
    double  _locationInterval;
    unsigned char  _locationRepeatBehavior;
    double  _locationSpeed;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly) <CLSimulationXPCServerInterface> *daemonProxy;
@property (nonatomic) unsigned char locationDeliveryBehavior;
@property (nonatomic) double locationDistance;
@property (nonatomic) double locationInterval;
@property (nonatomic) unsigned char locationRepeatBehavior;
@property (nonatomic) double locationSpeed;

- (void)appendSimulatedLocation:(id)arg1;
- (id)availableScenarios;
- (void)clearSimulatedCells;
- (void)clearSimulatedLocations;
- (id)connection;
- (id)daemonProxy;
- (void)flush;
- (void)getFencesForBundleID:(id)arg1 withHandler:(id /* block */)arg2;
- (id)init;
- (void)loadScenarioFromURL:(id)arg1;
- (id)localizedNameForScenario:(id)arg1;
- (unsigned char)locationDeliveryBehavior;
- (double)locationDistance;
- (double)locationInterval;
- (unsigned char)locationRepeatBehavior;
- (double)locationSpeed;
- (id)scenariosPath;
- (void)selectScenario:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setLocationDeliveryBehavior:(unsigned char)arg1;
- (void)setLocationDistance:(double)arg1;
- (void)setLocationInterval:(double)arg1;
- (void)setLocationRepeatBehavior:(unsigned char)arg1;
- (void)setLocationSpeed:(double)arg1;
- (void)setSimulatedCell:(id)arg1;
- (void)setSimulatedCellRegistrationStatus:(bool)arg1;
- (void)setSimulatedWifiPower:(bool)arg1;
- (void)setWifiScanResults:(id)arg1;
- (void)simulateBeaconWithProximityUUID:(id)arg1 major:(long long)arg2 minor:(long long)arg3 eventType:(unsigned char)arg4;
- (void)simulateFenceWithBundleID:(id)arg1 andFenceID:(id)arg2 eventType:(unsigned char)arg3 atLocation:(id)arg4;
- (void)simulateSignificantLocationChange:(id)arg1;
- (void)simulateVisit:(id)arg1;
- (void)startCellSimulation;
- (void)startLocationSimulation;
- (void)startWifiSimulation;
- (void)stopCellSimulation;
- (void)stopLocationSimulation;
- (void)stopWifiSimulation;

@end
