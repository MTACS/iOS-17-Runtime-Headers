
@interface SiriCoreNetworkingAnalytics : NSObject {
    SiriCoreNetEventMessage * _debugPreparationSnapshotEvent;
    SiriCoreNetEventMessage * _debugReadySnapshotEvent;
    SiriCoreNetEventMessage * _debugSessionConnectionSnapthotEvent;
    SiriCoreNetEventMessage * _httpHeaderEvent;
    bool  _isConnectionActive;
    NSUUID * _netId;
    bool  _netIdAvailable;
    NSUUID * _netIdForRequestLink;
    NSUUID * _orchestratorRequestId;
    SiriCoreNetEventMessage * _peerConnectionFailedEvent;
    SiriCoreNetEventMessage * _preparationSnapshotEvent;
    NSObject<OS_dispatch_queue> * _queue;
    SiriCoreNetEventMessage * _readySnapshotEvent;
    unsigned int  _sequenceNumber;
    SiriCoreNetEventMessage * _sessionConnectionFailedEvent;
    SiriCoreNetEventMessage * _sessionConnectionSnapthotEvent;
}

+ (int)connectionMethodFromString:(id)arg1;
+ (int)connectionModeFromString:(id)arg1;
+ (int)connectionTypeFromString:(id)arg1;
+ (id)debugNetworkInterfacesFromSiriCoreConnectionMetrics:(id)arg1;
+ (id)debugSessionConnectionNetworkFromSiriCoreConnectionMetrics:(id)arg1;
+ (id)endpointFromDictionary:(id)arg1;
+ (int)endpointTypeFromNumber:(id)arg1;
+ (id)endpointsFromArray:(id)arg1;
+ (id)establishmentResolutionFromArray:(id)arg1;
+ (id)handShakeProtocolFromArray:(id)arg1;
+ (int)handshakeProtocolFromString:(id)arg1;
+ (id)networkInterfacesFromDictionary:(id)arg1;
+ (id)pathInterfacesFromArray:(id)arg1;
+ (int)pathStatusFromNumber:(id)arg1;
+ (int)pathTypeFromNumber:(id)arg1;
+ (int)phyModeFromString:(id)arg1;
+ (id)pingInfoFromSiriCoreConnectionMetrics:(id)arg1;
+ (int)providerFromString:(id)arg1;
+ (id)proxyConfigurationFromDictionary:(id)arg1;
+ (int)qualityFromString:(id)arg1;
+ (id)sessionConnectionFailedError:(id)arg1 connectionMode:(id)arg2 sessionType:(id)arg3 sessionState:(id)arg4 dormant:(bool)arg5 analysisInfo:(id)arg6;
+ (id)sessionConnectionNetworkFromSiriCoreConnectionMetrics:(id)arg1;
+ (id)sessionConnectionQualityFromSiriCoreConnectionMetrics:(id)arg1;
+ (int)sessionStateFromString:(id)arg1;
+ (int)sessionTypeFromString:(id)arg1;
+ (id)sharedSiriCoreNetworkingAnalytics;
+ (int)snapshotStateFromStringEvent:(id)arg1;
+ (int)tlsFromString:(id)arg1;

- (void).cxx_destruct;
- (id)_createRequestLinkInfoFromUUID:(id)arg1 component:(int)arg2;
- (id)_createSchemaClientEventFromUUID:(id)arg1;
- (void)_emitAllCachedMessagesFor:(id)arg1;
- (id)_init;
- (bool)emitLogDebug;
- (unsigned int)getSequenceNumber;
- (void)increaseSequenceNumber;
- (id)init;
- (bool)isNetIdAvailable;
- (void)logDebugNetworkConnectionStatePreparationSnapshotCaptured:(id)arg1;
- (void)logDebugNetworkConnectionStateReadySnapshotCaptured:(id)arg1;
- (void)logDebugSessionConnectionSnapshotCaptured:(id)arg1;
- (void)logNetworkConnectionStatePreparationSnapshotCaptured:(id)arg1;
- (void)logNetworkConnectionStateReadySnapshotCaptured:(id)arg1;
- (void)logPeerConnectionFailed:(id)arg1;
- (void)logRequestLinkBetweenOrchestratorAndNetworkComponent;
- (void)logSessionConnectionFailed:(id)arg1;
- (void)logSessionConnectionHttpHeaderCreated:(id)arg1;
- (void)logSessionConnectionSnapshotCaptured:(id)arg1;
- (id)orchestratorRequestId;
- (void)reset;
- (void)resetNetId;
- (void)resetSequenceNumber;
- (void)setIsConnectionActive:(bool)arg1;
- (void)setNetId:(id)arg1;
- (void)setNetIdAvailable:(bool)arg1;
- (void)setOrchestratorRequestId:(id)arg1;

@end
