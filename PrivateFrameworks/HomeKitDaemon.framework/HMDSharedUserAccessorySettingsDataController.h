
@interface HMDSharedUserAccessorySettingsDataController : NSObject <HMDUserAccessorySettingsDataController> {
    NSUUID * _homeModelID;
    HMDManagedObjectContext * _moc;
    NSPersistentStore * _privateStore;
    NSUUID * _userModelID;
}

@property (readonly, copy) NSArray *assistantAccessControlAccessoriesToEncode;
@property (readonly) bool assistantAccessControlActivityNotificationsEnabledForPersonalRequests;
@property (readonly, copy) NSArray *mediaContentProfileAccessControlAccessoriesToEncode;
@property (readonly, copy) NSArray *userListeningHistoryUpdateControlModelAccessoriesToEncode;

- (void).cxx_destruct;
- (void)_addMissingAccessorySettingsFromAccessoryModelIDs:(id)arg1 dataRoot:(id)arg2;
- (id)_fetchDataRootWithError:(id*)arg1;
- (id)assistantAccessControlAccessoriesToEncode;
- (bool)assistantAccessControlActivityNotificationsEnabledForPersonalRequests;
- (void)enableUserListeningHistoryForAccessory:(id)arg1;
- (void)handleAssistantAccessControlAccessoryUUIDsUpdated:(id)arg1 activityNotificationsEnabledForPersonalRequests:(bool)arg2 completion:(id /* block */)arg3;
- (void)handleMediaContentProfileAccessControlUpdatedAccessoryUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)handleRemovedAccessoryWithModelID:(id)arg1;
- (void)handleUserListeningHistoryUpdateControlUpdatedAccessoryUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithUserModelID:(id)arg1 homeModelID:(id)arg2 privateStore:(id)arg3 managedObjectContext:(id)arg4;
- (id)mediaContentProfileAccessControlAccessoriesToEncode;
- (id)userListeningHistoryUpdateControlModelAccessoriesToEncode;

@end
