
@interface CATNetworkPowerPrimitivesBackedAssertionProvider : NSObject <CATAssertionProviding> {
    <CATNetworkPowerPrimitives> * _networkPowerPrimitives;
}

@property (nonatomic, readonly) <CATNetworkPowerPrimitives> *networkPowerPrimitives;

- (void).cxx_destruct;
- (id)acquireAssertion;
- (id)initWithNetworkPowerPrimitives:(id)arg1;
- (id)networkPowerPrimitives;

@end
