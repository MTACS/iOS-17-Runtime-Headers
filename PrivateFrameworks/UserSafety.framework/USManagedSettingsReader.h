
@interface USManagedSettingsReader : NSObject

+ (id)currentInterventionType;
+ (id)currentScanningPolicy;
+ (id)subscribeForScanningPolicyChanges:(id /* block */)arg1;

@end
