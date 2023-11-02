
@interface NSSNewsTodayWidgetPlacementPolicyProvider : NSObject

+ (id)newsSupportedCountries;
+ (id)parsecEditorialLocales;

- (id)init;
- (bool)isTodayWidgetPermittedOnHomeScreenForLocale:(id)arg1;

@end
