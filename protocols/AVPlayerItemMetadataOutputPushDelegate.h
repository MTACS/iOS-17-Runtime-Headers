
@protocol AVPlayerItemMetadataOutputPushDelegate <AVPlayerItemOutputPushDelegate>

@optional

- (void)metadataOutput:(AVPlayerItemMetadataOutput *)arg1 didOutputTimedMetadataGroups:(NSArray *)arg2 fromPlayerItemTrack:(AVPlayerItemTrack *)arg3;

@end
