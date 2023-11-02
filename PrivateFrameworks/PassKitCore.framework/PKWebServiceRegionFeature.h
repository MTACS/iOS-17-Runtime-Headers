
@interface PKWebServiceRegionFeature : NSObject {
    bool  _automaticRegister;
    float  _enablementThreshold;
    long long  _featureType;
    NSString * _region;
    long long  _registrationType;
    PKOSVersionRequirementRange * _versionRange;
}

@property (nonatomic, readonly) bool automaticRegister;
@property (nonatomic, readonly) float enablementThreshold;
@property (nonatomic, readonly) long long featureType;
@property (nonatomic, readonly, copy) NSString *region;
@property (nonatomic, readonly) long long registrationType;
@property (nonatomic, readonly) PKOSVersionRequirementRange *versionRange;

+ (id)regionFeatureWithType:(long long)arg1 dictionary:(id)arg2 region:(id)arg3;

- (void).cxx_destruct;
- (bool)automaticRegister;
- (float)enablementThreshold;
- (long long)featureType;
- (id)initWithFeatureType:(long long)arg1 dictionary:(id)arg2 region:(id)arg3;
- (id)region;
- (long long)registrationType;
- (id)versionRange;

@end
