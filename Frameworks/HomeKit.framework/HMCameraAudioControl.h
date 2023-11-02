
@interface HMCameraAudioControl : HMCameraControl {
    _HMCameraAudioControl * _audioControl;
}

@property (nonatomic, readonly) _HMCameraAudioControl *audioControl;
@property (nonatomic, readonly) HMCharacteristic *mute;
@property (nonatomic, readonly) HMCharacteristic *volume;

- (void).cxx_destruct;
- (id)audioControl;
- (id)initWithAudioControl:(id)arg1;
- (id)mute;
- (id)volume;

@end
