
@protocol VUINowPlayingFeatureMonitorDelegate <NSObject>

@optional

- (void)featureMonitor:(VUINowPlayingFeatureMonitor *)arg1 activeFeatureDidChangeFrom:(id <VUINowPlayingFeature>)arg2 toFeature:(id <VUINowPlayingFeature>)arg3 animated:(bool)arg4;
- (void)featureMonitor:(VUINowPlayingFeatureMonitor *)arg1 featureDidChangeState:(id <VUINowPlayingFeature>)arg2 animated:(bool)arg3;

@end
