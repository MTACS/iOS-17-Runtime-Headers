
@interface TLAlertQueuePlayerItemHapticTracks : NSObject {
    AVPlayerItemTrack * _attenuatedHapticPlayerItemTrack;
    AVPlayerItemTrack * _hapticPlayerItemTrack;
}

@property (nonatomic, readonly) AVPlayerItemTrack *attenuatedHapticPlayerItemTrack;
@property (nonatomic, readonly) AVPlayerItemTrack *hapticPlayerItemTrack;

- (void).cxx_destruct;
- (id)attenuatedHapticPlayerItemTrack;
- (id)hapticPlayerItemTrack;
- (id)initWithHapticPlayerItemTrack:(id)arg1 attenuatedHapticPlayerItemTrack:(id)arg2;

@end
