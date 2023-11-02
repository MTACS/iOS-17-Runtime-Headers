
@protocol BLSBacklightSceneEnvironment <NSObject>

@required

- (BLSAlwaysOnSession *)alwaysOnSession;
- (<BLSBacklightSceneEnvironmentDelegate> *)delegate;
- (BLSAlwaysOnFrameSpecifier *)frameSpecifier;
- (bool)hasUnrestrictedFramerateUpdates;
- (NSString *)identifier;
- (void)invalidateAllTimelinesForReason:(NSString *)arg1;
- (bool)isAnimatingVisualState;
- (bool)isDelegateActive;
- (bool)isDisplayBlanked;
- (bool)isLiveUpdating;
- (void)setDelegate:(id <BLSBacklightSceneEnvironmentDelegate>)arg1;
- (void)setSupportsAlwaysOn:(bool)arg1;
- (bool)supportsAlwaysOn;
- (BLSBacklightSceneVisualState *)visualState;

@end
