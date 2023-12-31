
@interface TRAccountsManager : NSObject {
    ACAccountStore * _iCloudAccountStore;
}

@property (nonatomic, readonly) ACAccount *activeiCloudAccount;
@property (nonatomic, readonly) SSAccount *activeiTunesStoreAccount;
@property (nonatomic, readonly, copy) NSString *deviceName;
@property (nonatomic, readonly, copy) NSString *homeSharingAppleID;
@property (nonatomic, readonly, copy) NSString *homeSharingGroupID;
@property (nonatomic, retain) ACAccountStore *iCloudAccountStore;
@property (nonatomic, readonly) GKLocalPlayer *localGameCenterPlayer;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)accountTypesWithDefaultAccountID:(id)arg1;
- (id)activeiCloudAccount;
- (id)activeiTunesStoreAccount;
- (id)defaultAccountIDForAuthenticationAccountType:(unsigned long long)arg1;
- (id)deviceName;
- (id)homeSharingAppleID;
- (id)homeSharingGroupID;
- (id)iCloudAccountStore;
- (id)localGameCenterPlayer;
- (void)setICloudAccountStore:(id)arg1;

@end
