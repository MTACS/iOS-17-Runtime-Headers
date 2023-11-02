
@protocol BLSHBacklightSceneHostEnvironment_Private <BLSHBacklightSceneHostEnvironment>

@required

- (void)updateToVisualState:(BLSBacklightSceneVisualState *)arg1 presentationDateSpecifier:(BLSAlwaysOnDateSpecifier *)arg2;
- (bool)wantsStateUpdateToActiveAfterRemovalFromPresentation;

@end
