
@interface TRIPurgeableConstructs : NSObject {
    NSMutableDictionary * _cacheDeleteableFactorsByNamespaceName;
    NSMutableDictionary * _eagerPurgeableFactorsByNamespaceName;
    NSMutableSet * _namespaceNamesPurgeableAtNamespaceLevel;
}

@property (readonly) NSMutableDictionary *cacheDeleteableFactorsByNamespaceName;
@property (readonly) NSMutableDictionary *eagerPurgeableFactorsByNamespaceName;
@property (readonly) NSMutableSet *namespaceNamesPurgeableAtNamespaceLevel;

- (void).cxx_destruct;
- (id)cacheDeleteableFactorsByNamespaceName;
- (id)eagerPurgeableFactorsByNamespaceName;
- (id)initWithPurgeabilityLevel:(int)arg1 purgeableNamespacesProvider:(id)arg2 paths:(id)arg3;
- (id)namespaceNamesPurgeableAtNamespaceLevel;

@end
