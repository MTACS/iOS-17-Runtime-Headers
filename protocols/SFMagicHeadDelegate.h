
@protocol SFMagicHeadDelegate

@required

- (void)magicHead:(SFMagicHead *)arg1 requestingSubtitleTextChangeForState:(long long)arg2;
- (void)magicHeadDidFinishTransferForHead:(SFMagicHead *)arg1;
- (void)magicHeadDidStartTransferForHead:(SFMagicHead *)arg1;
- (void)magicHeadDidTerminateTransferForHead:(SFMagicHead *)arg1;

@end
