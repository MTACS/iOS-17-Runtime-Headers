
@interface SBKStoreAuthenticationController : NSObject {
    bool  _shouldAuthenticate;
    SSAccount * _storeAccount;
}

@property (nonatomic) bool shouldAuthenticate;
@property (nonatomic, readonly) SSAccount *storeAccount;

+ (void)clearLastSyncnedAccount;
+ (id)lastFailedSyncAccountIdentifier;
+ (id)lastFailedSyncAccountName;
+ (id)lastSyncedAccountIdentifier;
+ (id)lastSyncedAccountName;

- (void).cxx_destruct;
- (id)authenticationErrorsForTransaction:(id)arg1;
- (id)initWithStoreAccount:(id)arg1;
- (bool)isAuthenticationValidForTransaction:(id)arg1 error:(id*)arg2;
- (void)saveAccountToLastFailedSyncDefaults;
- (void)saveAccountToLastSyncedDefaults;
- (void)setShouldAuthenticate:(bool)arg1;
- (bool)shouldAuthenticate;
- (bool)shouldForceAuthenticationForTransaction:(id)arg1;
- (id)storeAccount;

@end
