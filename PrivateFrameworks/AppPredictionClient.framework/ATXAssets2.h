
@interface ATXAssets2 : NSObject

+ (void)addOverridePath:(id)arg1 forResource:(id)arg2 ofType:(id)arg3;
+ (id)asset;
+ (void)clearOverrides;
+ (id)dictionaryForClass:(Class)arg1;
+ (id)dictionaryForResource:(id)arg1 ofType:(id)arg2 specifiedABGroup:(id)arg3;
+ (void)onUpdateRestartThisProcess;
+ (id)pathForResource:(id)arg1 ofType:(id)arg2;
+ (id)rawDictionaryForResource:(id)arg1 ofType:(id)arg2;
+ (id)rawDictionaryUsingMobileAssetsForResource:(id)arg1 ofType:(id)arg2;
+ (id)rawDictionaryUsingTrialForResource:(id)arg1 ofType:(id)arg2;
+ (void)updateMobileAssetMetadata;

@end
