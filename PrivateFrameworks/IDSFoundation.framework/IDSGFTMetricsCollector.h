
@interface IDSGFTMetricsCollector : NSObject {
    NSSet * _activeParticipantURIs;
    NSMutableDictionary * _annotatorsByEventType;
    IDSGFTMetricsAnonymizer * _anonymizer;
    NSString * _conversationID;
    bool  _isInitiator;
    IDSGFTMetricsMembershipChange * _lastMembershipChange;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    int  _nextUniqueID;
    NSMutableDictionary * _pushTokensByMKIs;
    NSMutableDictionary * _referencePointsByType;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _unknownMKMFlushLock;
    NSMutableDictionary * _unknownMKMReceiptTimes;
}

@property (copy) NSSet *activeParticipantURIs;
@property NSString *conversationID;
@property bool isInitiator;
@property (readonly) IDSGFTMetricsLocalJoin *localJoin;

- (void).cxx_destruct;
- (id)activeParticipantURIs;
- (void)allocbindResponseForProtocolStack:(id)arg1;
- (void)allocbindResponseFromInterface:(id)arg1;
- (void)annotate:(id)arg1 block:(id /* block */)arg2;
- (void)annotate:(id)arg1 withEvent:(id)arg2;
- (void)avcReceiveMKMTime:(double)arg1 forMKI:(id)arg2 isGeneratedLocally:(bool)arg3;
- (id)begin:(id)arg1 uniqueID:(id)arg2;
- (id)begin:(id)arg1 uniqueID:(id)arg2 withClass:(Class)arg3;
- (void)clientChannelConnected;
- (id)collectForTimeBase:(double)arg1 anonymize:(bool)arg2;
- (void)connectQRServer;
- (id)conversationID;
- (id)createLinkCycle;
- (void)didConnectUnderlyingE2ELink;
- (void)didConnectUnderlyingRelayLink;
- (void)didCreateMKM:(id)arg1;
- (void)didFailConnectionOfType:(id)arg1;
- (void)didMitigateCollision:(bool)arg1;
- (void)didSendJoin;
- (id)error:(id)arg1;
- (void)firstIncomingPacketTime:(double)arg1 forMKI:(id)arg2;
- (void)firstOutgoingPacketTime:(double)arg1 forMKI:(id)arg2;
- (void)flushPendingNowKnownMKMs;
- (id)getOrCreateMKICycleFor:(id)arg1;
- (void)globalLinkStart;
- (id)init;
- (bool)isInitiator;
- (id)joinCycleForToken:(id)arg1;
- (id)keyValueDelivery;
- (void)linkConnectedUsingFakeTLS;
- (void)linkConnectedUsingHTTP2;
- (void)linkConnectedUsingQUIC;
- (void)linkConnectedUsingTCPSTUN;
- (void)linkConnectedWithH2FallbackEnabled:(bool)arg1;
- (id)localDidJoin;
- (id)localJoin;
- (void)mapMKI:(id)arg1 toPushToken:(id)arg2;
- (void)membershipChange;
- (void)participantIdChanged;
- (void)quicAllocbindRequest;
- (void)quicAllocbindResponse;
- (void)receivedKMOverPushFromToken:(id)arg1;
- (void)receivedKMOverPushViaCacheForToken:(id)arg1;
- (void)receivedKMOverQRFromToken:(id)arg1;
- (void)receivedKMOverQUICFromToken:(id)arg1;
- (void)receivedUnknownKMOverPushViaCache:(id)arg1;
- (void)receivedUnverifiedKMOverQUICFromToken:(id)arg1;
- (void)remoteDidBecomeActive:(id)arg1;
- (void)remoteDidJoin:(id)arg1;
- (id)request:(id)arg1;
- (void)selectedLocalInterface:(id)arg1;
- (void)sendAllocationRequest;
- (void)sendMKMToAVC:(id)arg1 isGeneratedLocally:(bool)arg2;
- (void)sendRatchetedKMtoAVCForToken:(id)arg1;
- (void)setActiveParticipantURIs:(id)arg1;
- (void)setConversationID:(id)arg1;
- (void)setIsInitiator:(bool)arg1;
- (void)stunAllocbindRequest;
- (void)stunAllocbindResponse;
- (void)tcpAllocbindRequest;
- (void)tcpAllocbindResponse;
- (void)transactionIDMismatchDetected;
- (id)uniqueError:(id)arg1;
- (void)willSendAllocbindRequestThroughInterface:(id)arg1;
- (void)willSendJoin;

@end
