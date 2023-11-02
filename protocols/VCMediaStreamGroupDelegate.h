
@protocol VCMediaStreamGroupDelegate <NSObject>

@required

- (void)didChangeSendingStreamsForStreamGroup:(VCMediaStreamGroup *)arg1;
- (void)didMediaDecryptionTimeOutForStreamGroup:(VCMediaStreamGroup *)arg1;
- (void)streamGroup:(VCMediaStreamGroup *)arg1 didChangeMediaPriority:(unsigned char)arg2;
- (void)streamGroup:(VCMediaStreamGroup *)arg1 didChangePlayoutRTPTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)streamGroup:(VCMediaStreamGroup *)arg1 didRemoteEnableChange:(bool)arg2;
- (void)streamGroup:(VCMediaStreamGroup *)arg1 didRemotePauseChange:(bool)arg2;

@optional

- (void)didChangeActualNetworkBitrateForStreamGroup:(VCMediaStreamGroup *)arg1;
- (void)didChangeReceivingStreamsForStreamGroup:(VCMediaStreamGroup *)arg1;
- (void)didDecryptionTimeOutForMKMRecoveryForStreamGroup:(VCMediaStreamGroup *)arg1;
- (void)didReceiveFirstFrameForStreamGroup:(VCMediaStreamGroup *)arg1;
- (void)streamGroup:(VCMediaStreamGroup *)arg1 didChangeState:(unsigned int)arg2;
- (void)streamGroup:(VCMediaStreamGroup *)arg1 didRequestRedundancy:(bool)arg2;
- (void)streamGroup:(VCMediaStreamGroup *)arg1 didSuspendStreams:(bool)arg2;
- (void)streamGroup:(VCMediaStreamGroup *)arg1 didSwitchFromStreamID:(unsigned short)arg2 toStreamID:(unsigned short)arg3;
- (void)streamGroup:(VCMediaStreamGroup *)arg1 remoteMediaStalled:(bool)arg2 duration:(double)arg3;
- (void)streamGroup:(VCMediaStreamGroup *)arg1 requestKeyFrameGenerationWithStreamID:(unsigned short)arg2 firType:(int)arg3;

@end
