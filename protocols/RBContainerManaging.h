
@protocol RBContainerManaging

@required

- (void)_probeCache:(void *)arg1 withContainerIdentifier:(void *)arg2 persona:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: const void*, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (NSString *)_retryLookupAfterCacheMissForIdentity:(RBSProcessIdentity *)arg1 context:(RBSLaunchContext *)arg2 persona:(NSString *)arg3 containerIdentifier:(NSString *)arg4;
- (NSString *)containerPathForIdentity:(RBSProcessIdentity *)arg1 context:(RBSLaunchContext *)arg2 persona:(NSString *)arg3 error:(id*)arg4;
- (bool)containerRequiredForServiceDict:(NSObject<OS_xpc_object> *)arg1;
- (NSURL *)sandboxContainerURLForExtensionContext:(RBSLaunchContext *)arg1 containerOverrideIdentifier:(NSString *)arg2;

@end
