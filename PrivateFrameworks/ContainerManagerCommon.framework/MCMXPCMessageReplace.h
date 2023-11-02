
@interface MCMXPCMessageReplace : MCMXPCMessageBase <MCMParametersReplace> {
    MCMConcreteContainerIdentity * _containerIdentityNew;
    MCMConcreteContainerIdentity * _containerIdentityOld;
}

@property (nonatomic, readonly) MCMConcreteContainerIdentity *containerIdentityNew;
@property (nonatomic, readonly) MCMConcreteContainerIdentity *containerIdentityOld;

- (void).cxx_destruct;
- (id)containerIdentityNew;
- (id)containerIdentityOld;
- (unsigned int)disposition;
- (id)initWithXPCObject:(id)arg1 context:(id)arg2 error:(unsigned long long*)arg3;

@end
