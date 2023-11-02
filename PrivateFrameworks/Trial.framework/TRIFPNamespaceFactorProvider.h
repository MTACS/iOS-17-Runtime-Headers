
@interface TRIFPNamespaceFactorProvider : NSObject <TRINamespaceFactorProviding> {
    int  _deploymentId;
    TRIReferenceManagedDirReaderLock * _dirLock;
    NSCache * _factorLevelCache;
    <TRIFactorLevelCaching> * _factorLevels;
    NSString<TRIFactorPackId> * _factorPackId;
    TRIFBFastFactorLevels * _fastFactorLevels;
    NSString * _fbFactorPath;
    bool  _isFlatbufferReadEnabled;
    bool  _isFlatbufferWriteEnabled;
    NSString * _lockingClientIdentifier;
    NSSet * _namespaceCompatibilityVersions;
    NSString * _namespaceName;
    NSString * _parentId;
    NSString * _pbFactorPath;
    bool  _promotable;
    NSString * _referencePath;
    NSMutableDictionary * _warmupPersistentFactorLevelCache;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool promotable;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_factorLevelsWithFactorPackData:(id)arg1 referencePath:(id)arg2 outFactorPackId:(id*)arg3 outNamespaceName:(id*)arg4 outNCVs:(id*)arg5;
- (id)_readAllFactorLevelsFromStorage;
- (void)cacheFactorLevels;
- (void)dealloc;
- (int)deploymentId;
- (void)dispose;
- (id)experimentId;
- (id)factorLevels;
- (id)init;
- (id)initWithParentId:(id)arg1 deploymentId:(int)arg2 promotable:(bool)arg3;
- (id)initWithPath:(id)arg1 parentId:(id)arg2 deploymentId:(int)arg3 promotable:(bool)arg4;
- (id)levelForFactor:(id)arg1;
- (unsigned int)namespaceCompatibilityVersion;
- (unsigned int)namespaceId;
- (id)namespaceName;
- (bool)promotable;
- (id)rolloutId;
- (void)setCacheSizeForFlatbuffers:(int)arg1;
- (id)treatmentId;

@end
