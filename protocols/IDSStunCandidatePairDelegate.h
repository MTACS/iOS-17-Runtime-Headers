
@protocol IDSStunCandidatePairDelegate <NSObject>

@required

- (void)candidatePair:(IDSStunCandidatePair *)arg1 didAddQREvent:(NSDictionary *)arg2;
- (void)candidatePair:(IDSStunCandidatePair *)arg1 didReceiveGetMaterialResponse:(IDSQRProtoGetMaterialResponse *)arg2;
- (void)candidatePair:(IDSStunCandidatePair *)arg1 didReceiveMappedParticipantsDict:(NSDictionary *)arg2 forLinkID:(BOOL)arg3;
- (void)candidatePair:(IDSStunCandidatePair *)arg1 didReceiveParticipantUpdate:(NSDictionary *)arg2 status:(unsigned short)arg3;
- (void)candidatePair:(IDSStunCandidatePair *)arg1 didReceivePluginControlEvent:(unsigned long long)arg2 operation:(unsigned char)arg3 transactionID:(NSData *)arg4;
- (void)candidatePair:(IDSStunCandidatePair *)arg1 didReceivePluginRegistration:(unsigned long long)arg2 pluginName:(NSString *)arg3;
- (void)candidatePair:(IDSStunCandidatePair *)arg1 didReceivePluginUnregistration:(unsigned long long)arg2 pluginName:(NSString *)arg3;
- (void)candidatePair:(IDSStunCandidatePair *)arg1 didReceivePutMaterialIndication:(IDSQRProtoPutMaterialIndication *)arg2;
- (void)candidatePair:(IDSStunCandidatePair *)arg1 didReceivePutMaterialResponse:(IDSQRProtoPutMaterialResponse *)arg2;
- (void)candidatePair:(IDSStunCandidatePair *)arg1 didReceiveSessionInfo:(NSDictionary *)arg2 status:(unsigned int)arg3;
- (void)candidatePair:(IDSStunCandidatePair *)arg1 didReceiveSessionStats:(NSDictionary *)arg2 success:(bool)arg3;
- (void)candidatePair:(IDSStunCandidatePair *)arg1 didReceiveStunErrorResponse:(long long)arg2 errorCode:(unsigned short)arg3 didLocalExternalAddressChange:(bool)arg4;
- (void)candidatePair:(IDSStunCandidatePair *)arg1 protoRequestDidTimeOut:(unsigned long long)arg2;
- (IDSGFTMetricsLink *)createLinkCycleForCandidatePair:(IDSStunCandidatePair *)arg1;
- (void)disconnectIdleQUICConnectionForCandidatePair:(IDSStunCandidatePair *)arg1;
- (void)receiveBlockedIndicationWithReason:(unsigned int)arg1;
- (void)receiveErrorIndicationWithCode:(unsigned int)arg1;
- (void)receiveIdleClientErrorForCandidatePair:(IDSStunCandidatePair *)arg1;
- (bool)receiveNoSessionStateForCandidatePair:(IDSStunCandidatePair *)arg1 didLocalExternalAddressChange:(bool)arg2;
- (void)sendProbingRequestWithoptions:(NSDictionary *)arg1 candidatePairToken:(NSString *)arg2;
- (long long)sendProtoMessage:(IDSQRProtoMessage *)arg1 candidatePair:(IDSStunCandidatePair *)arg2;
- (long long)sendStunMessage:(IDSStunMessage *)arg1 candidatePair:(IDSStunCandidatePair *)arg2;

@end
