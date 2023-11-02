
@interface TRIXPCNamespaceManagementClient : NSObject <TRINamespaceManagementProtocol> {
    _PASXPCClientHelper * _helper;
    _PASXPCClientHelper * _internalHelper;
    _PASXPCClientHelper * _internalSystemHelper;
}

- (void).cxx_destruct;
- (id)activeRolloutInformation:(id*)arg1;
- (bool)deregisterNamespaceWithNamespaceName:(id)arg1 error:(id*)arg2;
- (void)downloadLevelsForFactors:(id)arg1 withNamespace:(id)arg2 queue:(id)arg3 factorsState:(id)arg4 options:(id)arg5 progress:(id /* block */)arg6 completion:(id /* block */)arg7;
- (bool)immediateDownloadForNamespaceNames:(id)arg1 allowExpensiveNetworking:(bool)arg2 error:(id*)arg3;
- (id)init;
- (id)loadNamespaceMetadataForNamespaceName:(id)arg1 error:(id*)arg2;
- (bool)logSystemCovariatesWithError:(id*)arg1;
- (bool)promoteFactorPackId:(id)arg1 forNamespaceName:(id)arg2 rolloutDeployment:(id)arg3 error:(id*)arg4;
- (bool)registerNamespaceWithNamespaceName:(id)arg1 compatibilityVersion:(unsigned int)arg2 defaultsFileURL:(id)arg3 applicationGroup:(id)arg4 cloudKitContainerId:(int)arg5 error:(id*)arg6;
- (bool)rejectFactorPackId:(id)arg1 forNamespaceName:(id)arg2 rolloutDeployment:(id)arg3 error:(id*)arg4;
- (bool)removeLevelsForFactors:(id)arg1 withNamespace:(id)arg2 factorsState:(id)arg3 removeImmediately:(bool)arg4 error:(id*)arg5;
- (bool)setProvisionalFactorPackId:(id)arg1 forNamespaceName:(id)arg2 error:(id*)arg3;
- (bool)setPurgeabilityLevelsForFactors:(id)arg1 forNamespaceName:(id)arg2 error:(id*)arg3;
- (bool)startNamespaceDownloadWithName:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (unsigned long long)statusOfDownloadForFactors:(id)arg1 withNamespace:(id)arg2 factorsState:(id)arg3 notificationKey:(id*)arg4 error:(id*)arg5;

@end
