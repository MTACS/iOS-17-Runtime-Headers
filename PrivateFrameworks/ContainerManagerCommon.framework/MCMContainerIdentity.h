
@interface MCMContainerIdentity : MCMContainerIdentityMinimal {
    bool  _transient;
}

@property (nonatomic, readonly) bool transient;

+ (id)containerIdentityFromPlist:(id)arg1 userIdentityCache:(id)arg2 error:(unsigned long long*)arg3;
+ (id)containerIdentityWithIdentifier:(id)arg1 containerClass:(unsigned long long)arg2 platform:(unsigned int)arg3 error:(unsigned long long*)arg4;
+ (id)containerIdentityWithMinimalContainerIdentity:(id)arg1 transient:(bool)arg2;
+ (id)containerIdentityWithUserIdentity:(id)arg1 identifier:(id)arg2 containerClass:(unsigned long long)arg3 platform:(unsigned int)arg4 error:(unsigned long long*)arg5;
+ (id)containerIdentityWithUserIdentity:(id)arg1 identifier:(id)arg2 containerClass:(unsigned long long)arg3 platform:(unsigned int)arg4 transient:(bool)arg5 error:(unsigned long long*)arg6;

- (id)containerIdentity;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)identityByChangingTransient:(bool)arg1;
- (id)identityByChangingUserIdentity:(id)arg1;
- (id)init;
- (id)initWithLibsystemContainer:(struct container_object_s { }*)arg1 defaultUserIdentity:(id)arg2 userIdentityCache:(id)arg3 error:(unsigned long long*)arg4;
- (id)initWithUserIdentity:(id)arg1 identifier:(id)arg2 containerClass:(unsigned long long)arg3 platform:(unsigned int)arg4 transient:(bool)arg5 error:(unsigned long long*)arg6;
- (id)initWithVersion1PlistDictionary:(id)arg1 userIdentityCache:(id)arg2 error:(unsigned long long*)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToContainerIdentity:(id)arg1;
- (id)nontransientContainerIdentity;
- (id)plist;
- (bool)transient;
- (id)transientContainerIdentity;

@end
