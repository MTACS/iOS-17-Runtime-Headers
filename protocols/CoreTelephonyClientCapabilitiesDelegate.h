
@protocol CoreTelephonyClientCapabilitiesDelegate <NSObject>

@optional

- (void)context:(CTXPCServiceSubscriptionContext *)arg1 capabilitiesChanged:(NSDictionary *)arg2;
- (void)phoneServicesCapabilitiesChanged:(NSDictionary *)arg1;

@end
