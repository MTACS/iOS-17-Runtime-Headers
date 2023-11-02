
@interface AMSFeatureFlagITFE : NSObject {
    bool  _enabled;
    bool  _readonly;
    NSString * _value;
}

@property (getter=isEnabled, nonatomic) bool enabled;
@property (getter=isReadonly, nonatomic) bool readonly;
@property (nonatomic, copy) NSString *value;

+ (id)_concreteITFEs;
+ (id)_customITFEs;
+ (id)_flagGroupITFEs;
+ (bool)_isITFEValueCustom:(id)arg1;
+ (id)_mutableITFEs;
+ (id)_profileITFEs;
+ (id)_remoteGroupITFEs;
+ (id)fetchCustomFeatures;
+ (id)fetchMutableFeatures;
+ (id)fetchProfileFeatures;
+ (void)removeOrphanITFEValues:(id)arg1;
+ (void)resetFeatures;
+ (void)setMutableFeatureName:(id)arg1 toValue:(id)arg2;
+ (void)verifyOrphans;
+ (void)verifyOrphansForGroups:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithValue:(id)arg1 isEnabled:(bool)arg2 isMutable:(bool)arg3;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isReadonly;
- (void)setEnabled:(bool)arg1;
- (void)setReadonly:(bool)arg1;
- (void)setValue:(id)arg1;
- (void)toggle:(bool)arg1;
- (id)value;

@end
