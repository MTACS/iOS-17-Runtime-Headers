
@interface TSFlowHelper : NSObject

+ (long long)_slotForPlanItem:(id)arg1;
+ (bool)handleStartOverAgainstNoPlan:(id)arg1 navigationController:(id)arg2 completion:(id /* block */)arg3;
+ (bool)hasTransferablePlanWithSameCarrier:(id)arg1 transferablePlans:(id)arg2 inBuddy:(bool)arg3 matchingSODACarrierWebsheetTransferPlanIndex:(id)arg4;
+ (void)registerIMessageWithPlanItems:(id)arg1;
+ (id)unregisteredSelectedPlanItems:(id)arg1;

@end
