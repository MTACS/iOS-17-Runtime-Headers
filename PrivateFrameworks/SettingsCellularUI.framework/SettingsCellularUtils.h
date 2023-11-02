
@interface SettingsCellularUtils : NSObject

+ (id)formattedPhoneNumber:(id)arg1;
+ (bool)isUIDualSIM;
+ (bool)isUISingleSIM;
+ (bool)shouldShowPendingTransferPlanOnPad;
+ (id)singleSIMUIServiceDescriptor;
+ (id)singleSIMUISubscriptionContext;
+ (bool)supportsWiFiCalling:(id)arg1;

@end
