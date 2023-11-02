
@interface DRSCKConfig : NSObject {
    unsigned char  _containerEnvironment;
    bool  _overridesDefault;
    unsigned char  _rapidEnvironment;
}

@property (nonatomic, readonly) long long ckContainerEnvironment;
@property (nonatomic, readonly) long long ckRapidEnvironment;
@property (nonatomic, readonly) unsigned char containerEnvironment;
@property (nonatomic, readonly) bool overridesDefault;
@property (nonatomic, readonly) unsigned char rapidEnvironment;

+ (id)_configWithConfigMO_ON_MOC_QUEUE:(id)arg1;
+ (id)defaultConfig;

- (long long)ckContainerEnvironment;
- (long long)ckRapidEnvironment;
- (unsigned char)containerEnvironment;
- (id)debugDescription;
- (id)description;
- (id)init;
- (id)initWithContainerEnvironment:(unsigned char)arg1 rapidEnvironment:(unsigned char)arg2 overridesDefault:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (id)newConfigMOInContext_ON_MOC_QUEUE:(id)arg1;
- (bool)overridesDefault;
- (unsigned char)rapidEnvironment;

@end
