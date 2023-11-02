
@interface CRKCatalystNetworkPowerPrimitives : NSObject <CATAssertionProviding, CATNetworkPowerPrimitives>

- (id)acquireAssertion;
- (id)assertNetworkPowerOn;

@end
