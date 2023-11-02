
@interface IMDAccountController : NSObject <IDSAccountDelegate> {
    NSMutableDictionary * _accounts;
    NSMutableDictionary * _activeAccounts;
    bool  _isFirstLoad;
    bool  _isLoading;
    bool  _networkDataAvailable;
    NSSet * _operationalAccountsCache;
}

@property (nonatomic, readonly) NSArray *accounts;
@property (nonatomic, readonly) NSArray *activeAccounts;
@property (nonatomic, readonly) NSArray *activeSessions;
@property (nonatomic, readonly) NSArray *connectedAccounts;
@property (nonatomic, readonly) NSArray *connectingAccounts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isLoading;
@property (nonatomic) bool networkDataAvailable;
@property (readonly) Class superclass;

+ (id)sharedAccountController;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_checkPowerAssertion;
- (void)_daemonWillShutdown:(id)arg1;
- (bool)_isAccountActive:(id)arg1 forService:(id)arg2;
- (bool)_isOperationalForAccount:(id)arg1;
- (id)_nicknameController;
- (id)_operationalAccounts;
- (void)_rebuildOperationalAccountsCache;
- (void)_resetAccountReplicationSessions;
- (void)account:(id)arg1 isActiveChanged:(bool)arg2;
- (bool)accountAssociatedWithHandle:(id)arg1;
- (id)accountForAccountID:(id)arg1;
- (id)accountForHandle:(id)arg1;
- (id)accountForIDSAccountUniqueID:(id)arg1;
- (id)accounts;
- (id)accountsForLoginID:(id)arg1 onService:(id)arg2;
- (id)accountsForService:(id)arg1;
- (void)activateAccount:(id)arg1;
- (void)activateAccounts:(id)arg1;
- (id)activeAccounts;
- (bool)activeAccountsAreEligibleForHawking;
- (id)activeAccountsForService:(id)arg1;
- (id)activeAliases;
- (id)activeSessions;
- (void)addAccount:(id)arg1;
- (id)anySessionForServiceName:(id)arg1;
- (id)connectedAccounts;
- (id)connectedAccountsForService:(id)arg1;
- (id)connectingAccounts;
- (id)connectingAccountsForService:(id)arg1;
- (void)deactivateAccount:(id)arg1;
- (void)deactivateAccount:(id)arg1 force:(bool)arg2;
- (void)deactivateAccounts:(id)arg1;
- (void)deactivateAccounts:(id)arg1 force:(bool)arg2;
- (void)dealloc;
- (void)deferredSave;
- (bool)hasActivePhoneAccount;
- (id)init;
- (bool)isAccountActive:(id)arg1;
- (bool)isLoading;
- (void)load;
- (bool)networkDataAvailable;
- (bool)receiverIsCandidateForHawking:(id)arg1;
- (bool)receiverIsCandidateForJunk:(id)arg1 forAccount:(id)arg2;
- (void)removeAccount:(id)arg1;
- (void)save;
- (id)sessionForAccount:(id)arg1;
- (id)sessionForReplicationSourceServiceName:(id)arg1 replicatingAccount:(id)arg2;
- (void)setNetworkDataAvailable:(bool)arg1;

@end
