
@interface DOCFeatureStateFFSetting : DOCFeatureState {
    NSString * _domainID;
    NSString * _featureID;
    long long  _valueMode;
}

@property (retain) NSString *domainID;
@property (retain) NSString *featureID;
@property long long valueMode;

+ (id)defaultsOverrideForDomainID:(id)arg1 featureID:(id)arg2 overrideKey:(id)arg3;

- (void).cxx_destruct;
- (id)domainID;
- (id)featureID;
- (id)initWithDomainID:(id)arg1 featureID:(id)arg2 overrideKey:(id)arg3 valueMode:(long long)arg4 requirements:(id)arg5;
- (void)setDomainID:(id)arg1;
- (void)setFeatureID:(id)arg1;
- (void)setValueMode:(long long)arg1;
- (long long)valueMode;

@end
