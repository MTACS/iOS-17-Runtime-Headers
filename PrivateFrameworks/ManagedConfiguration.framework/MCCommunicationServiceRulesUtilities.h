
@interface MCCommunicationServiceRulesUtilities : NSObject

+ (id)defaultAppBundleIDForCommunicationServiceType:(id)arg1 forAccountWithIdentifier:(id)arg2;
+ (id)restrictionsForValidatedCommunicationServiceRules:(id)arg1;
+ (id)validServiceTypes;
+ (id)validatedCommunicationServiceRules:(id)arg1 outError:(id*)arg2;

@end
