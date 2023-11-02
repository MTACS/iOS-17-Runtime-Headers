
@interface CoreIDVShared.IdentityManagementUIClient : NSObject <CoreIDVShared.IdenityProofingAvailabilityProviding, CoreIDVShared.IdentityManagementUIProtocol, CoreIDVShared.IdentityProofingConnectionInvalidating> {
    void disconnectHandler;
    void remoteObjectProxy;
    void remoteObjectProxyError;
    void serverConnection;
}

- (void).cxx_destruct;
- (void)clearDataAfterTerminalProofingStateWithState:(id)arg1 proofingOptions:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (void)deleteBoundACLWithCompletion:(id /* block */)arg1;
- (void)fetchBioBindingDetailsWithCompletion:(id /* block */)arg1;
- (void)fetchBiomeFedStatsUIWithCompletion:(id /* block */)arg1;
- (void)fetchImageQualitySettingsWithCompletion:(id /* block */)arg1;
- (void)fetchTermsAndConditionsWithCompletion:(id /* block */)arg1;
- (void)getLivenessConfigWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)invalidate;
- (void)isWatchPaired:(id /* block */)arg1;
- (void)prepareForProofingDisplay:(id)arg1 proofingOptions:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)prepareForProofingIdentity:(id)arg1 completion:(id /* block */)arg2;
- (void)proofIdentity:(id)arg1 :(unsigned long long)arg2 :(bool)arg3 totalUploadAssetsFileSizeInBytes:(long long)arg4 completion:(id /* block */)arg5;
- (void)proofIdentityUsing:(id)arg1 proofingOptions:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)proofingCancelled:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)proofingFlowAvailability:(id /* block */)arg1;
- (void)provisionIdentityWithState:(id)arg1 proofingOptions:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)retrieveBioBindingUnboundACL:(id /* block */)arg1;
- (void)retrieveBoundACL:(id /* block */)arg1;
- (void)retrievePasscodeBindingUnboundACL:(id /* block */)arg1;
- (void)saveIdentityProofingBiomeDataSharingUserConsent:(bool)arg1 state:(id)arg2 proofingOptions:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)setGlobalBoundACLWithData:(id)arg1 type:(long long)arg2 completion:(id /* block */)arg3;
- (void)setModifiedGlobalBoundACLWithData:(id)arg1 externalizedLAContext:(id)arg2 completion:(id /* block */)arg3;
- (void)triggerAssetsUploadWithProofingOptions:(unsigned long long)arg1 canUploadOnExpensiveNetwork:(bool)arg2 completion:(id /* block */)arg3;
- (void)uploadLivenessVideoWithLivenessVideoURL:(id)arg1 shouldScheduleUploads:(bool)arg2 withCompletion:(id /* block */)arg3;

@end
