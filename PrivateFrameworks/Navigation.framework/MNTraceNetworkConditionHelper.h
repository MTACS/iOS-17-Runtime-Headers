
@interface MNTraceNetworkConditionHelper : NSObject

+ (id)activeNLCProfile;
+ (id)availableNLCProfiles;
+ (bool)deviceSupportsCellularData;
+ (bool)disableNLC;
+ (bool)enableNLC:(id)arg1;
+ (id)getCurrentState;
+ (id)getNLCProfile:(id)arg1;
+ (bool)hasActiveNetworkConditionInducer;
+ (bool)isCellDataEnabled;
+ (bool)isWiFiEnabled;
+ (id)nlcProfiles;
+ (bool)setCellDataEnabled:(bool)arg1;
+ (bool)setCurrentState:(id)arg1;
+ (bool)setWiFiEnabled:(bool)arg1;

@end
