
@protocol TRIPurgeableNamespacesProviding <NSObject>

@required

- (void)partitionPurgeableNamespacesForPurgeabilityLevel:(int)arg1 namespaceNamesPurgeableAtNamespaceLevel:(id*)arg2 eagerPurgeableFactorsByNamespaceName:(id*)arg3 cacheDeleteableFactorsByNamespaceName:(id*)arg4;

@end
