
@protocol CDPDCircleProxy <NSObject>

@required

+ (unsigned long long)syncingStatusForAltDSID:(NSString *)arg1;

- (bool)anyPeerHasEnabledViewsInSet:(NSSet *)arg1 error:(id*)arg2;
- (unsigned long long)cachedCliqueStatus:(id*)arg1;
- (int)cachedSOSCircleStatus:(id*)arg1;
- (bool)canAuthenticate;
- (CDPContext *)cdpContext;
- (long long)cliqueStatus:(id*)arg1;
- (unsigned long long)combinedCachedCircleStatus:(id*)arg1;
- (unsigned long long)combinedCircleStatus:(id*)arg1;
- (void)didJoinCircleAfterRecovery:(OTClique *)arg1;
- (bool)fetchUserControllableViewsSyncingEnabled:(id*)arg1;
- (NSString *)generateRecoveryKeyWithInfo:(NSDictionary *)arg1 error:(id*)arg2;
- (NSDictionary *)generateVerifierWithRecoveryKey:(NSString *)arg1 error:(id*)arg2;
- (bool)hasNonViewAwarePeers;
- (bool)isLastBackupMakingPeer:(id*)arg1;
- (int)nonCachedSOSCircleStatus:(id*)arg1;
- (KCPairingChannel *)pairingChannelAcceptor;
- (KCPairingChannel *)pairingChannelInitiator;
- (NSDictionary *)peerDeviceNamesByPeerID;
- (NSString *)peerId;
- (void)recoverOctagonUsingCustodianInfo:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CDPCustodianRecoveryInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)registerCredentials;
- (bool)registerCredentialsIfMissing;
- (bool)removeNonViewAwarePeers:(id*)arg1;
- (bool)removeThisDeviceFromCircle:(id*)arg1;
- (void)reportFailure:(NSError *)arg1;
- (void)reportSuccess;
- (bool)requestToJoinCircle:(id*)arg1;
- (bool)requestToJoinCircleAfterRestore:(id*)arg1;
- (OTClique *)requestToResetProtectedData:(id*)arg1;
- (bool)setUserControllableViewsSyncStatus:(bool)arg1 error:(id*)arg2;
- (bool)setViewsWithEnableSet:(NSSet *)arg1 disableSet:(NSSet *)arg2;
- (bool)synchronizeCircleViews;
- (bool)tryRegisteringCredentials;
- (void)waitForUpdate;

@optional

- (unsigned long long)peerCount;
- (bool)platformSupportsSOS;
- (bool)requestToResetSOSCircle:(id*)arg1;
- (bool)resetToOffering:(id*)arg1;

@end
