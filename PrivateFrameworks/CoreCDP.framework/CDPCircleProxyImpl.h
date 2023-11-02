
@interface CDPCircleProxyImpl : NSObject <CDPDCircleProxy> {
    CDPContext * _cdpContext;
    OTClique * _clique;
}

@property (nonatomic, readonly) CDPContext *cdpContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (unsigned long long)syncingStatusForAltDSID:(id)arg1;

- (void).cxx_destruct;
- (long long)_authenticatedCliqueStatus:(id*)arg1;
- (id)_initializeRecoveryKeyWithInfo:(id)arg1 error:(id*)arg2;
- (id)_pairingChannelContext;
- (void)_recoverOctagonUsingRecoveryKey:(id)arg1 completion:(id /* block */)arg2;
- (bool)_registerCredentialsOnlyIfNeeded:(bool)arg1;
- (int)_sos_authenticatedCircleStatus:(id*)arg1;
- (int)_sos_circleStatus:(id*)arg1;
- (bool)anyPeerHasEnabledViewsInSet:(id)arg1 error:(id*)arg2;
- (unsigned long long)cachedCliqueStatus:(id*)arg1;
- (int)cachedSOSCircleStatus:(id*)arg1;
- (bool)canAuthenticate;
- (id)cdpContext;
- (unsigned long long)cdpStatusFromOT:(long long)arg1;
- (unsigned long long)cdpStatusFromSOS:(int)arg1;
- (long long)cliqueStatus:(id*)arg1;
- (unsigned long long)combinedCachedCircleStatus:(id*)arg1;
- (unsigned long long)combinedCircleStatus:(id*)arg1;
- (id)contextType;
- (void)didJoinCircleAfterRecovery:(id)arg1;
- (bool)fetchUserControllableViewsSyncingEnabled:(id*)arg1;
- (id)generateRecoveryKeyWithInfo:(id)arg1 error:(id*)arg2;
- (id)generateVerifierWithRecoveryKey:(id)arg1 error:(id*)arg2;
- (bool)hasNonViewAwarePeers;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 clique:(id)arg2;
- (bool)isLastBackupMakingPeer:(id*)arg1;
- (bool)isRecoveryKeySet:(id)arg1 error:(id*)arg2;
- (int)nonCachedSOSCircleStatus:(id*)arg1;
- (id)pairingChannelAcceptor;
- (id)pairingChannelInitiator;
- (id)peerDeviceNamesByPeerID;
- (id)peerId;
- (bool)platformSupportsSOS;
- (void)recoverOctagonUsingCustodianInfo:(id)arg1 completion:(id /* block */)arg2;
- (bool)registerCredentials;
- (bool)registerCredentialsIfMissing;
- (bool)removeNonViewAwarePeers:(id*)arg1;
- (bool)removeThisDeviceFromCircle:(id*)arg1;
- (void)reportFailure:(id)arg1;
- (void)reportSuccess;
- (bool)requestToJoinCircle:(id*)arg1;
- (bool)requestToJoinCircleAfterRestore:(id*)arg1;
- (id)requestToResetProtectedData:(id*)arg1;
- (bool)setUserControllableViewsSyncStatus:(bool)arg1 error:(id*)arg2;
- (int)sosCircleStatus:(id*)arg1;
- (bool)synchronizeCircleViews;
- (bool)tryRegisteringCredentials;
- (bool)waitForInitialSync:(id*)arg1;
- (void)waitForUpdate;

@end
