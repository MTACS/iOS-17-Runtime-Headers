
@interface TRIPurgeableNamespacesProvider : NSObject <TRIPurgeableNamespacesProviding> {
    <TRIClientNamespaceMetadataStoring> * _clientNamespaceMetadataStorage;
    <TRIPaths> * _paths;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithPaths:(id)arg1 clientNamespaceMetadataStorage:(id)arg2;
- (void)partitionPurgeableNamespacesForPurgeabilityLevel:(int)arg1 namespaceNamesPurgeableAtNamespaceLevel:(id*)arg2 eagerPurgeableFactorsByNamespaceName:(id*)arg3 cacheDeleteableFactorsByNamespaceName:(id*)arg4;

@end
