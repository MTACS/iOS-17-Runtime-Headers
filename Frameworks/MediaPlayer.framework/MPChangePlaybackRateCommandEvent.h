
@interface MPChangePlaybackRateCommandEvent : MPRemoteCommandEvent {
    float  _playbackRate;
}

@property (nonatomic, readonly) float playbackRate;

- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
- (float)playbackRate;

@end
