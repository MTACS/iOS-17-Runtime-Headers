
@interface IDSNonFTGL : IDSGlobalLink

- (void)_handleNewRATChange;
- (void)_handleNoRemotePacket;
- (void)_handleRemapping:(id)arg1 errorCode:(unsigned short)arg2 reconnectQUIC:(bool)arg3;
- (bool)_isBetterCandidatePair:(id)arg1 newCandidatePair:(id)arg2;
- (id)_nextConnectedCandidatePair;
- (void)_notifyCandidatePairConnected:(id)arg1;
- (void)_notifyCandidatePairDisconnected:(id)arg1 withReason:(unsigned char)arg2;
- (void)_notifyDefaultUnderlyingLinkChanged:(id)arg1 error:(long long)arg2;
- (bool)_processRemovedLocalAddressList:(id)arg1;
- (void)_selectBetterDefaultCandidatePair:(id)arg1;
- (void)_selectDefaultCandidatePair;
- (void)_setDefaultCandidatePairForNonFT;
- (void)_setFirstDefaultCandidatePair:(id)arg1;
- (bool)_setupNewQRLinkIfNecessary:(id)arg1;
- (void)_startHB:(id)arg1;
- (void)currentCellularSignalStrength:(int*)arg1 signalStrength:(int*)arg2 signalGrade:(int*)arg3;
- (void)disconnectWithCompletionHandler:(id /* block */)arg1;
- (void)dropIPPackets:(BOOL)arg1 payloadArray:(id)arg2;
- (void)setPacketNotificationFilter:(BOOL)arg1 uniqueTag:(unsigned int)arg2 isEnabled:(bool)arg3;
- (void)setSharedSessionHasJoined:(bool)arg1;
- (void)startWithOptions:(id)arg1;
- (void)stopKeepAlive:(id)arg1;
- (void)updateProtocolQualityOfService:(BOOL)arg1 isGood:(bool)arg2;

@end
