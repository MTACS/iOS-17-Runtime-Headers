
@interface CRRepairStatus : NSObject

+ (id)_wasRepaired;
+ (id)_wasRepairedWithCombinedDataClass:(id)arg1;
+ (id)_wasRepairedWithDataClass:(id)arg1;
+ (id)_wasRepairedWithSysCfg:(id)arg1;
+ (id)getLocalSealingManifest;
+ (id)getVeridianFWVersionInfo;
+ (bool)hasHadAuthorizedRepair;
+ (bool)hasHadAuthorizedRepairForComponent:(unsigned long long)arg1;
+ (id)isServicePartWithError:(id*)arg1;
+ (bool)isVeridianFWUpdateRequired;

@end
