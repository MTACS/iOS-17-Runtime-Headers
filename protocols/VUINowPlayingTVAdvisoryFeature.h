
@protocol VUINowPlayingTVAdvisoryFeature <VUINowPlayingTimeBoundFeature>

@required

- (NSArray *)advisoryDisabledTimeRanges;
- (void)setAdvisoryDisabledTimeRanges:(NSArray *)arg1;

@end
