
@protocol TUCallServicesProxyCallActions <NSObject>

@required

- (oneway void)activateInCallUIWithActivityContinuationIdentifier:(NSUUID *)arg1;
- (oneway void)answerCallWithRequest:(TUAnswerRequest *)arg1;
- (oneway void)disconnectAllCalls;
- (oneway void)disconnectCallWithUniqueProxyIdentifier:(NSString *)arg1;
- (oneway void)disconnectCurrentCallAndActivateHeld;
- (oneway void)enteredBackgroundForAllCalls;
- (oneway void)enteredForegroundForCallWithUniqueProxyIdentifier:(NSString *)arg1;
- (oneway void)groupCallWithUniqueProxyIdentifier:(NSString *)arg1 withOtherCallWithUniqueProxyIdentifier:(NSString *)arg2;
- (oneway void)holdCallWithUniqueProxyIdentifier:(NSString *)arg1;
- (oneway void)playDTMFToneForCallWithUniqueProxyIdentifier:(NSString *)arg1 key:(unsigned char)arg2;
- (oneway void)pullHostedCallsFromPairedHostDevice;
- (oneway void)pullRelayingCallsFromClient;
- (oneway void)pullRelayingGFTCallsFromClientIfNecessary;
- (oneway void)pushHostedCallsToDestination:(IDSDestination *)arg1;
- (oneway void)pushRelayingCallsToHostWithSourceIdentifier:(NSString *)arg1;
- (oneway void)requestVideoUpgradeForCallWithUniqueProxyIdentifier:(NSString *)arg1;
- (oneway void)sendHardPauseDigitsForCallWithUniqueProxyIdentifier:(NSString *)arg1;
- (oneway void)sendMMIOrUSSDCodeWithRequest:(TUDialRequest *)arg1;
- (oneway void)sendUserScoreToRTCReporting:(NSString *)arg1 withScore:(int)arg2;
- (oneway void)setBluetoothAudioFormatForCallWithUniqueProxyIdentifier:(NSString *)arg1 bluetoothAudioFormat:(long long)arg2;
- (oneway void)setDownlinkMuted:(bool)arg1 forCallWithUniqueProxyIdentifier:(NSString *)arg2;
- (oneway void)setIsSendingVideo:(bool)arg1 forCallWithUniqueProxyIdentifier:(NSString *)arg2;
- (oneway void)setMixesVoiceWithMedia:(bool)arg1 forCallWithUniqueProxyIdentifier:(NSString *)arg2;
- (oneway void)setRemoteVideoPresentationSizeForCallWithUniqueProxyIdentifier:(NSString *)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (oneway void)setRemoteVideoPresentationStateForCallWithUniqueProxyIdentifier:(NSString *)arg1 presentationState:(int)arg2;
- (oneway void)setScreenShareAttributesForCallWithUniqueProxyIdentifier:(NSString *)arg1 attributes:(TUCallScreenShareAttributes *)arg2;
- (oneway void)setSharingScreen:(bool)arg1 attributes:(TUCallScreenShareAttributes *)arg2 forCallWithUniqueProxyIdentifier:(NSString *)arg3;
- (oneway void)setSharingScreen:(bool)arg1 forCallWithUniqueProxyIdentifier:(NSString *)arg2;
- (oneway void)setTTYType:(int)arg1 forCallWithUniqueProxyIdentifier:(NSString *)arg2;
- (oneway void)setUplinkMuted:(bool)arg1 forCallWithUniqueProxyIdentifier:(NSString *)arg2;
- (oneway void)shouldAllowRingingCallStatusIndicator:(bool)arg1;
- (oneway void)shouldSuppressInCallStatusBar:(bool)arg1;
- (oneway void)swapCalls;
- (oneway void)ungroupCallWithUniqueProxyIdentifier:(NSString *)arg1;
- (oneway void)unholdCallWithUniqueProxyIdentifier:(NSString *)arg1;
- (oneway void)updateCallWithProxy:(TUProxyCall *)arg1;
- (oneway void)willEnterBackgroundForAllCalls;

@end
