
@protocol VCAudioIOSource <NSObject>

@required

- (void)pullAudioSamples:(struct opaqueVCAudioBufferList { }*)arg1;

@end
