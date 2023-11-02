
@interface CNObservableContractEnforcementPreferences : NSObject

+ (bool)primitiveShouldEnforceRxProtocols;
+ (bool)primitiveShouldSwizzleNilResults;
+ (bool)shouldEnforceRxProtocols;
+ (bool)shouldSwizzleNilResults;

@end
