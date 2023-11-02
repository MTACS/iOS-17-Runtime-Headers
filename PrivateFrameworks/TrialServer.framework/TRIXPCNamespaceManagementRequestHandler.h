
@interface TRIXPCNamespaceManagementRequestHandler : NSObject <TRIXPCNamespaceManagementServiceProtocol> {
    struct { 
        unsigned int val[8]; 
    }  _auditToken;
    TRIXPCServerContextPromise * _serverContextPromise;
}

+ (id)_deploymentsWithUnexpectedExperimentDataInContainer:(id)arg1 dynamicNamespaceName:(id)arg2 serverContext:(id)arg3;
+ (void)_immediateDownloadForNamespaceNames:(id)arg1 usingEntitlementWitness:(id)arg2 serverContext:(id)arg3 taskQueue:(id)arg4 allowExpensiveNetworking:(bool)arg5 taskAttribution:(id)arg6 completion:(id /* block */)arg7;
+ (id)_notificationKeyWithNamespace:(id)arg1 assetIndexesByTreatment:(id)arg2 assetIdsByFactorPack:(id)arg3;
+ (void)_promoteFactorPackId:(id)arg1 usingEntitlementWitness:(id)arg2 serverContext:(id)arg3 forNamespaceName:(id)arg4 rolloutDeployment:(id)arg5 completion:(id /* block */)arg6;
+ (void)_purgeMismatchedDataForDynamicNamespaceName:(id)arg1 appContainer:(id)arg2 serverContext:(id)arg3;
+ (void)_rejectFactorPackId:(id)arg1 usingEntitlementWitness:(id)arg2 serverContext:(id)arg3 forNamespaceName:(id)arg4 rolloutDeployment:(id)arg5 completion:(id /* block */)arg6;
+ (void)_removeAssetFactors:(id)arg1 usingEntitlementWitness:(id)arg2 serverContext:(id)arg3 taskQueue:(id)arg4 namespace:(id)arg5 factorsState:(id)arg6 removeImmediately:(bool)arg7 completion:(id /* block */)arg8;
+ (void)_reregisterOneShotXPCActivityWithDescriptor:(id)arg1 resumingTaskQueue:(id)arg2;
+ (void)_resumeTaskQueueForDiscretionaryCellularWithQueue:(id)arg1;
+ (void)_resumeTaskQueueForDiscretionaryWifiWithQueue:(id)arg1;
+ (void)_setProvisionalFactorPackId:(id)arg1 usingEntitlementWitness:(id)arg2 serverContext:(id)arg3 forNamespaceName:(id)arg4 completion:(id /* block */)arg5;
+ (void)_startDownloadAssetIndexesByTreatment:(id)arg1 usingEntitlementWitness:(id)arg2 serverContext:(id)arg3 taskQueue:(id)arg4 experimentIds:(id)arg5 assetIdsByFactorPack:(id)arg6 rolloutFactorNames:(id)arg7 rolloutDeployments:(id)arg8 namespace:(id)arg9 taskAttribution:(id)arg10 factorsState:(id)arg11 notificationKey:(id)arg12;
+ (void)resumeTaskQueue:(id)arg1 forNetworkOptions:(id)arg2;
+ (void)usingServerContext:(id)arg1 deregisterNamespaceWithName:(id)arg2 teamId:(id)arg3 taskQueue:(id)arg4 completion:(id /* block */)arg5;
+ (void)usingServerContext:(id)arg1 registerNamespaceWithNamespaceName:(id)arg2 compatibilityVersion:(unsigned int)arg3 defaultsFileURL:(id)arg4 teamId:(id)arg5 appContainerId:(id)arg6 appContainerType:(long long)arg7 cloudKitContainerId:(int)arg8 bundleId:(id)arg9 completion:(id /* block */)arg10;
+ (void)usingServerContext:(id)arg1 taskQueue:(id)arg2 startDownloadNamespaceWithName:(id)arg3 attribution:(id)arg4 completion:(id /* block */)arg5;

- (void).cxx_destruct;
- (id)_factorProviderChainForNamespace:(id)arg1 paths:(id)arg2;
- (void)_loadNamespaceMetadataForNamespace:(id)arg1 usingEntitlementWitness:(id)arg2 withPaths:(id)arg3 completion:(id /* block */)arg4;
- (int)_namespacePurgeabilityLevelForNamespaceName:(id)arg1 paths:(id)arg2;
- (void)_setPurgeabilityLevelsForFactors:(id)arg1 usingEntitlementWitness:(id)arg2 namespace:(id)arg3 paths:(id)arg4 completion:(id /* block */)arg5;
- (bool)_validateNamespaceName:(id)arg1 error:(id*)arg2;
- (bool)_validateSetPurgeabilityLevelRequestUsingFactorProviderChain:(id)arg1 paths:(id)arg2 purgeabilityLevelsForFactors:(id)arg3 error:(id*)arg4;
- (void)deregisterNamespaceWithNamespaceName:(id)arg1 completion:(id /* block */)arg2;
- (void)immediateDownloadForNamespaceNames:(id)arg1 allowExpensiveNetworking:(bool)arg2 completion:(id /* block */)arg3;
- (id)initWithServerContextPromise:(id)arg1 auditToken:(struct { unsigned int x1[8]; })arg2;
- (void)loadNamespaceMetadataForNamespaceName:(id)arg1 completion:(id /* block */)arg2;
- (void)promoteFactorPackId:(id)arg1 forNamespaceName:(id)arg2 rolloutDeployment:(id)arg3 completion:(id /* block */)arg4;
- (void)registerNamespaceWithNamespaceName:(id)arg1 compatibilityVersion:(unsigned int)arg2 defaultsFileURL:(id)arg3 applicationGroup:(id)arg4 cloudKitContainerId:(int)arg5 completion:(id /* block */)arg6;
- (void)rejectFactorPackId:(id)arg1 forNamespaceName:(id)arg2 rolloutDeployment:(id)arg3 completion:(id /* block */)arg4;
- (void)removeLevelsForFactors:(id)arg1 withNamespace:(id)arg2 factorsState:(id)arg3 removeImmediately:(bool)arg4 completion:(id /* block */)arg5;
- (void)runBlockWhenServerAvailable:(id /* block */)arg1;
- (void)setProvisionalFactorPackId:(id)arg1 forNamespaceName:(id)arg2 completion:(id /* block */)arg3;
- (void)setPurgeabilityLevelsForFactors:(id)arg1 forNamespaceName:(id)arg2 completion:(id /* block */)arg3;
- (void)startDownloadLevelsForFactors:(id)arg1 withNamespace:(id)arg2 factorsState:(id)arg3 options:(id)arg4 completion:(id /* block */)arg5;
- (void)startDownloadNamespaceWithName:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)statusOfDownloadForFactors:(id)arg1 withNamespace:(id)arg2 factorsState:(id)arg3 completion:(id /* block */)arg4;

@end
