
@interface MCMConcreteContainerIdentity : MCMContainerIdentity {
    NSUUID * _uuid;
}

@property (nonatomic, readonly) NSUUID *uuid;

+ (id)concreteContainerIdentityFromPlist:(id)arg1 userIdentityCache:(id)arg2 error:(unsigned long long*)arg3;
+ (id)containerIdentityWithUUID:(id)arg1 userIdentity:(id)arg2 identifier:(id)arg3 containerClass:(unsigned long long)arg4 platform:(unsigned int)arg5 error:(unsigned long long*)arg6;
+ (id)containerIdentityWithUUID:(id)arg1 userIdentity:(id)arg2 identifier:(id)arg3 containerClass:(unsigned long long)arg4 platform:(unsigned int)arg5 transient:(bool)arg6 error:(unsigned long long*)arg7;

- (void).cxx_destruct;
- (id)containerIdentity;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct container_object_s { }*)createLibsystemContainerWithContainerPathIdentifier:(id)arg1 existed:(bool)arg2 error:(unsigned long long*)arg3;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithContainerIdentity:(id)arg1 UUID:(id)arg2 error:(unsigned long long*)arg3;
- (id)initWithLibsystemContainer:(struct container_object_s { }*)arg1 defaultUserIdentity:(id)arg2 userIdentityCache:(id)arg3 error:(unsigned long long*)arg4;
- (id)initWithPlist:(id)arg1 userIdentityCache:(id)arg2 error:(unsigned long long*)arg3;
- (id)initWithUUID:(id)arg1 userIdentity:(id)arg2 identifier:(id)arg3 containerClass:(unsigned long long)arg4 platform:(unsigned int)arg5 transient:(bool)arg6 error:(unsigned long long*)arg7;
- (id)initWithVersion1PlistDictionary:(id)arg1 containerIdentity:(id)arg2 error:(unsigned long long*)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToConcreteContainerIdentity:(id)arg1;
- (id)plist;
- (id)uuid;

@end
