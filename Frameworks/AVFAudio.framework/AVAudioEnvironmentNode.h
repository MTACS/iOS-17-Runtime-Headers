
@interface AVAudioEnvironmentNode : AVAudioNode <AVAudioMixing>

@property (nonatomic, readonly) NSArray *applicableRenderingAlgorithms;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) AVAudioEnvironmentDistanceAttenuationParameters *distanceAttenuationParameters;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct AVAudio3DAngularOrientation { float x1; float x2; float x3; } listenerAngularOrientation;
@property (nonatomic) struct AVAudio3DPoint { float x1; float x2; float x3; } listenerPosition;
@property (nonatomic) struct AVAudio3DVectorOrientation { struct AVAudio3DPoint { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct AVAudio3DPoint { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; } listenerVectorOrientation;
@property (nonatomic, readonly) unsigned long long nextAvailableInputBus;
@property (nonatomic) long long outputType;
@property (nonatomic) float outputVolume;
@property (nonatomic, readonly) AVAudioEnvironmentReverbParameters *reverbParameters;
@property (readonly) Class superclass;
@property (nonatomic) float volume;

- (id)applicableRenderingAlgorithms;
- (id)distanceAttenuationParameters;
- (id)init;
- (struct AVAudio3DAngularOrientation { float x1; float x2; float x3; })listenerAngularOrientation;
- (struct AVAudio3DPoint { float x1; float x2; float x3; })listenerPosition;
- (struct AVAudio3DVectorOrientation { struct AVAudio3DPoint { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct AVAudio3DPoint { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; })listenerVectorOrientation;
- (unsigned long long)nextAvailableInputBus;
- (long long)outputType;
- (float)outputVolume;
- (id)reverbParameters;
- (void)setListenerAngularOrientation:(struct AVAudio3DAngularOrientation { float x1; float x2; float x3; })arg1;
- (void)setListenerPosition:(struct AVAudio3DPoint { float x1; float x2; float x3; })arg1;
- (void)setListenerVectorOrientation:(struct AVAudio3DVectorOrientation { struct AVAudio3DPoint { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct AVAudio3DPoint { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; })arg1;
- (void)setOutputType:(long long)arg1;
- (void)setOutputVolume:(float)arg1;

@end
