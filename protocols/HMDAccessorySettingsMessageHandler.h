
@protocol HMDAccessorySettingsMessageHandler

@required

- (void)configureForSetting:(NSUUID *)arg1 allowSharedAdminEditConstraints:(bool)arg2;
- (void)configureWithMessageDispatcher:(HMFMessageDispatcher *)arg1 home:(HMDHome *)arg2;
- (void)notifyOfUpdatedValue:(id)arg1 settingKeyPath:(NSString *)arg2;
- (void)relayReplaceConstraints:(void *)arg1 constraintIdsToRemove:(void *)arg2 keyPath:(void *)arg3 destination:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: NSArray *, NSArray *, NSString *, HMDRemoteDeviceMessageDestination *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)relayUpdateValue:(void *)arg1 keyPath:(void *)arg2 destination:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 11: id, NSString *, HMDRemoteDeviceMessageDestination *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, unsigned long long, NSError *, void*
- (void)unconfigureFromSetting:(NSUUID *)arg1;

@end
