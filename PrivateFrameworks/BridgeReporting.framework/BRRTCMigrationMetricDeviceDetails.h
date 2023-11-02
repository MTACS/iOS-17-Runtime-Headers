
@interface BRRTCMigrationMetricDeviceDetails : NSObject {
    NSString * _gizmoBuild;
    NSString * _gizmoBuildType;
    NSNumber * _gizmoEnclosureMaterial;
    NSString * _gizmoHardware;
    NSNumber * _gizmoMaxPairingVersion;
    NSNumber * _pairedDeviceCount;
    NSNumber * _switchCounter;
}

@property (nonatomic, retain) NSString *gizmoBuild;
@property (nonatomic, retain) NSString *gizmoBuildType;
@property (nonatomic, retain) NSNumber *gizmoEnclosureMaterial;
@property (nonatomic, retain) NSString *gizmoHardware;
@property (nonatomic, retain) NSNumber *gizmoMaxPairingVersion;
@property (nonatomic, retain) NSNumber *pairedDeviceCount;
@property (nonatomic, retain) NSNumber *switchCounter;

- (void).cxx_destruct;
- (id)dictionaryOfMetricKeysWithRecordedValues;
- (id)gizmoBuild;
- (id)gizmoBuildType;
- (id)gizmoEnclosureMaterial;
- (id)gizmoHardware;
- (id)gizmoMaxPairingVersion;
- (id)pairedDeviceCount;
- (void)setGizmoBuild:(id)arg1;
- (void)setGizmoBuildType:(id)arg1;
- (void)setGizmoEnclosureMaterial:(id)arg1;
- (void)setGizmoHardware:(id)arg1;
- (void)setGizmoMaxPairingVersion:(id)arg1;
- (void)setPairedDeviceCount:(id)arg1;
- (void)setSwitchCounter:(id)arg1;
- (id)switchCounter;

@end
