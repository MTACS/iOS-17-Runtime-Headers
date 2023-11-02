
@interface IDSGFTMetricsLink : IDSGFTMetricsReferencePoint

- (void)linkConnectedWithProtocolStack:(id)arg1;
- (void)receiveAllocbindResponse;
- (void)receiveBindingRequest;
- (void)receiveBindingResponse;
- (void)sendAllocbindRequest;
- (void)sendBindingRequest;
- (void)sendBindingResponse;
- (void)setChannelDataProtocolStack:(id)arg1;
- (void)setIPVersion:(unsigned char)arg1;
- (void)setIsTLEEnabled:(bool)arg1;
- (void)setLinkType:(id)arg1;
- (void)setLocalRAT:(unsigned int)arg1;
- (void)setRelayProtocolStack:(id)arg1;
- (void)setRemoteRAT:(unsigned int)arg1;
- (void)virtualRelayLinkConnected;

@end
