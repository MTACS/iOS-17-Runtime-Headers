
@interface HKPluginLoader : NSObject

+ (Class)loadPrincipalClassConformingToProtocols:(id)arg1 fromBundleAtURL:(id)arg2 skipIfLoaded:(bool)arg3;
+ (id)loadPrincipalClassesConformingToProtocols:(id)arg1 fromBundlesInDirectoryAtURL:(id)arg2 skipLoadedBundles:(bool)arg3 error:(id*)arg4;

@end
