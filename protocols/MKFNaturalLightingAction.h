
@protocol MKFNaturalLightingAction <MKFAction, MKFNaturalLightingActionPublicExtensions>

@required

- (<MKFHAPAccessory> *)accessory;
- (MKFNaturalLightingActionDatabaseID *)databaseID;
- (<MKFHome> *)home;
- (NSUUID *)lightProfileUUID;
- (NSNumber *)naturalLightingEnabledField;
- (NSSet *)serviceUUIDs;
- (void)setAccessory:(id <MKFHAPAccessory>)arg1;
- (void)setLightProfileUUID:(NSUUID *)arg1;
- (void)setNaturalLightingEnabledField:(NSNumber *)arg1;
- (void)setServiceUUIDs:(NSSet *)arg1;

@end
