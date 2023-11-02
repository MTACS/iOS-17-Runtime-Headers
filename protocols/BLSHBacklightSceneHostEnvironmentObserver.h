
@protocol BLSHBacklightSceneHostEnvironmentObserver <NSObject>

@optional

- (void)hostEnvironment:(id <BLSHBacklightSceneHostEnvironment>)arg1 clientDidUpdateEnabled:(bool)arg2;
- (void)hostEnvironment:(id <BLSHBacklightSceneHostEnvironment>)arg1 clientDidUpdateSupportsAlwaysOn:(bool)arg2;
- (void)hostEnvironment:(id <BLSHBacklightSceneHostEnvironment>)arg1 hostDidSetAlwaysOnEnabledForEnvironment:(bool)arg2;
- (void)hostEnvironment:(id <BLSHBacklightSceneHostEnvironment>)arg1 hostDidSetLiveUpdating:(bool)arg2;
- (void)hostEnvironment:(id <BLSHBacklightSceneHostEnvironment>)arg1 hostDidSetUnrestrictedFramerateUpdates:(bool)arg2;
- (void)hostEnvironment:(id <BLSHBacklightSceneHostEnvironment>)arg1 invalidateContentForReason:(NSString *)arg2;

@end
