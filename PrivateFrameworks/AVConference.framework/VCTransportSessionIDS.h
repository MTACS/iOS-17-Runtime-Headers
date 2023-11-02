
@interface VCTransportSessionIDS : VCTransportSession {
    int  _dataPath;
    VCDatagramChannelIDS * _datagramChannel;
    NSString * _destination;
    unsigned int  _linkPreferSuggestionFromDefaults;
    bool  _requireEncryptionInfo;
    bool  _sessionBasedServerExperimentsProcessed;
    int  _socket;
    bool  _useIDSLinkSuggestionFeatureFlag;
}

@property (nonatomic, copy) NSString *destination;
@property (nonatomic) int socket;

- (void)cleanupDatagramChannel;
- (id)connectionSetupPiggybackBlob;
- (id)datagramChannel;
- (void)datagramChannelEventLogForInfo:(id)arg1 eventInfo:(id)arg2;
- (void)dealloc;
- (void)deregisterBasebandNotifications;
- (id)destination;
- (void)dispatchedProcessDatagramChannelEventInfo:(id)arg1;
- (int)flushBasebandQueueForConnection:(id)arg1 payloadInfoList:(id)arg2;
- (bool)getConnectionSetupData:(id*)arg1 withOptions:(id)arg2 error:(id*)arg3;
- (int)getSignalStrengthBars:(int*)arg1 displayBars:(int*)arg2 maxDisplayBars:(int*)arg3;
- (void)handleCellularMTUChanged:(id)arg1;
- (void)handleCellularSoMaskChanged:(id)arg1;
- (void)handleChannelInfoReport:(id)arg1;
- (void)handleDefaultLinkUpdatedWithInfo:(id)arg1;
- (void)handleIDSEncryptionInfoEvent:(id)arg1;
- (void)handleIDSMembershipChangeInfoEvent:(id)arg1;
- (void)handleLinkConnectedWithInfo:(id)arg1;
- (void)handleLinkConstrainsChanged:(id)arg1;
- (void)handleLinkDisconnectedWithInfo:(id)arg1;
- (void)handleLinkPreferSuggestion:(id)arg1;
- (void)handlePreConnectionDataReceived:(id)arg1;
- (void)handleProbingResponse:(id)arg1;
- (void)handleRATChanged:(id)arg1;
- (void)handleReportingBlob:(id)arg1;
- (void)handleSessionInfoResponse:(id)arg1;
- (void)handleStatResponse:(id)arg1;
- (id)initWithCallID:(unsigned int)arg1 reportingAgent:(id)arg2;
- (id)initWithCallID:(unsigned int)arg1 requireEncryptionInfo:(bool)arg2 reportingAgent:(id)arg3 notificationQueue:(id)arg4;
- (id)initWithCallID:(unsigned int)arg1 requireEncryptionInfo:(bool)arg2 reportingAgent:(id)arg3 notificationQueue:(id)arg4 dataPath:(int)arg5;
- (int)onStart;
- (void)onStop;
- (void)processDatagramChannelEventInfo:(id)arg1;
- (void)processSessionBasedServerExperiments:(id)arg1;
- (int)registerBasebandNotificationsForConnection:(id)arg1;
- (unsigned int)remoteDeviceVersionIDS;
- (void)setConnectionSetupPiggybackBlob:(id)arg1;
- (void)setConnectionSetupTime;
- (void)setDestination:(id)arg1;
- (void)setPiggybackBlobPreference;
- (void)setQuickRelayServerProvider:(int)arg1;
- (void)setSocket:(int)arg1;
- (int)socket;
- (void)start;
- (void)startMKMRecoveryForParticipantIDs:(id)arg1;
- (void)stop;
- (int)updateQualityIndicator:(int)arg1 isIPv6:(bool)arg2;

@end
