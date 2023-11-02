
@interface HMDCompositeSettingMetadata : HMFObject {
    <HMDCompositeSettingConstraint> * _constraint;
    NSString * _keyPath;
    HMDCompositeSettingPrivileges * _privileges;
}

@property (readonly) <HMDCompositeSettingConstraint> *constraint;
@property (readonly, copy) NSString *keyPath;
@property (readonly) HMDCompositeSettingPrivileges *privileges;

- (void).cxx_destruct;
- (id)constraint;
- (id)initWithKeyPath:(id)arg1 constraint:(id)arg2 privileges:(id)arg3;
- (id)keyPath;
- (id)privileges;

@end
