
@protocol BLSBacklightSceneSettings <NSObject>

@required

- (bool)bls_hasUnrestrictedFramerateUpdates;
- (bool)bls_isAlwaysOnEnabledForEnvironment;
- (bool)bls_isBlanked;
- (bool)bls_isDelegateActive;
- (bool)bls_isLiveUpdating;
- (NSDate *)bls_presentationDate;
- (unsigned long long)bls_renderSeed;
- (BLSBacklightSceneVisualState *)bls_visualState;

@end
