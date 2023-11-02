
@protocol HMDUserDataControllerDelegate

@required

- (HMDUserSettingsBackingStoreController *)privateZoneControllerForUserDataController:(HMDUserDataController *)arg1;
- (HMDUserSettingsBackingStoreController *)sharedZoneControllerForUserDataController:(HMDUserDataController *)arg1;
- (bool)userDataController:(HMDUserDataController *)arg1 isAccessoryUserListeningHistoryUpdateCapable:(NSUUID *)arg2;
- (bool)userDataController:(HMDUserDataController *)arg1 isAppleMediaAccessory:(NSUUID *)arg2;
- (bool)userDataController:(HMDUserDataController *)arg1 isHAPAccessory:(NSUUID *)arg2;
- (bool)userDataController:(HMDUserDataController *)arg1 isMediaContentProfileCapableAccessoryID:(NSUUID *)arg2;
- (bool)userDataController:(HMDUserDataController *)arg1 isPersonalRequestCapableAccessoryID:(NSUUID *)arg2;
- (void)userDataControllerDidUpdateAssistantAccessControl:(HMDUserDataController *)arg1;
- (void)userDataControllerDidUpdateMediaContentProfile:(HMDUserDataController *)arg1;
- (void)userDataControllerDidUpdateSupportsAutomaticHH2Migration:(HMDUserDataController *)arg1;
- (void)userDataControllerDidUpdateUserListeningHistoryUpdateControl:(HMDUserDataController *)arg1;

@end
