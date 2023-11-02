
@protocol HMDAccessorySettingsMessageController

@required

- (bool)canUser:(HMDUser *)arg1 editConstraintsForSettingWithKeyPath:(NSString *)arg2;
- (HMDHome *)home;
- (NSUUID *)messageTargetUUID;
- (void)onMessageAddConstraint:(void *)arg1 keyPath:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: HMAccessorySettingConstraint *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)onMessageRemoveConstraint:(void *)arg1 keyPath:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: HMAccessorySettingConstraint *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)onMessageReplaceConstraintsWithAdditions:(void *)arg1 constraintIdsToRemove:(void *)arg2 keyPath:(void *)arg3 senderProductClass:(void *)arg4 isRemote:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 11: NSArray *, NSArray *, NSString *, long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)onMessageReplaceConstraintsWithAdditions:(void *)arg1 constraintIdsToRemove:(void *)arg2 settingIdentifier:(void *)arg3 senderProductClass:(void *)arg4 isRemote:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 11: NSArray *, NSArray *, NSUUID *, long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)onMessageUpdateConstraints:(void *)arg1 keyPath:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSArray *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)onMessageUpdateValue:(void *)arg1 settingIdentifier:(void *)arg2 senderVersion:(void *)arg3 senderProductClass:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 12: id, NSUUID *, HMFVersion *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, unsigned long long, NSError *, void*
- (void)onMessageUpdateValue:(void *)arg1 settingKeyPath:(void *)arg2 senderVersion:(void *)arg3 senderProductClass:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 12: id, NSString *, HMFVersion *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, unsigned long long, NSError *, void*

@end
