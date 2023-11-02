
@interface CDMUAFAssetsManager : NSObject {
    NSDictionary * _assetSetNameToFactors;
    NSMutableDictionary * _assetSetNameToObserver;
    NSDictionary * _assetSetNameToUafClientManager;
    NSDictionary * _factorToAssetSetName;
    NSString * _locale;
    NSArray * _uafClientManagers;
}

@property (nonatomic, readonly) NSString *locale;

+ (id)getAssistantUsages:(id)arg1;
+ (id)getFactorsForClientManager:(id)arg1;
+ (id)getNLAssetFromUAFAsset:(id)arg1 withFactor:(id)arg2 withAssetSetName:(id)arg3;
+ (id)getNLAssetFromUAFAssetPostValidation:(id)arg1 asset:(id)arg2 locale:(id)arg3 assetSetName:(id)arg4;
+ (id)getNLUAFClientManagers;
+ (id)getSsuUsages:(id)arg1;
+ (id)getUAFClientManagersForLocale:(id)arg1 withGraphName:(id)arg2;
+ (void)reInitCDMUAFAssetsCache;
+ (void)setAssetsAvailabilityForFactors:(id)arg1 withAssetSet:(id)arg2 forAssetSetName:(id)arg3 withDelegateHandler:(id)arg4 withFactorAndFolders:(id)arg5 useFileManager:(id)arg6;
+ (void)subscribeToSsuAssetsForLocale:(id)arg1;
+ (bool)validateFactors:(id)arg1 inAssetSet:(id)arg2 forLocale:(id)arg3 withAssetSetName:(id)arg4;

- (void).cxx_destruct;
- (bool)areFactorsValid:(id)arg1;
- (id)filterFactors:(id)arg1;
- (id)getAssetSetNameToUafClientManagerWithError:(id*)arg1;
- (id)getAssetSetNamesForFactorNames:(id)arg1;
- (id)getUAFAssetsForFactors:(id)arg1;
- (id)getUafClientManagerForAssetSetName:(id)arg1;
- (id)initWithLocale:(id)arg1 withGraphName:(id)arg2;
- (id)locale;
- (id)populateAssetSetNameToFactorsForAssetSetNameToUafClientManager:(id)arg1 withError:(id*)arg2;
- (id)populateFactorToAssetSetNameForAssetSetNameToFactors:(id)arg1 withError:(id*)arg2;
- (bool)promoteAssetsForAssetSetNames:(id)arg1 selfContextId:(id)arg2 selfMetadata:(id)arg3 dataDispatcherContext:(id)arg4;
- (bool)promoteAssetsForFactors:(id)arg1 withFailedFactors:(id)arg2 withSelfContextId:(id)arg3 withSelfMetadata:(id)arg4 withDataDispatcherContext:(id)arg5;
- (void)registerForFactors:(id)arg1 inAssetSetName:(id)arg2 withAssetsDelegate:(id)arg3 withFactorAndFolders:(id)arg4 useFileManager:(id)arg5;
- (bool)registerForFactors:(id)arg1 withAssetsDelegate:(id)arg2 withFactorAndFolders:(id)arg3 useFileManager:(id)arg4 withSelfContextId:(id)arg5 withSelfMetadata:(id)arg6 withDataDispatcherContext:(id)arg7;
- (bool)setAssetsProvisionalForFactorNames:(id)arg1 selfContextId:(id)arg2 selfMetadata:(id)arg3 dataDispatcherContext:(id)arg4;
- (bool)setAssetsProvisionalForFactors:(id)arg1 withSelfContextId:(id)arg2 withSelfMetadata:(id)arg3 withDataDispatcherContext:(id)arg4;
- (void)setupWithError:(id*)arg1;

@end
