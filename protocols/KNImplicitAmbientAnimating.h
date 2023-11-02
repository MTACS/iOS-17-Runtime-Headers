
@protocol KNImplicitAmbientAnimating <NSObject>

@required

- (bool)canAddImplicitAmbientAnimations;
- (NSString *)implicitAmbientAnimationEffectIdentifier;
- (KNBuildRenderer<KNAmbientBuildRenderer> *)newImplicitAmbientBuildRendererWithAnimatedBuild:(KNAnimatedBuild *)arg1 buildChunk:(KNBuildChunk *)arg2 session:(KNPlaybackSession *)arg3 animatedSlideView:(KNAnimatedSlideView *)arg4;
- (bool)shouldRemoveImplicitAmbientAnimationsAtEndOfNoneTransition;
- (bool)supportsImplicitAmbientAnimationsAfterStartingActionBuilds;

@end
