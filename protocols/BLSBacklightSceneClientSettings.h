
@protocol BLSBacklightSceneClientSettings <NSObject>

@required

- (bool)bls_hasDelegate;
- (bool)bls_optsOutOfProcessAssertions;
- (bool)bls_supportsAlwaysOn;

@end
