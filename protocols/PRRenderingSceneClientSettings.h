
@protocol PRRenderingSceneClientSettings <PRSceneClientSettings>

@required

- (BSColor *)pr_averageColor;
- (struct CGSize { double x1; double x2; })pr_contentSize;
- (PRPosterLegibilitySettings *)pr_desiredLegibilitySettings;
- (bool)pr_handlesWakeAnimation;
- (bool)pr_hideChrome;
- (bool)pr_hideDimmingLayer;
- (bool)pr_inExtendedRenderSession;
- (unsigned long long)pr_significantEventOptions;
- (unsigned long long)pr_significantEventTime;
- (bool)pr_userTapEventsRequested;

@end
