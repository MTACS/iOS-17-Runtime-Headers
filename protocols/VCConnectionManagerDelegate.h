
@protocol VCConnectionManagerDelegate <VCLinkProbingHandlerDelegate>

@required

- (void)connectionCallback:(id <VCConnectionProtocol>)arg1 isInitialConnection:(bool)arg2;
- (void)didEnableDuplication:(bool)arg1 activeConnection:(id <VCConnectionProtocol>)arg2;
- (void)didMediaQualityDegrade:(bool)arg1;
- (void)didUpdatePreferredInterfaceForDuplication:(unsigned char)arg1 notifyPeer:(bool)arg2 enableDuplication:(bool)arg3 isMediaUnrecoverableSignal:(bool)arg4;
- (void)primaryConnectionChanged:(id <VCConnectionProtocol>)arg1 oldPrimaryConnection:(id <VCConnectionProtocol>)arg2 activeConnection:(id <VCConnectionProtocol>)arg3;

@optional

- (void)didLocalNetworkQualityChange:(bool)arg1 isLocalNetworkQualityBad:(bool)arg2 isRemoteNetworkQualityBad:(bool)arg3;
- (void)discardConnection:(id <VCConnectionProtocol>)arg1;
- (int)getSignalStrengthBars:(int*)arg1 displayBars:(int*)arg2 maxDisplayBars:(int*)arg3;
- (void)handleRATChanged:(NSNumber *)arg1;
- (void)logSignalStrength;
- (void)optIntoExistingSubscribedStreamsForConnection:(id <VCConnectionProtocol>)arg1;
- (void)optOutAllStreamsForConnection:(id <VCConnectionProtocol>)arg1;
- (void)requestStatsWithOptions:(NSDictionary *)arg1;
- (void)resetParticipantGenerationCounter;
- (void)setRemoteDeviceVersionIDS;
- (void)updateParticipantGenerationCounter:(unsigned char)arg1;

@end
