
@interface ATXNewsTodayWidgetPlacementPolicyProvider : NSObject

+ (id)_newsSupportedCountries;
+ (id)_parsecEditorialLocales;

- (bool)isTodayWidgetPermittedForLocale:(id)arg1;

@end
