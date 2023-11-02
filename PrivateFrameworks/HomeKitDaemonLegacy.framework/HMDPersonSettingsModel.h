
@interface HMDPersonSettingsModel : HMBModel

@property (retain) NSData *classificationNotificationSettingsData;
@property (readonly, copy) NSDictionary *faceClassificationNotificationsEnabledByPersonUUID;

+ (bool)hmbExcludeFromCloudStorage;
+ (id)hmbProperties;
+ (id)sentinelModelUUID;
+ (id)sentinelParentUUID;

- (void)archiveClassificationNotificationsEnabledForPersonUUID:(id)arg1;
- (id)classificationNotificationsEnabledForPersonUUID:(id)arg1;
- (id)faceClassificationNotificationsEnabledByPersonUUID;
- (id)init;
- (void)setClassificationNotificationsEnabled:(id)arg1 forPersonUUID:(id)arg2;
- (id)unarchivedClassificationNotificationsEnabledForPersonUUID;

@end
