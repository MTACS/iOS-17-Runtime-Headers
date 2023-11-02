
@interface AVAudioIONode : AVAudioNode

@property (nonatomic, readonly) struct OpaqueAudioComponentInstance { }*audioUnit;
@property (nonatomic, readonly) double presentationLatency;
@property (getter=isVoiceProcessingEnabled, nonatomic, readonly) bool voiceProcessingEnabled;

- (struct OpaqueAudioComponentInstance { }*)audioUnit;
- (void)didAttachToEngine:(id)arg1;
- (void)didDetachFromEngine:(id)arg1 error:(id*)arg2;
- (bool)enableManualRenderingMode:(long long)arg1 isInput:(bool)arg2;
- (bool)enableRealtimeRenderingModeWithIOUnit:(void*)arg1 isInput:(bool)arg2 forceIOUnitReset:(bool)arg3;
- (id)initWithIOUnit:(void*)arg1 isInput:(bool)arg2;
- (bool)isInManualRenderingMode;
- (bool)isVoiceProcessingEnabled;
- (long long)manualRenderingMode;
- (double)presentationLatency;
- (bool)setVoiceProcessingEnabled:(bool)arg1 error:(id*)arg2;

@end
