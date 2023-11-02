
@protocol CTXPCServiceAppDataUsageInterface

@required

- (void)billingCycleEndDatesForLastPeriods:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)clearUserEnteredBillingEndDayOfMonth:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CTXPCServiceSubscriptionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)clearUserEnteredMonthlyBudget:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CTXPCServiceSubscriptionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)clearUserEnteredMonthlyRoamingBudget:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CTXPCServiceSubscriptionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)dataUsageForLastPeriods:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CTDeviceDataUsage *, NSError *, void*
- (void)dataUsageForLastPeriodsOnActivePairedDevice:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CTDeviceDataUsage *, NSError *, void*
- (void)getCellularUsageWorkspaceInfo:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CTCellularUsageWorkspaceInfo *, NSError *, void*
- (void)setUsageCollectionEnabled:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setUserEntered:(void *)arg1 monthlyBudget:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: CTXPCServiceSubscriptionContext *, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setUserEntered:(void *)arg1 monthlyRoamingBudget:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: CTXPCServiceSubscriptionContext *, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setUserEnteredBillingEnd:(void *)arg1 dayOfMonth:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: CTXPCServiceSubscriptionContext *, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)usageCollectionEnabled:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)userEnteredBillingEndDayOfMont:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CTXPCServiceSubscriptionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)userEnteredMonthlyBudget:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CTXPCServiceSubscriptionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)userEnteredMonthlyRoamingBudget:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CTXPCServiceSubscriptionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*

@end
