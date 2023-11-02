
@protocol RBPersonaManaging

@required

- (bool)isConcretePersona:(NSString *)arg1;
- (bool)personaForIdentity:(RBSProcessIdentity *)arg1 context:(RBSLaunchContext *)arg2 personaUID:(out unsigned int*)arg3 personaUniqueString:(out id*)arg4;
- (bool)personaRequiredForExtensionContext:(RBSLaunchContext *)arg1 serviceDict:(NSObject<OS_xpc_object> *)arg2;
- (NSString *)personalPersonaUniqueString;
- (bool)personasAreSupported;

@end
