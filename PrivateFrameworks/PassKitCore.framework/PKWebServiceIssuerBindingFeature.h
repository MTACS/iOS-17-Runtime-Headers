
@interface PKWebServiceIssuerBindingFeature : PKWebServiceRegionFeature {
    bool  _enabled;
}

@property (nonatomic, readonly) bool enabled;

- (bool)enabled;
- (id)initWithDictionary:(id)arg1 region:(id)arg2;

@end
