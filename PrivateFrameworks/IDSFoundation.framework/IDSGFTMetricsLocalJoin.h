
@interface IDSGFTMetricsLocalJoin : IDSGFTMetricsReferencePoint {
    bool  _didJoin;
}

@property bool didJoin;

- (void)allocbindResponseForProtocolStack:(id)arg1;
- (void)allocbindResponseFromInterface:(id)arg1;
- (void)avcReceiveMKMTime:(double)arg1 forMKI:(id)arg2 isGeneratedLocally:(bool)arg3;
- (void)clientChannelConnected;
- (void)connectQRServer;
- (void)didConnectUnderlyingE2ELink;
- (void)didConnectUnderlyingRelayLink;
- (void)didCreateMKM:(id)arg1;
- (bool)didJoin;
- (void)didSendJoin;
- (void)firstIncomingPacketTime:(double)arg1 forMKI:(id)arg2;
- (void)firstOutgoingPacketTime:(double)arg1 forMKI:(id)arg2;
- (void)globalLinkStart;
- (void)join;
- (void)linkConnectedUsingFakeTLS;
- (void)linkConnectedUsingHTTP2;
- (void)linkConnectedUsingQUIC;
- (void)linkConnectedUsingTCPSTUN;
- (void)linkConnectedWithH2FallbackEnabled:(bool)arg1;
- (void)participantIdChanged;
- (void)quicAllocbindRequest;
- (void)quicAllocbindResponse;
- (void)selectedLocalInterface:(id)arg1;
- (void)sendAllocationRequest;
- (void)sendMKMToAVC:(id)arg1 isGeneratedLocally:(bool)arg2;
- (void)setDidJoin:(bool)arg1;
- (void)stunAllocbindRequest;
- (void)stunAllocbindResponse;
- (void)tcpAllocbindRequest;
- (void)tcpAllocbindResponse;
- (void)willSendAllocbindRequestThroughInterface:(id)arg1;
- (void)willSendJoin;

@end
