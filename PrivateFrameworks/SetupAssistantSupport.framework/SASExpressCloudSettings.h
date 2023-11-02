
@interface SASExpressCloudSettings : NSObject {
    SASCloudKitClient * _cloudKitClient;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) SASCloudKitClient *cloudKitClient;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (int)_appearanceValue;
+ (id)_displayZoomOption;
+ (bool)_isCloudKitError:(id)arg1;
+ (id)_isFindMyEnabled;
+ (id)_isScreenTimeEnabled;
+ (id)_predicateForRecordsModifiedInPastMonth;
+ (id)_queryForSettingsForDeviceID:(id)arg1;
+ (id)_queryForSettingsFromPastMonth;
+ (id)_queryForSettingsFromPastMonthForDeviceClass:(id)arg1;
+ (id)_queryForSettingsFromPastMonthForPlatform:(unsigned long long)arg1;
+ (id)_zoneForSettings;
+ (id)createExpressSettingsWithQueue:(id)arg1;
+ (void)fetchSettingsWithCompletion:(id /* block */)arg1;
+ (id)privacyBundleForIdentifier:(id)arg1;
+ (void)updateSettings:(id)arg1 withCompletion:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)_createSettingsRecordInZoneID:(id)arg1 forDeviceID:(id)arg2;
- (void)_fetchAppropriateSettingsWithCompletion:(id /* block */)arg1;
- (void)_setupRecordZoneWithName:(id)arg1 completion:(id /* block */)arg2;
- (id)cloudKitClient;
- (void)fetchSettingsWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithContainerIdentifier:(id)arg1;
- (id)queue;
- (void)setCloudKitClient:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setXpcActivity:(id)arg1;
- (void)updateSettings:(id)arg1 withCompletion:(id /* block */)arg2;

@end
