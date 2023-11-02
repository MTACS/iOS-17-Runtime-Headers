
@interface Localize : NSObject

+ (id)availableLocaleNames;
+ (id)formatString:(id)arg1 withExponent:(int)arg2 formatter:(id)arg3;
+ (id)localizationForLocale:(id)arg1;
+ (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 localization:(id)arg4;
+ (id)localizedStringsForTable:(id)arg1 localization:(id)arg2;
+ (id)mainBundle;
+ (id)systemLocale;
+ (id)systemLocales;

@end
