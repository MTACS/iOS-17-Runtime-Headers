
@interface VCTransportSessionIDSMultiLink : VCTransportSessionIDS <VCConnectionManagerDelegate, VCIDSSessionInfoSynchronizerDelegate> {
    bool  _isWiFiAssistActive;
    bool  _oneToOneModeEnabled;
    VCIDSSessionInfoSynchronizer * _sessionInfoSynchronizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) VCIDSSessionInfoSynchronizer *sessionInfoSynchronizer;
@property (readonly) Class superclass;

- (void)VCIDSSessionInfoSynchronizer:(void*)arg1 sendVCIDSSessionInfoRequest:(id)arg2;
- (void)connectionCallback:(id)arg1 isInitialConnection:(bool)arg2;
- (void)dealloc;
- (void)didEnableDuplication:(bool)arg1 activeConnection:(id)arg2;
- (void)didLocalNetworkQualityChange:(bool)arg1 isLocalNetworkQualityBad:(bool)arg2 isRemoteNetworkQualityBad:(bool)arg3;
- (void)didMediaQualityDegrade:(bool)arg1;
- (void)didUpdatePreferredInterfaceForDuplication:(unsigned char)arg1 notifyPeer:(bool)arg2 enableDuplication:(bool)arg3 isMediaUnrecoverableSignal:(bool)arg4;
- (void)discardConnection:(id)arg1;
- (void)flushLinkProbingStatusWithOptions:(id)arg1;
- (void)handleLinkConnectedWithInfo:(id)arg1;
- (void)handleLinkDisconnectedWithInfo:(id)arg1;
- (void)handleProbingResponse:(id)arg1;
- (void)handleSessionInfoResponse:(id)arg1;
- (id)initWithCallID:(unsigned int)arg1 reportingAgent:(id)arg2;
- (id)initWithCallID:(unsigned int)arg1 requireEncryptionInfo:(bool)arg2 reportingAgent:(id)arg3 notificationQueue:(id)arg4 isMultiwaySession:(bool)arg5;
- (id)initWithCallID:(unsigned int)arg1 requireEncryptionInfo:(bool)arg2 reportingAgent:(id)arg3 notificationQueue:(id)arg4 isMultiwaySession:(bool)arg5 dataPath:(int)arg6;
- (void)logSignalStrength;
- (int)onStart;
- (void)onStop;
- (void)optIntoExistingSubscribedStreamsForConnection:(id)arg1;
- (void)optOutAllStreamsForConnection:(id)arg1;
- (void)primaryConnectionChanged:(id)arg1 oldPrimaryConnection:(id)arg2 activeConnection:(id)arg3;
- (void)queryProbingResultsWithOptions:(id)arg1;
- (void)requestStatsWithOptions:(id)arg1;
- (void)resetActiveConnection;
- (void)resetParticipantGenerationCounter;
- (id)sessionInfoSynchronizer;
- (void)setDefaultLink:(id)arg1;
- (void)setOneToOneModeEnabled:(bool)arg1 isInitiator:(bool)arg2;
- (void)setQuickRelayServerProvider:(int)arg1;
- (void)setRemoteDeviceVersionIDS;
- (void)setWiFiAssist:(bool)arg1;
- (void)startActiveProbingWithOptions:(id)arg1;
- (void)stopActiveProbingWithOptions:(id)arg1;
- (void)updateParticipantGenerationCounter:(unsigned char)arg1;

@end
