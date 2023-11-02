
@interface NRMigrator : NSObject {
    bool  _migrating;
    NRDevice * _migratingDevice;
}

@property (nonatomic, readonly, retain) NSArray *devicesExpectedToBeMigratableAfterRestore;
@property (nonatomic, readonly, retain) NSArray *migratableDevices;
@property (nonatomic, readonly, retain) NSArray *migratableDevicesRequiringConsent;
@property (nonatomic, readonly, retain) NRDevice *migratingDevice;
@property (nonatomic, readonly) bool migrationIsAvailable;

+ (void)ingestPostRestoreMigrationDataForConsentedDevices:(id)arg1;
+ (id)migrationDataPreRestoreForConsentedDevices:(id)arg1;
+ (id)sharedMigrator;

- (void).cxx_destruct;
- (void)beginMigrationWithDevice:(id)arg1 passcode:(id)arg2 withBlock:(id /* block */)arg3;
- (void)beginMigrationWithDevice:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)devicesExpectedToBeMigratableAfterRestore;
- (id)devicesFromMigrationConsentRequestData:(id)arg1;
- (void)enterPreMigrationMode;
- (void)isPhoneReadyToMigrateDevice:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)lastMigrationRequestPhoneName;
- (id)migratableDevices;
- (id)migratableDevicesRequiringConsent;
- (id)migratingDevice;
- (id)migrationConsentRequestData;
- (bool)migrationIsAvailable;
- (void)setMigrationConsented:(bool)arg1 forDevice:(id)arg2 withBlock:(id /* block */)arg3;
- (void)setMigrationConsented:(bool)arg1 forDeviceID:(id)arg2 withBlock:(id /* block */)arg3;

@end
