
@protocol MKFAppleMediaAccessoryPowerAction <MKFAction, MKFAppleMediaAccessoryPowerActionPublicExtensions>

@required

- (<MKFAppleMediaAccessory> *)accessory;
- (MKFAppleMediaAccessoryPowerActionDatabaseID *)databaseID;
- (<MKFHome> *)home;
- (void)setAccessory:(id <MKFAppleMediaAccessory>)arg1;
- (void)setTargetSleepWakeState:(NSNumber *)arg1;
- (NSNumber *)targetSleepWakeState;

@end
