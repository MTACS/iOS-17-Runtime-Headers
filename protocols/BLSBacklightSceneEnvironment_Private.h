
@protocol BLSBacklightSceneEnvironment_Private <BLSBacklightSceneEnvironment>

@required

- (BLSAlwaysOnSession *)alwaysOnSession;
- (bool)isAnimatingVisualState;
- (NSDate *)presentationDate;
- (void)setAlwaysOnSession:(BLSAlwaysOnSession *)arg1;
- (void)setAnimatingVisualState:(bool)arg1;
- (void)setUpdater:(id <BLSBacklightSceneEnvironmentUpdating>)arg1;
- (<BLSBacklightSceneEnvironmentUpdating> *)updater;

@end
