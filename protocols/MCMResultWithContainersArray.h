
@protocol MCMResultWithContainersArray <MCMResult>

@required

- (id)initWithContainerPaths:(NSArray *)arg1 containerIdentities:(NSArray *)arg2 includePath:(bool)arg3 clientIdentity:(MCMClientIdentity *)arg4 skipSandboxExtensions:(bool)arg5;
- (id)initWithContainers:(NSArray *)arg1 includePath:(bool)arg2 includeInfo:(bool)arg3 includeUserManagedAssetsRelPath:(bool)arg4 clientIdentity:(MCMClientIdentity *)arg5 skipSandboxExtensions:(bool)arg6;

@end
