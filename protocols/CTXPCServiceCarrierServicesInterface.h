
@protocol CTXPCServiceCarrierServicesInterface

@required

- (void)getSweetgumApps:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CTServiceDescriptor *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CTSweetgumAppsInfo *, NSError *, void*
- (void)getSweetgumCapabilities:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CTServiceDescriptor *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CTSweetgumCapabilities *, NSError *, void*
- (void)getSweetgumDataPlanMetrics:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CTServiceDescriptor *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CTSweetgumDataPlanMetrics *, NSError *, void*
- (void)getSweetgumPlans:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CTServiceDescriptor *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CTSweetgumPlansInfo *, NSError *, void*
- (void)getSweetgumUsage:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CTServiceDescriptor *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CTSweetgumUsageInfo *, NSError *, void*
- (void)getSweetgumUserConsentInfo:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CTServiceDescriptor *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CTSweetgumUserConsentFlowInfo *, NSError *, void*
- (void)purchaseSweetgumPlan:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CTSweetgumPlan *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)refreshSweetgumAll:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CTServiceDescriptor *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)refreshSweetgumApps:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CTServiceDescriptor *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)refreshSweetgumPlans:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CTServiceDescriptor *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)refreshSweetgumUsage:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CTServiceDescriptor *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setSweetgumUserConsent:(void *)arg1 userConsent:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: CTServiceDescriptor *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
