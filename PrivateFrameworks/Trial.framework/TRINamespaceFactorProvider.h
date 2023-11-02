
@interface TRINamespaceFactorProvider : NSObject <TRINamespaceFactorProviding> {
    TRIReferenceManagedDirReaderLock * _factorDirectoryLock;
    NSCache * _factorLevelCache;
    <TRIFactorLevelCaching> * _factorLevels;
    TRIFBFastFactorLevels * _fastFactorLevels;
    bool  _isFBFilePresent;
    bool  _isFBReadEnabled;
    bool  _isFBWriteEnabled;
    unsigned int  _namespaceCompatibilityVersion;
    NSString * _namespaceName;
    <TRIPaths> * _paths;
    NSString * _referencePath;
    NSString * _treatmentId;
    NSMutableDictionary * _warmupPersistentFactorLevelCache;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int namespaceCompatibilityVersion;
@property (nonatomic, readonly) NSString *namespaceName;
@property (readonly) Class superclass;

+ (id)_assetFilenameForFactor:(id)arg1;
+ (id)_maAutoAssetReferencedInDir:(id)arg1 byFactorName:(id)arg2;
+ (id)factorLevelsWithTreatmentData:(id)arg1 referencePath:(id)arg2 filteredByNamespaceName:(id)arg3 outTreatmentId:(id*)arg4 error:(id*)arg5;
+ (id)factorProviderWithNamespaceDescriptor:(id)arg1 paths:(id)arg2 faultOnMissingFactors:(bool)arg3 shouldLockFactorDirectory:(bool)arg4;
+ (id)factorProviderWithNamespaceName:(id)arg1 paths:(id)arg2 treatmentLayer:(unsigned long long)arg3 faultOnMissingFactors:(bool)arg4 shouldLockFactorDirectory:(bool)arg5;
+ (id)pathForFactor:(id)arg1 directory:(id)arg2;
+ (id)populateMAPathsForFactorLevels:(id)arg1 loadedFromParentDir:(id)arg2;

- (void).cxx_destruct;
- (id)_copyAssetsToDirectory:(id)arg1;
- (id)_readAllFactorLevelsFromStorage;
- (void)cacheFactorLevels;
- (int)deploymentId;
- (void)dispose;
- (id)experimentId;
- (id)factorLevels;
- (id)initWithNamespaceName:(id)arg1 namespaceCompatibilityVersion:(unsigned int)arg2 paths:(id)arg3 referencePath:(id)arg4 factorLevels:(id)arg5 fastFactorLevels:(id)arg6 treatmentId:(id)arg7 factorDirectoryLock:(id)arg8;
- (id)initWithNamespaceName:(id)arg1 treatmentData:(id)arg2 namespaceCompatibilityVersion:(unsigned int)arg3 paths:(id)arg4 referencePath:(id)arg5 isFlatbufferStorage:(bool)arg6 factorDirectoryLock:(id)arg7 error:(id*)arg8;
- (id)levelForFactor:(id)arg1;
- (unsigned int)namespaceCompatibilityVersion;
- (unsigned int)namespaceId;
- (id)namespaceName;
- (id)overlayLevelsFromFactorProvider:(id)arg1;
- (bool)overwriteItemAtPath:(id)arg1 withItemAtPath:(id)arg2 error:(id*)arg3;
- (id)rolloutId;
- (bool)saveToPath:(id)arg1 copyAssets:(bool)arg2;
- (void)setCacheSizeForFlatbuffers:(int)arg1;
- (id)treatmentId;

@end
