
@protocol WBSSettingsSyncEngineAccess <NSObject>

@required

- (bool)backgroundImageAppearanceIsLight;
- (bool)backgroundImageExists;
- (void)didDeleteRemoteRecordWithID:(CKRecordID *)arg1;
- (void)didReceiveRemoteCloudSettingsUpdateWithRecord:(CKRecord *)arg1;
- (NSArray *)syncSettingsUpDictionary;

@optional

- (void)clearAllPageZoomSyncData;
- (void)deleteBackgroundImageDirectory;
- (NSArray *)macZoomPreferences;
- (NSData *)pageZoomSyncDataForRecordName:(NSString *)arg1;
- (void)setPageZoomSyncData:(void *)arg1 forRecordName:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSData *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
