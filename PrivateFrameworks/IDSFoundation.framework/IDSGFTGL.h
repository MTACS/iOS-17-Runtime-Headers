
@interface IDSGFTGL : IDSGlobalLink {
    bool  _allowE2E;
    NSData * _keyMaterialData;
    unsigned int  _keyMaterialDataCounter;
    id /* block */  _keyMaterialSentHandler;
    NSMutableDictionary * _reliableUnicastServerMaterialToProtoMessageTransactionID;
    NSArray * _remoteCandidatePairs;
    NSMutableArray * _virtualCandidatePairs;
}

- (void).cxx_destruct;
- (bool)_IsExtIPDiscoveryNeeded:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1 candidatePairList:(id)arg2;
- (void)_destroyVirtualRelayLinksForCandidatePair:(id)arg1;
- (void)_disableE2E;
- (void)_discardCandidatePairsWithOption:(bool)arg1;
- (void)_discardKeyMaterialMessage:(long long)arg1;
- (void)_enableE2E;
- (id)_findVirtualCandidatePair:(id)arg1;
- (long long)_getQRAllocateType;
- (void)_notifyDefaultUnderlyingLinkChanged:(id)arg1 error:(long long)arg2;
- (bool)_postProcessAllocbindResponse:(id)arg1 candidatePair:(id)arg2 candidatePairToken:(id)arg3;
- (bool)_postProcessQUICAllocbindResponse:(id)arg1 candidatePair:(id)arg2;
- (void)_processCommandRelayInterfaceInfo:(id)arg1 candidatePairToken:(id)arg2;
- (void)_processReceivedRemoteCandidatePairs:(id)arg1;
- (bool)_processRegisterAckResponse:(id)arg1 candidatePairToken:(id)arg2;
- (bool)_processRegisterIndication:(id)arg1 candidatePairToken:(id)arg2;
- (bool)_processRegisterResponse:(id)arg1 candidatePairToken:(id)arg2;
- (bool)_processReliableUnicastRegistrationErrorResponse:(id)arg1 packetBuffer:(struct { char *x1; unsigned long long x2; long long x3; long long x4; unsigned int x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; bool x12; bool x13; bool x14; bool x15; bool x16; unsigned int x17; struct sockaddr_storage { unsigned char x_18_1_1; unsigned char x_18_1_2; BOOL x_18_1_3[6]; long long x_18_1_4; BOOL x_18_1_5[112]; } x18; struct sockaddr_storage { unsigned char x_19_1_1; unsigned char x_19_1_2; BOOL x_19_1_3[6]; long long x_19_1_4; BOOL x_19_1_5[112]; } x19; struct sockaddr_storage { unsigned char x_20_1_1; unsigned char x_20_1_2; BOOL x_20_1_3[6]; long long x_20_1_4; BOOL x_20_1_5[112]; } x20; unsigned short x21; unsigned char x22; int x23; struct { char *x_24_1_1; unsigned short x_24_1_2; int x_24_1_3; unsigned short x_24_1_4[12]; unsigned long long x_24_1_5; unsigned char x_24_1_6; unsigned short x_24_1_7; unsigned char x_24_1_8; bool x_24_1_9; bool x_24_1_10; unsigned short x_24_1_11; struct { unsigned short x_12_2_1; unsigned short x_12_2_2; unsigned short x_12_2_3; unsigned short x_12_2_4; unsigned short x_12_2_5; } x_24_1_12; bool x_24_1_13; bool x_24_1_14; int x_24_1_15; unsigned short x_24_1_16[4]; unsigned char x_24_1_17; bool x_24_1_18; bool x_24_1_19; bool x_24_1_20; unsigned int x_24_1_21; } x24[8]; }*)arg2 startTime:(double)arg3 candidatePair:(id)arg4;
- (bool)_processRemovedLocalAddressList:(id)arg1;
- (void)_sendConnectionDataWithRemovedAddressList:(id)arg1;
- (void)_sendQUICRegisterAckRequest:(id)arg1 withOptions:(id)arg2;
- (void)_sendQUICRegisterRequest:(id)arg1 withOptions:(id)arg2;
- (void)_sendRegisterRequest:(id)arg1;
- (void)_sendRelayInterfaceInfo:(id)arg1;
- (bool)_setupNewQRLinkIfNecessary:(id)arg1;
- (void)_setupVirtualCandidatePairs:(id)arg1 remoteCandidatePair:(id)arg2;
- (void)disconnectWithCompletionHandler:(id /* block */)arg1;
- (void)enableUPlusOneSessionForTransition:(bool)arg1;
- (void)invalidate;
- (void)manageDesignatedDestinations:(id)arg1 relayGroupID:(id)arg2 relaySessionID:(id)arg3 withType:(unsigned short)arg4 sessionStateCounter:(unsigned int)arg5;
- (void)receiveJoinNotificationFromAParticipant;
- (void)removeParticipantIDs:(id)arg1 relayGroupID:(id)arg2 relaySessionID:(id)arg3 sessionStateCounter:(unsigned int)arg4;
- (void)sendKeyMaterialMessageData:(id)arg1 relayGroupID:(id)arg2 destinationURIs:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setAllowP2P:(bool)arg1;
- (void)setDefaultUnderlyingLink:(BOOL)arg1;
- (void)setIsReliableUnicastSession:(bool)arg1;
- (void)setIsUPlusOneSession:(bool)arg1;
- (void)setParticipantType:(unsigned short)arg1 relayGroupID:(id)arg2 relaySessionID:(id)arg3 sessionStateCounter:(unsigned int)arg4;
- (void)setPluginCache:(id)arg1;
- (void)setSharedSessionHasJoined:(bool)arg1;
- (void)setTimeBase:(id)arg1;
- (void)startWithOptions:(id)arg1;
- (void)updateURIToParticipantIDs:(id)arg1 relaySessionID:(id)arg2 sessionInfo:(id)arg3;

@end
