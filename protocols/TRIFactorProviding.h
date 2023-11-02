
@protocol TRIFactorProviding <NSObject>

@required

- (void)cacheFactorLevelsWithNamespaceName:(NSString *)arg1;
- (NSArray *)factorLevelsWithNamespace:(unsigned int)arg1;
- (NSArray *)factorLevelsWithNamespaceName:(NSString *)arg1;
- (TRILevel *)levelForFactor:(NSString *)arg1 withNamespace:(unsigned int)arg2;
- (TRILevel *)levelForFactor:(NSString *)arg1 withNamespaceName:(NSString *)arg2;

@end
