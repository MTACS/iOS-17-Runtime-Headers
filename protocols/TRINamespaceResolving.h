
@protocol TRINamespaceResolving <NSObject>

@required

+ (NSString *)preferredPathForFactorDataWithCandidatePaths:(NSArray *)arg1;

- (void)dispose;
- (NSArray *)resolveFactorProviderChainForNamespaceName:(NSString *)arg1 faultOnMissingInstalledFactors:(bool)arg2 installedFactorsAccessible:(bool*)arg3;

@end
