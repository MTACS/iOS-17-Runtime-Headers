
@interface SUUIMediaQueryNetworkTypeFeature : SUUIMediaQueryFeature {
    NSString * _value;
}

+ (bool)supportsFeatureName:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (bool)evaluateWithValues:(id)arg1;
- (id)initWithFeatureName:(id)arg1 value:(id)arg2;
- (id)notificationNames;
- (id)requiredKeys;

@end
