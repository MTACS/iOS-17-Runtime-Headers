
@protocol MPCPlayerPlaybackRateCommand <MPCPlayerCommand>

@required

- (float)preferredPlaybackRate;
- (MPCPlayerCommandRequest *)setPlaybackRate:(float)arg1;
- (NSArray *)supportedPlaybackRates;

@end
