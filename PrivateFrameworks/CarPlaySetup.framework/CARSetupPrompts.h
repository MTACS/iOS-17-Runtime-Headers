
@interface CARSetupPrompts : NSObject

+ (id)allowWhileLockedPromptForVehicleName:(id)arg1 responseHandler:(id /* block */)arg2;
+ (id)connectPromptWithResponseHandler:(id /* block */)arg1;
+ (id)enhancedIntegrationPromptForVehicleName:(id)arg1 responseHandler:(id /* block */)arg2;
+ (id)useWirelessPromptWithResponseHandler:(id /* block */)arg1;

@end
