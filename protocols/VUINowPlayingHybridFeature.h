
@protocol VUINowPlayingHybridFeature <VUINowPlayingTimeBoundFeature, VUINowPlayingUserTriggeredFeature>

@required

- (unsigned long long)activationType;
- (void)setActivationType:(unsigned long long)arg1;

@end
