
@interface CDPSOSCircleProxyImpl : NSObject <CDPDCircleProxy> {
    CDPContext * _cdpContext;
}

@property (nonatomic, readonly) CDPContext *cdpContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (unsigned long long)syncingStatusForAltDSID:(id)arg1;

- (void).cxx_destruct;
- (int)_authenticatedCircleStatus:(id*)arg1;
- (int)_circleStatus:(id*)arg1;
- (bool)_performSOSCBlock:(id /* block */)arg1 error:(id*)arg2;
- (bool)_registerCredentialsOnlyIfNeeded:(bool)arg1;
- (bool)_viewMemberForView:(struct __CFString { }*)arg1 error:(id*)arg2;
- (bool)anyPeerHasEnabledViewsInSet:(id)arg1 error:(id*)arg2;
- (unsigned long long)cachedCliqueStatus:(id*)arg1;
- (int)cachedSOSCircleStatus:(id*)arg1;
- (bool)canAuthenticate;
- (id)cdpContext;
- (unsigned long long)cdpStatusFromSOS:(int)arg1;
- (long long)cliqueStatus:(id*)arg1;
- (unsigned long long)combinedCachedCircleStatus:(id*)arg1;
- (unsigned long long)combinedCircleStatus:(id*)arg1;
- (void)didJoinCircleAfterRecovery:(id)arg1;
- (bool)fetchUserControllableViewsSyncingEnabled:(id*)arg1;
- (id)generateRecoveryKeyWithInfo:(id)arg1 error:(id*)arg2;
- (id)generateVerifierWithRcoveryKey:(id)arg1 error:(id*)arg2;
- (id)generateVerifierWithRecoveryKey:(id)arg1 error:(id*)arg2;
- (bool)hasNonViewAwarePeers;
- (id)initWithContext:(id)arg1;
- (bool)isLastBackupMakingPeer:(id*)arg1;
- (int)nonCachedSOSCircleStatus:(id*)arg1;
- (id)pairingChannelAcceptor;
- (id)pairingChannelInitiator;
- (unsigned long long)peerCount;
- (id)peerDeviceNamesByPeerID;
- (id)peerId;
- (void)recoverOctagonUsingCustodianInfo:(id)arg1 completion:(id /* block */)arg2;
- (bool)registerCredentials;
- (bool)registerCredentialsIfMissing;
- (bool)removeNonViewAwarePeers:(id*)arg1;
- (bool)removeThisDeviceFromCircle:(id*)arg1;
- (void)reportFailure:(id)arg1;
- (void)reportSuccess;
- (bool)requestToJoinCircle:(id*)arg1;
- (bool)requestToJoinCircleAfterRestore:(id*)arg1;
- (bool)requestToResetCircle:(id*)arg1;
- (bool)requestToResetCloudKitDataForReason:(id)arg1 error:(id*)arg2;
- (id)requestToResetProtectedData:(id*)arg1;
- (bool)resetToOffering:(id*)arg1;
- (bool)setUserControllableViewsSyncStatus:(bool)arg1 error:(id*)arg2;
- (bool)setViewsWithEnableSet:(id)arg1 disableSet:(id)arg2;
- (bool)synchronizeCircleViews;
- (bool)tryRegisteringCredentials;
- (bool)viewMemberForAutofillPasswords:(id*)arg1;
- (bool)viewMemberForPCSMaster:(id*)arg1;
- (void)waitForUpdate;

@end
