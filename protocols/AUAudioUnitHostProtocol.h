
@protocol AUAudioUnitHostProtocol <_AURemoteParameterSynchronization>

@required

- (void)MIDICIProfileChanged:(unsigned char)arg1 channel:(unsigned char)arg2 profile:(MIDICIProfile *)arg3 enabled:(bool)arg4;
- (void)propertiesChanged:(NSArray *)arg1;
- (void)speechSynthesisMetadataAvailable:(NSArray *)arg1 speechRequest:(AVSpeechSynthesisProviderRequest *)arg2;

@end
