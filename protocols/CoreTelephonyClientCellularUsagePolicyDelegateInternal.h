
@protocol CoreTelephonyClientCellularUsagePolicyDelegateInternal <NSObject>

@optional

- (void)interfaceCostExpensiveChanged:(CTXPCServiceSubscriptionContext *)arg1 isExpensive:(bool)arg2;
- (void)lowDataModeChanged:(CTXPCServiceSubscriptionContext *)arg1 userEnabled:(bool)arg2;
- (void)privacyProxyChanged:(struct { bool x1; bool x2; })arg1;
- (void)reliableNetworkFallbackChanged:(bool)arg1 userEnabled:(bool)arg2;
- (void)smartDataModeChanged:(CTXPCServiceSubscriptionContext *)arg1 userEnabled:(bool)arg2;

@end
