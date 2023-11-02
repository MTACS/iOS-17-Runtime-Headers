
@interface CNAutocompleteEntitlementVerifier : NSObject

+ (bool)currentProcessHasBooleanEntitlement:(id)arg1;
+ (bool)currentProcessHasCalendarEntitlement;
+ (bool)currentProcessHasContactsEntitlement;
+ (bool)currentProcessHasDuetEntitlement;
+ (bool)currentProcessHasNetworkClientEntitlement;
+ (bool)currentProcessHasRecentsEntitlement;
+ (bool)currentProcessHasStewieEntitlement;
+ (bool)currentProcessHasSuggestionsEntitlement;

@end
