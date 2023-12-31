
@protocol CTCarrierSpaceClientDelegate <NSObject>

@optional

- (void)appsDidChange;
- (void)capabilitiesDidChange:(CTCarrierSpaceCapabilities *)arg1;
- (void)dataPlanMetricsDidChange;
- (void)plansDidChange;
- (void)purchasedPlan:(CTCarrierSpacePlanGroupOptionInfo *)arg1 didChangeStatus:(long long)arg2 context:(NSDictionary *)arg3;
- (void)usageDidChange;
- (void)userConsentFlowInfoDidChange;

@end
