
@protocol HMUserDelegatePrivate <NSObject>

@optional

- (void)user:(HMUser *)arg1 didUpdateAssistantAccessControl:(HMAssistantAccessControl *)arg2 forHome:(HMHome *)arg3;
- (void)user:(HMUser *)arg1 didUpdateMediaContentProfileAccessControl:(HMMediaContentProfileAccessControl *)arg2 forHome:(HMHome *)arg3;
- (void)user:(HMUser *)arg1 didUpdateNeedsiTunesMultiUserRepair:(bool)arg2;
- (void)user:(HMUser *)arg1 didUpdatePairingIdentity:(HMFPairingIdentity *)arg2;
- (void)user:(HMUser *)arg1 didUpdatePersonManagerSettings:(HMPhotosPersonManagerSettings *)arg2;
- (void)user:(HMUser *)arg1 didUpdatePhotosPersonManagerSettings:(HMPhotosPersonManagerSettings *)arg2;
- (void)user:(HMUser *)arg1 didUpdateSupportsSharedHomeHH2AutoMigration:(bool)arg2;
- (void)user:(HMUser *)arg1 didUpdateUserListeningHistoryUpdateControl:(HMUserListeningHistoryUpdateControl *)arg2 forHome:(HMHome *)arg3;

@end
