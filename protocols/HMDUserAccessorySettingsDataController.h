
@protocol HMDUserAccessorySettingsDataController

@required

- (NSArray *)assistantAccessControlAccessoriesToEncode;
- (bool)assistantAccessControlActivityNotificationsEnabledForPersonalRequests;
- (void)enableUserListeningHistoryForAccessory:(NSUUID *)arg1;
- (void)handleAssistantAccessControlAccessoryUUIDsUpdated:(void *)arg1 activityNotificationsEnabledForPersonalRequests:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSArray *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)handleMediaContentProfileAccessControlUpdatedAccessoryUUIDs:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)handleRemovedAccessoryWithModelID:(NSUUID *)arg1;
- (void)handleUserListeningHistoryUpdateControlUpdatedAccessoryUUIDs:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSArray *)mediaContentProfileAccessControlAccessoriesToEncode;
- (NSArray *)userListeningHistoryUpdateControlModelAccessoriesToEncode;

@end
