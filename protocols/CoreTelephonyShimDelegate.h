
@protocol CoreTelephonyShimDelegate <NSObject>

@optional

- (void)cellInfoChangedForSubscription:(NSDictionary *)arg1;
- (void)cellularDualSimStatusChangedTo:(long long)arg1;
- (void)coreTelephonyDumpCompletedTo:(NSString *)arg1 folderPrefix:(NSString *)arg2;
- (void)coreTelephonyDumpStartedTo:(NSString *)arg1 folderPrefix:(NSString *)arg2 gotFilteredOut:(bool)arg3;
- (void)countryCodeChangedForSubscription:(NSDictionary *)arg1;
- (void)ctDataStatusChangedForSubscription:(NSDictionary *)arg1;
- (void)ctServerConnectionNotification:(struct __CFString { }*)arg1 notificationInfo:(struct __CFDictionary { }*)arg2;
- (void)currentDataSIMIdentifier:(NSString *)arg1;
- (void)infoDataStallChangedForSubscription:(NSDictionary *)arg1;
- (void)infoDataTransferTimeChangedForSubscription:(NSDictionary *)arg1;
- (void)infoDataTransferTimeEnabledChangedForSubscription:(NSDictionary *)arg1;
- (void)infoHighThroughputStateChanged:(NSNumber *)arg1;
- (void)infoLinkPowerCostChangedForSubscription:(NSDictionary *)arg1;
- (void)infoLinkQualityFingeprintChangedForSubscription:(NSDictionary *)arg1;
- (void)infoLinkStateChangedForSubscription:(NSDictionary *)arg1;
- (void)infoNRServingCellTypeChangedForSubscription:(NSDictionary *)arg1;
- (void)infoTrafficClassChangedForSubscription:(NSDictionary *)arg1;
- (void)networkCodeChangedForSubscription:(NSDictionary *)arg1;
- (void)operatorNameChangedForSubscription:(NSDictionary *)arg1;
- (void)ratSelectionChangedForSubscription:(NSDictionary *)arg1;
- (void)receiveIndicationForTag:(unsigned long long)arg1 payload:(NSData *)arg2;
- (void)rnfSettingChangedToFeatureEnabled:(bool)arg1 userEnabled:(bool)arg2;
- (void)signalStrengthChanged:(NSNumber *)arg1;
- (void)signalStrengthChanged:(NSNumber *)arg1 cellularRSRP:(NSNumber *)arg2 cellularSNR:(NSNumber *)arg3;
- (void)signalStrengthChangedForSubscription:(NSDictionary *)arg1;
- (void)smartDataModeChangedToUserEnabled:(bool)arg1;
- (void)supports5GChangedTo:(bool)arg1;
- (void)supportsPrivateNetworkChangedTo:(bool)arg1;

@end
