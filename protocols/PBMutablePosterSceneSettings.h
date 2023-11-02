
@protocol PBMutablePosterSceneSettings <PBPosterSceneSettings>

@required

- (long long)pb_activeVariant;
- (bool)pb_animationSuspended;
- (void)pb_setActiveVariant:(long long)arg1;
- (void)pb_setAnimationSuspended:(bool)arg1;
- (void)pb_setSignificantEventsCounter:(unsigned long long)arg1;
- (unsigned long long)pb_significantEventsCounter;

@end
