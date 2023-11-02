
@protocol VCMediaStreamSendSyncSourceDelegate <NSObject>

@required

- (void)updateSendSampleRTPTimestamp:(unsigned int)arg1 sampleRate:(double)arg2 systemTime:(double)arg3;

@end
