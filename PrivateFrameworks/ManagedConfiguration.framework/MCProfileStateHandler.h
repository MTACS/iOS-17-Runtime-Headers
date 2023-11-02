
@interface MCProfileStateHandler : MCStateHandler

+ (void)addProfileRestrictionsStateHandler;
+ (void)addProfileSettingsStateHandler;
+ (id)restrictionsStateDictionaryWithDetailsIncluded:(bool)arg1;
+ (id)settingsStateDictionaryWithDetailsIncluded:(bool)arg1;

@end
