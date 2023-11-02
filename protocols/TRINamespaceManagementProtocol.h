
@protocol TRINamespaceManagementProtocol

@required

- (NSArray *)activeRolloutInformation:(id*)arg1;
- (bool)deregisterNamespaceWithNamespaceName:(NSString *)arg1 error:(id*)arg2;
- (void)downloadLevelsForFactors:(void *)arg1 withNamespace:(void *)arg2 queue:(void *)arg3 factorsState:(void *)arg4 options:(void *)arg5 progress:(void *)arg6 completion:(void *)arg7; // needs 7 arg types, found 18: NSArray *, NSString *, NSObject<OS_dispatch_queue> *, TRIFactorsState *, TRIDownloadOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*, id /* block */, void*, void, id /* block */, bool, NSError *, void*
- (bool)immediateDownloadForNamespaceNames:(NSSet *)arg1 allowExpensiveNetworking:(bool)arg2 error:(id*)arg3;
- (TRIClientNamespaceMetadata *)loadNamespaceMetadataForNamespaceName:(NSString *)arg1 error:(id*)arg2;
- (bool)logSystemCovariatesWithError:(id*)arg1;
- (bool)promoteFactorPackId:(NSString<TRIFactorPackId> *)arg1 forNamespaceName:(NSString *)arg2 rolloutDeployment:(TRIRolloutDeployment *)arg3 error:(id*)arg4;
- (bool)registerNamespaceWithNamespaceName:(NSString *)arg1 compatibilityVersion:(unsigned int)arg2 defaultsFileURL:(NSURL *)arg3 applicationGroup:(NSString *)arg4 cloudKitContainerId:(int)arg5 error:(id*)arg6;
- (bool)rejectFactorPackId:(NSString<TRIFactorPackId> *)arg1 forNamespaceName:(NSString *)arg2 rolloutDeployment:(TRIRolloutDeployment *)arg3 error:(id*)arg4;
- (bool)removeLevelsForFactors:(NSArray *)arg1 withNamespace:(NSString *)arg2 factorsState:(TRIFactorsState *)arg3 removeImmediately:(bool)arg4 error:(id*)arg5;
- (bool)setProvisionalFactorPackId:(NSString<TRIFactorPackId> *)arg1 forNamespaceName:(NSString *)arg2 error:(id*)arg3;
- (bool)setPurgeabilityLevelsForFactors:(NSDictionary *)arg1 forNamespaceName:(NSString *)arg2 error:(id*)arg3;
- (bool)startNamespaceDownloadWithName:(NSString *)arg1 options:(TRIDownloadOptions *)arg2 error:(id*)arg3;
- (unsigned long long)statusOfDownloadForFactors:(NSArray *)arg1 withNamespace:(NSString *)arg2 factorsState:(TRIFactorsState *)arg3 notificationKey:(id*)arg4 error:(id*)arg5;

@end
