
@interface _SFPerSitePreferencesUtilities : NSObject

+ (bool)isBinaryPreferenceValueOn:(id)arg1 preference:(id)arg2 preferenceManager:(id)arg3;
+ (id)preferenceValueForBoolValue:(bool)arg1 preference:(id)arg2 preferenceManager:(id)arg3;
+ (id)preferenceValueForPSSpecifierValue:(id)arg1 specifier:(id)arg2 preference:(id)arg3 preferenceManager:(id)arg4;
+ (id)specifierValueForSpecifier:(id)arg1 preferenceValue:(id)arg2 preference:(id)arg3 preferenceManager:(id)arg4;

@end
