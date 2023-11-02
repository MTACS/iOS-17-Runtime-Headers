
@interface SPOwnerInterface : NSObject

+ (id)cbPeripheralManagementSession;

- (id)beaconSharingSession;
- (id)firmwareUpdateSession;
- (id)fmipRegisterInfo;
- (id)maintenanceConnectionSession;
- (id)ownerSession;
- (id)persistentConnectionSession;
- (id)privateFirmwareUpdateSession;
- (id)privateOwnerSession;
- (id)separationMonitoringSession;
- (id)settingsConfiguration;
- (id)tagSeparationSession;
- (id)trackingAvoidanceService;

@end
