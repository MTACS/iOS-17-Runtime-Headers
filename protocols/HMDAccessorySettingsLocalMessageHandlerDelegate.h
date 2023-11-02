
@protocol HMDAccessorySettingsLocalMessageHandlerDelegate <NSObject>

@required

- (void)accessorySettingsLocalMessageHandler:(HMDAccessorySettingsLocalMessageHandler *)arg1 didReceiveFetchRequestMessage:(HMFMessage *)arg2 withHomeUUID:(NSUUID *)arg3 accessoryUUID:(NSUUID *)arg4 keyPaths:(NSArray *)arg5 callerVersion:(HMFVersion *)arg6 callerPrivilege:(unsigned long long)arg7 siriAvailableLanguagesSetting:(HMLanguageValueListSetting *)arg8;
- (void)accessorySettingsLocalMessageHandler:(HMDAccessorySettingsLocalMessageHandler *)arg1 didReceiveUpdateRequestMessage:(HMFMessage *)arg2 withHomeUUID:(NSUUID *)arg3 accessoryUUID:(NSUUID *)arg4 keyPath:(NSString *)arg5 value:(HMImmutableSettingValue *)arg6 callerVersion:(HMFVersion *)arg7;

@end
