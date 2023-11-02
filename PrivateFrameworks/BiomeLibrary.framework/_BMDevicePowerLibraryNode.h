
@interface _BMDevicePowerLibraryNode : _BMLibraryNode

+ (id)BatteryLevel;
+ (id)EnergyMode;
+ (id)LowPowerMode;
+ (id)PluggedIn;
+ (id)configurationForBatteryLevel;
+ (id)configurationForEnergyMode;
+ (id)configurationForLowPowerMode;
+ (id)configurationForPluggedIn;
+ (id)identifier;
+ (id)storeConfigurationForBatteryLevel;
+ (id)storeConfigurationForEnergyMode;
+ (id)storeConfigurationForLowPowerMode;
+ (id)storeConfigurationForPluggedIn;
+ (id)streamNames;
+ (id)streamWithName:(id)arg1;
+ (id)sublibraries;
+ (id)syncPolicyForBatteryLevel;
+ (id)syncPolicyForEnergyMode;
+ (id)syncPolicyForLowPowerMode;
+ (id)syncPolicyForPluggedIn;
+ (id)validKeyPaths;

@end
