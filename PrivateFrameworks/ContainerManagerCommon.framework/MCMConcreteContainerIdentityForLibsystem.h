
@interface MCMConcreteContainerIdentityForLibsystem : MCMConcreteContainerIdentity {
    NSString * _containerPathIdentifier;
    bool  _existed;
}

@property (nonatomic, readonly) NSString *containerPathIdentifier;
@property (nonatomic, readonly) bool existed;

+ (id)containerIdentityWithUUID:(id)arg1 userIdentity:(id)arg2 identifier:(id)arg3 containerClass:(unsigned long long)arg4 platform:(unsigned int)arg5 containerPathIdentifier:(id)arg6 existed:(bool)arg7 transient:(bool)arg8 error:(unsigned long long*)arg9;

- (void).cxx_destruct;
- (id)containerPathIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct container_object_s { }*)createLibsystemContainerWithError:(unsigned long long*)arg1;
- (id)debugDescription;
- (id)description;
- (bool)existed;
- (id)identityByChangingContainerPathIdentifier:(id)arg1;
- (id)identityByChangingTransient:(bool)arg1;
- (id)identityByChangingUUID:(id)arg1;
- (id)init;
- (id)initWithLibsystemContainer:(struct container_object_s { }*)arg1 defaultUserIdentity:(id)arg2 userIdentityCache:(id)arg3 error:(unsigned long long*)arg4;
- (id)initWithUUID:(id)arg1 userIdentity:(id)arg2 identifier:(id)arg3 containerClass:(unsigned long long)arg4 platform:(unsigned int)arg5 containerPathIdentifier:(id)arg6 existed:(bool)arg7 transient:(bool)arg8 error:(unsigned long long*)arg9;
- (id)nontransientConcreteContainerIdentityForLibsystem;
- (id)nontransientContainerIdentity;
- (id)transientConcreteContainerIdentityForLibsystem;
- (id)transientContainerIdentity;

@end
