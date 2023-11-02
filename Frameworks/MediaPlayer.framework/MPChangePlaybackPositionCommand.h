
@interface MPChangePlaybackPositionCommand : MPRemoteCommand {
    bool  _canBeControlledByScrubbing;
}

@property (nonatomic) bool canBeControlledByScrubbing;

- (id)_mediaRemoteCommandInfoOptions;
- (bool)canBeControlledByScrubbing;
- (id)initWithMediaRemoteCommandType:(unsigned int)arg1;
- (id)newCommandEventWithPositionTime:(double)arg1;
- (void)setCanBeControlledByScrubbing:(bool)arg1;

@end
