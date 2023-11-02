
@protocol CPMSAgentProtocol <NSObject>

@required

+ (bool)isCPMSSupported;
+ (bool)isCPMSSupportedForAnyClient;
+ (bool)isCPMSSupportedForClient:(long long)arg1;
+ (id)sharedCPMSAgent;

- (bool)acknowledgePowerBudget:(NSDictionary *)arg1 forClientId:(long long)arg2 error:(id*)arg3;
- (NSDictionary *)copyDefaultPowerProfileForClient:(long long)arg1 error:(id*)arg2;
- (NSDictionary *)copyPowerBudgetForRequest:(NSDictionary *)arg1 forClient:(long long)arg2 error:(id*)arg3;
- (NSDictionary *)copyPowerBudgetForRequest:(NSDictionary *)arg1 forClient:(long long)arg2 withPowerProfile:(NSDictionary *)arg3 error:(id*)arg4;
- (bool)registerClientWithDescription:(CPMSClientDescription *)arg1 error:(id*)arg2;
- (NSDictionary *)requestPowerBudget:(NSDictionary *)arg1 forClient:(long long)arg2 error:(id*)arg3;

@end
