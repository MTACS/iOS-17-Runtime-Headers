
@interface HMDUserAccessorySettingsDataController : NSObject <HMDUserAccessorySettingsDataController> {
    HMDManagedObjectContext * _moc;
    NSUUID * _userModelID;
}

@property (readonly, copy) NSArray *assistantAccessControlAccessoriesToEncode;
@property (readonly) bool assistantAccessControlActivityNotificationsEnabledForPersonalRequests;
@property (readonly, copy) NSArray *mediaContentProfileAccessControlAccessoriesToEncode;
@property (readonly, copy) NSArray *userListeningHistoryUpdateControlModelAccessoriesToEncode;

- (void).cxx_destruct;
- (id)_updatedAccessorySetFromAccessoryUUIDs:(id)arg1 currentAccessories:(id)arg2 error:(id*)arg3;
- (id)assistantAccessControlAccessoriesToEncode;
- (bool)assistantAccessControlActivityNotificationsEnabledForPersonalRequests;
- (void)enableUserListeningHistoryForAccessory:(id)arg1;
- (void)handleAssistantAccessControlAccessoryUUIDsUpdated:(id)arg1 activityNotificationsEnabledForPersonalRequests:(bool)arg2 completion:(id /* block */)arg3;
- (void)handleMediaContentProfileAccessControlUpdatedAccessoryUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)handleRemovedAccessoryWithModelID:(id)arg1;
- (void)handleUserListeningHistoryUpdateControlUpdatedAccessoryUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithUserModelID:(id)arg1 managedObjectContext:(id)arg2;
- (id)mediaContentProfileAccessControlAccessoriesToEncode;
- (id)userListeningHistoryUpdateControlModelAccessoriesToEncode;

@end
