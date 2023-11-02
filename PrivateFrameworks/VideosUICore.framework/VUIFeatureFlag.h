
@interface VUIFeatureFlag : NSObject {
    NSString * _defaultsDomain;
    NSString * _defaultsKey;
    bool  _enabled;
    NSString * _featureDescription;
    NSString * _featureName;
    bool  _isAvailableForOS;
    bool  _isEnabledByDefault;
    NSString * _isEnabledByDefaultKey;
}

@property (nonatomic, readonly) NSString *defaultsDomain;
@property (nonatomic, readonly) NSString *defaultsKey;
@property (nonatomic) bool enabled;
@property (nonatomic, readonly) NSString *featureDescription;
@property (nonatomic, readonly) NSString *featureName;
@property (nonatomic, readonly) bool isAvailableForOS;
@property (nonatomic, readonly) bool isEnabledByDefault;
@property (nonatomic, retain) NSString *isEnabledByDefaultKey;

- (void).cxx_destruct;
- (bool)_enabledFromDefaults;
- (id)defaultsDomain;
- (id)defaultsKey;
- (bool)enabled;
- (id)featureDescription;
- (id)featureName;
- (id)initWithFeatureDict:(id)arg1;
- (bool)isAvailableForOS;
- (bool)isEnabledByDefault;
- (id)isEnabledByDefaultKey;
- (void)setEnabled:(bool)arg1;
- (void)setIsEnabledByDefaultKey:(id)arg1;

@end
