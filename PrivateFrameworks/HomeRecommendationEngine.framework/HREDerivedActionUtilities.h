
@interface HREDerivedActionUtilities : NSObject

+ (id)_derivedActionForActionableObject:(id)arg1 actionType:(id)arg2 actions:(id)arg3;
+ (id)_derivedActionForCharacteristic:(id)arg1 withExistingValues:(id)arg2;
+ (id)_derivedActionForMediaProfiles:(id)arg1 withExistingValues:(id)arg2;
+ (id)_filterActions:(id)arg1 withAccessoriesPassingTest:(id /* block */)arg2;
+ (id)_filterActions:(id)arg1 withUnmatchedCharacteristicTypes:(id)arg2;
+ (id)_serviceTypesExtrapolatingFromWholeHome;
+ (id)_serviceTypesExtrapolatingFromZones;
+ (id)actionType:(id)arg1;
+ (id)actionTypeAlias;
+ (id)actionTypeForActionClass:(Class)arg1;
+ (id)actionTypeForCharacteristic:(id)arg1;
+ (id)actionTypeForServiceType:(id)arg1 characteristicType:(id)arg2;
+ (id)actionTypesForProfile:(id)arg1;
+ (id)characteristicTypeAlias;
+ (id)derivedActionsForActionableObjects:(id)arg1 fromActions:(id)arg2;
+ (id)serviceTypeAlias;

@end
