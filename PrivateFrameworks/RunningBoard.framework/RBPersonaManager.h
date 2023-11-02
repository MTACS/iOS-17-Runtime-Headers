
@interface RBPersonaManager : NSObject <RBPersonaManaging> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned int  _personalPersonaUID;
    NSString * _personalPersonaUniqueString;
    bool  _personasSupported;
}

- (void).cxx_destruct;
- (id)init;
- (bool)isConcretePersona:(id)arg1;
- (bool)personaForIdentity:(id)arg1 context:(id)arg2 personaUID:(out unsigned int*)arg3 personaUniqueString:(out id*)arg4;
- (bool)personaRequiredForExtensionContext:(id)arg1 serviceDict:(id)arg2;
- (id)personalPersonaUniqueString;
- (bool)personasAreSupported;

@end
