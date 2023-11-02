
@protocol TRINamespaceFactorProviding <NSObject>

@required

- (void)cacheFactorLevels;
- (int)deploymentId;
- (void)dispose;
- (NSString *)experimentId;
- (NSArray *)factorLevels;
- (TRILevel *)levelForFactor:(NSString *)arg1;
- (unsigned int)namespaceCompatibilityVersion;
- (unsigned int)namespaceId;
- (NSString *)namespaceName;
- (NSString *)rolloutId;
- (NSString *)treatmentId;

@end
