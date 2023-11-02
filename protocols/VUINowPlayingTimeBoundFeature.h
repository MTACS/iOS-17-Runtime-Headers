
@protocol VUINowPlayingTimeBoundFeature <VUINowPlayingFeature>

@required

- (double)duration;
- (bool)isSkippable;
- (void)setSkippable:(bool)arg1;
- (void)setStartTime:(double)arg1;
- (double)startTime;

@end
