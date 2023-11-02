
@interface TRIClient : NSObject <TRIFactorProviding> {
    TRIDefaultFactorProvider * _defaultFactorProvider;
    TRIFactorsState * _factorsState;
    _PASLock * _lock;
    TRILogger * _logger;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    <TRIPaths> * _paths;
    int  _projectId;
    double  _staleFactorsUsageGracePeriod;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) TRILogger *logger;
@property (readonly) Class superclass;
@property (nonatomic, readonly) TRITrackingId *trackingId;

// Image: /System/Library/PrivateFrameworks/Trial.framework/Trial

+ (id)activeBMLTInformation:(id*)arg1;
+ (id)activeExperimentInformation:(id*)arg1;
+ (id)activeRolloutInformation:(id*)arg1;
+ (id)clientWithIdentifier:(int)arg1;
+ (id)clientWithIdentifier:(int)arg1 unit:(int)arg2;
+ (id)clientWithProjectId:(int)arg1 factorsState:(id)arg2;
+ (bool)isPlatformBinary;
+ (void)logSystemCovariates;
+ (id)printedBMLTInformation:(id*)arg1;
+ (id)printedExperimentInformation:(id*)arg1;
+ (id)printedNCVInformation;
+ (id)printedRolloutInformation:(id*)arg1;
+ (bool)requiresLogging;
+ (bool)requiresTrialDataVaultAccess;
+ (id)sysdiagnoseInfoWithError:(id*)arg1;

- (void).cxx_destruct;
- (long long)_appContainerType:(id)arg1;
- (id)_bmltIdentifiersWithNamespaceName:(id)arg1;
- (void)_checkEntitlements;
- (bool)_hasAppropriatePermissionsForNamespaceName:(id)arg1;
- (void)_invalidateFactors;
- (void)_lazyInit;
- (void)_logBMLTCustomTargetingWithResult:(bool)arg1;
- (id)_rampIdForRolloutDeployment:(id)arg1;
- (id)_refresh:(bool)arg1;
- (void)_registerUpdateHandlerForNamespaceName:(id)arg1 notificationCallback:(id)arg2 clientMethodNameForLogging:(const char *)arg3 callingFunctionReturnAddressForLogging:(void*)arg4;
- (void)_setupExcessiveStaleFactorsUsageTimerWithGuardedData:(id)arg1 namespace:(id)arg2 clientMethodNameForLogging:(const char *)arg3 callingFunctionReturnAddressForLogging:(void*)arg4;
- (id)addUpdateHandlerForNamespaceId:(unsigned int)arg1 queue:(id)arg2 usingBlock:(id /* block */)arg3;
- (id)addUpdateHandlerForNamespaceId:(unsigned int)arg1 usingBlock:(id /* block */)arg2;
- (id)addUpdateHandlerForNamespaceName:(id)arg1 queue:(id)arg2 usingBlock:(id /* block */)arg3;
- (id)addUpdateHandlerForNamespaceName:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)backgroundMLTaskIdentifiersWithNamespaceName:(id)arg1;
- (void)cacheFactorLevelsWithNamespaceName:(id)arg1;
- (unsigned int)compatibilityVersionWithNamespaceName:(id)arg1;
- (void)dealloc;
- (bool)deregisterNamespaceName:(id)arg1 error:(id*)arg2;
- (void)dispose;
- (void)downloadLevelsForFactors:(id)arg1 withNamespace:(id)arg2 queue:(id)arg3 options:(id)arg4 progress:(id /* block */)arg5 completion:(id /* block */)arg6;
- (void)downloadNamespaceWithName:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)downloadNamespaceWithName:(id)arg1 options:(id)arg2 progress:(id /* block */)arg3 completion:(id /* block */)arg4;
- (bool)evaluateBMLTTargetingExpression:(id)arg1 withParameters:(id)arg2 error:(id*)arg3;
- (id)experimentIdWithNamespace:(unsigned int)arg1;
- (id)experimentIdWithNamespaceName:(id)arg1;
- (id)experimentIdentifiersWithNamespaceName:(id)arg1;
- (id)factorLevelsWithNamespace:(unsigned int)arg1;
- (id)factorLevelsWithNamespaceName:(id)arg1;
- (bool)hasDownloadedNamespaceWithName:(id)arg1;
- (bool)hasRegisteredNamespaceWithName:(id)arg1;
- (bool)immediateDownloadForNamespaceNames:(id)arg1 allowExpensiveNetworking:(bool)arg2 error:(id*)arg3;
- (id)initWithClientIdentifier:(int)arg1 paths:(id)arg2 unit:(int)arg3 factorsState:(id)arg4 staleFactorsUsageGracePeriod:(double)arg5 logger:(id)arg6;
- (id)initWithClientIdentifier:(int)arg1 paths:(id)arg2 unit:(int)arg3 staleFactorsUsageGracePeriod:(double)arg4 logger:(id)arg5;
- (id)initWithNonLoggingClientIdentifier:(int)arg1 paths:(id)arg2;
- (id)levelForFactor:(id)arg1 withNamespace:(unsigned int)arg2;
- (id)levelForFactor:(id)arg1 withNamespaceName:(id)arg2;
- (id)logger;
- (id)newTrackingId;
- (id)newTrackingIdWithTreatmentRefresh:(bool)arg1;
- (bool)promoteFactorsForNamespace:(id)arg1 error:(id*)arg2;
- (id)purgeabilityLevelsForFactorsWithNamespaceName:(id)arg1;
- (void)refresh;
- (bool)registerNamespaceName:(id)arg1 compatibilityVersion:(unsigned int)arg2 defaultsFileURL:(id)arg3 applicationGroup:(id)arg4 cloudKitContainerId:(int)arg5 error:(id*)arg6;
- (void)removeDownloadStatusHandlersWithToken:(id)arg1;
- (void)removeLevelsForFactors:(id)arg1 withNamespace:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (void)removeLevelsForFactorsImmediately:(id)arg1 withNamespace:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (void)removeUpdateHandlerForToken:(id)arg1;
- (id)rolloutIdWithNamespaceName:(id)arg1;
- (id)rolloutIdentifiersWithNamespaceName:(id)arg1;
- (bool)setFactorsProvisionalForNamespace:(id)arg1 error:(id*)arg2;
- (void)setLogger:(id)arg1;
- (bool)setPurgeabilityLevelsForFactors:(id)arg1 withNamespaceName:(id)arg2;
- (id)sizesForFactors:(id)arg1 withNamespaceName:(id)arg2 forMetric:(unsigned long long)arg3 error:(id*)arg4;
- (unsigned long long)statusOfDownloadForFactors:(id)arg1 withNamespace:(id)arg2 token:(id*)arg3 queue:(id)arg4 progress:(id /* block */)arg5 completion:(id /* block */)arg6;
- (id)trackingId;
- (id)treatmentIdWithNamespace:(unsigned int)arg1;
- (id)treatmentIdWithNamespaceName:(id)arg1;
- (bool)trialIdentifiersWithNamespaceName:(id)arg1 experimentId:(id*)arg2 deploymentId:(int*)arg3 treatmentId:(id*)arg4;

// Image: /System/Library/PrivateFrameworks/MLRuntime.framework/MLRuntime

+ (id)mlr_clientWithMLRTask:(id)arg1;
+ (id)mlr_namespaceNameWithMLRTask:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer

+ (id)systemNamespaceName;

- (id)levelForSystemFactor:(id)arg1;
- (bool)shouldLogAtLevel:(long long)arg1;
- (bool)shouldLogAtLevel:(long long)arg1 withPrivacyRadar:(long long)arg2;

// Image: /System/Library/PrivateFrameworks/UnifiedAssetFramework.framework/UnifiedAssetFramework

+ (void)UAFCacheUpdate;
+ (void)_addFactorLevelsToCache:(id)arg1 namespaceName:(id)arg2 withFactorLevelsCache:(id)arg3 withLevelCache:(id)arg4;
+ (void)_addLevelToCache:(id)arg1 namespaceName:(id)arg2 factorName:(id)arg3 withCache:(id)arg4;
+ (id)_cachedLevelForFactor:(id)arg1 withNamespaceName:(id)arg2 withLanguage:(id)arg3 withCache:(id)arg4;
+ (id)_cachedLevelForFactorAnyLanguage:(id)arg1 withNamespaceName:(id)arg2 withCache:(id)arg3;
+ (id)_factoryFactorLevelsWithNamespaceName:(id)arg1 onDemandClient:(id)arg2;
+ (id)_factoryLevelForFactor:(id)arg1 withNamespaceName:(id)arg2 withLanguage:(id)arg3;
+ (id)_levelKeyForCache:(id)arg1 withFactorName:(id)arg2 withLanguage:(id)arg3;
+ (id)_queryAssetsWithNamespaceName:(id)arg1 factorName:(id)arg2 language:(id)arg3 isRoot:(bool)arg4 withError:(id*)arg5;
+ (id)_rootFactorLevelsWithNamespaceName:(id)arg1;
+ (id)_rootLevelForFactor:(id)arg1 withNamespaceName:(id)arg2 withLanguage:(id)arg3;

- (id)UAFFactorLevelsWithNamespaceName:(id)arg1;
- (id)UAFLevelForFactor:(id)arg1 withNamespaceName:(id)arg2 withLanguage:(id)arg3;
- (void)_initOnce;
- (id)_trialLevelForFactor:(id)arg1 withNamespaceName:(id)arg2 withLanguage:(id)arg3;

@end
