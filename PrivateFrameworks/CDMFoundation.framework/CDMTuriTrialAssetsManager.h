
@interface CDMTuriTrialAssetsManager : NSObject {
    NSDictionary * _factorToNamespace;
    NSLocale * _locale;
    NSDictionary * _namespaceToFactors;
    NSDictionary * _namespaceToTRIClientManager;
    NSArray * _namespaces;
    NSArray * _triClientManagers;
}

@property (nonatomic, readonly) NSLocale *locale;

+ (id)convertToFactorToNamespace:(id)arg1 withError:(id*)arg2;
+ (id)generateNamespaceToTRIClientManagerMapping:(id)arg1 withError:(id*)arg2;
+ (id)getSiriUnderstandingTRIClientManager;

- (void).cxx_destruct;
- (bool)areFactorsValid:(id)arg1;
- (id)filterFactors:(id)arg1 forNamespaces:(id)arg2;
- (id)generateNamespaceToFactorsMapping:(id)arg1;
- (id)getFactorNamesInNamespace:(id)arg1;
- (id)getNamespacesForFactors:(id)arg1;
- (id)getTrialAssetForFactor:(id)arg1 inNamespace:(id)arg2 forLocale:(id)arg3;
- (id)getTrialAssetsForTrialFactors:(id)arg1;
- (id)getTrialClient:(id)arg1;
- (id)initWithLocale:(id)arg1 withTRIClientManagers:(id)arg2;
- (bool)isTrialAssetValidForSystemLocale:(id)arg1;
- (id)locale;
- (bool)promoteAssetsForFactors:(id)arg1 withFailedFactors:(id)arg2;
- (bool)promoteAssetsForNamespaces:(id)arg1;
- (void)registerForFactors:(id)arg1 inNamespace:(id)arg2 withAssetsDelegate:(id)arg3;
- (bool)registerForFactors:(id)arg1 withAssetsDelegate:(id)arg2;
- (bool)setAssetsProvisionalForFactors:(id)arg1;
- (bool)setAssetsProvisionalForNamespaces:(id)arg1;
- (void)setupWithError:(id*)arg1;

@end
