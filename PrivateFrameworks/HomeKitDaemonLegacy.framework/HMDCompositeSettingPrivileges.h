
@interface HMDCompositeSettingPrivileges : HMFObject {
    unsigned long long  _minReadUserPrivilege;
}

@property (readonly) unsigned long long minReadUserPrivilege;

- (id)initWithMinReadUserPrivilege:(unsigned long long)arg1;
- (unsigned long long)minReadUserPrivilege;

@end
