
@protocol MPCProcessAudioTapDelegate <NSObject>

@required

- (void)processAudioTapDidReceiveAudioSamples:(void*)arg1 numberOfSamples:(unsigned int)arg2;

@optional

- (void)processAudioTapDidStop;

@end
