
@interface _ANEDeviceInfo : NSObject

+ (long long)aneBoardType;
+ (id)aneSubType;
+ (id)aneSubTypeProductVariant;
+ (id)aneSubTypeVariant;
+ (id)bootArgs;
+ (id)buildVersion;
+ (bool)hasANE;
+ (bool)isExcessivePowerDrainWhenIdle;
+ (bool)isInternalBuild;
+ (unsigned int)numANECores;
+ (unsigned int)numANEs;
+ (bool)precompiledModelChecksDisabled;
+ (id)productName;

@end
