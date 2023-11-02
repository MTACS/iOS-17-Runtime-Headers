
@interface IntlUtility : NSObject {
    NSMutableArray * mBidiLanguagesArray;
    NSMutableArray * mBidiTestedLanguagesArray;
}

+ (int)UDisplayContextForIUDisplayNameContext:(unsigned long long)arg1;
+ (id)_getXPCConnectionForLocalizationSwitcher;
+ (id)_preferredLanguagesForBundleID:(id)arg1;
+ (id)_preferredLanguagesForBundleID:(id)arg1 withAppRecord:(id)arg2;
+ (id)_preferredLanguagesForBundleID:(id)arg1 withBundleRecord:(id)arg2;
+ (id)_proposedOverrideLanguageFromLanguage:(id)arg1 forLocalizations:(id)arg2 preferredLanguages:(id)arg3 regionCode:(id)arg4;
+ (void)_setPreferredLanguage:(id)arg1 forBundleID:(id)arg2;
+ (id)_supportedCalendarsOnEmbeddedSystems;
+ (id)alternateContinentOfRegion:(id)arg1;
+ (id)baseLanguageIdentifierFromIdentifier:(id)arg1;
+ (id)baseSystemLanguages;
+ (id)capitalizeFirstWordOfName:(id)arg1 accordingToLanguage:(id)arg2;
+ (id)defaultCalendarForLocaleID:(id)arg1;
+ (id)defaultNumberingSystemForLocaleID:(id)arg1;
+ (id)displayNameForNumberingSystemWithIdentifier:(id)arg1 localeIdentifier:(id)arg2;
+ (id)displayNameForNumberingSystemWithIdentifier:(id)arg1 localeIdentifier:(id)arg2 short:(bool)arg3;
+ (void)enumeratePreferredCalendarsForLocaleID:(id)arg1 usingBlock:(id /* block */)arg2;
+ (id)filterLanguageList:(id)arg1 forRegion:(id)arg2 fromLanguages:(id)arg3;
+ (bool)forceCapitalizationInLanguageLists;
+ (long long)formattingContextFromIUDisplayNameContext:(unsigned long long)arg1;
+ (bool)isLunarCalendarDefaultOn;
+ (bool)isLunarCalendarDefaultOnForLanguage:(id)arg1 locale:(id)arg2;
+ (bool)isYearlessDate:(id)arg1 forCalendar:(id)arg2;
+ (id)languageIdentifierFromIdentifier:(id)arg1 withRegion:(id)arg2;
+ (id)localeForCalendarID:(id)arg1;
+ (id)localeForCalendarID:(id)arg1 andLocale:(id)arg2;
+ (id)lunarCalendarsForLocaleID:(id)arg1;
+ (id)normalizedLanguageIDFromString:(id)arg1;
+ (id)numberingSystemForLocaleID:(id)arg1;
+ (id)numberingSystemsForLocaleID:(id)arg1;
+ (id)numberingSystemsFromArray:(id)arg1 forLocaleID:(id)arg2;
+ (id)parentLocaleIdentifierForIdentifier:(id)arg1;
+ (id)perAppLanguageSelectionBundleIdentifiers;
+ (id)preferredLanguageForBundleID:(id)arg1;
+ (void)preferredLanguagesForBundleID:(id)arg1 reply:(id /* block */)arg2;
+ (id)preferredLanguagesForBundleIDs:(id)arg1;
+ (void)preferredLanguagesForBundleIDs:(id)arg1 reply:(id /* block */)arg2;
+ (id)preferredLanguagesForRegion:(id)arg1;
+ (id)preferredLanguagesForRegionWithoutFiltering:(id)arg1;
+ (id)preferredLanguagesFromLanguages:(id)arg1 byAddingFallbacksForRegion:(id)arg2;
+ (id)preferredLunarCalendarForLocaleID:(id)arg1;
+ (id)restrictedCountryCodes;
+ (void)setPreferredLanguage:(id)arg1 forBundleID:(id)arg2;
+ (void)setPreferredLanguage:(id)arg1 forBundleID:(id)arg2 andRelaunchWithCompletion:(id /* block */)arg3;
+ (void)setYearlessYear:(id)arg1 forCalendar:(id)arg2;
+ (id)sharedIntlUtility;
+ (id)shortDisplayNameForNumberingSystemWithIdentifier:(id)arg1 localeIdentifier:(id)arg2;
+ (id)stdLanguageIDs;
+ (void)subscribeToAppLanguageChanges:(id /* block */)arg1;
+ (id)supportedCalendars;
+ (void)unsubscribeFromAppLanguageChanges;
+ (bool)upgradeAppleLanguagesFrom:(id)arg1 to:(id)arg2;
+ (long long)yearlessYearForMonth:(long long)arg1 withCalendar:(id)arg2;

- (void).cxx_destruct;
- (id)ICUdisplayNameForLanguage:(id)arg1 capitalization:(struct ULocaleDisplayNames { }*)arg2;
- (bool)canRenderLanguage:(id)arg1;
- (id)displayNameForDialect:(id)arg1 context:(unsigned long long)arg2 displayLanguage:(id)arg3;
- (id)displayNameForLanguage:(id)arg1 context:(unsigned long long)arg2 displayLanguage:(id)arg3;
- (id)displayNameForLocale:(id)arg1 displayLanguage:(id)arg2 capitalization:(unsigned long long)arg3 short:(bool)arg4;
- (id)displayNameForNormalizedLanguage:(id)arg1 context:(unsigned long long)arg2 displayLanguage:(id)arg3;
- (id)displayNameForRegion:(id)arg1 displayLanguage:(id)arg2 capitalization:(unsigned long long)arg3;
- (id)displayNameForRegion:(id)arg1 displayLanguage:(id)arg2 capitalization:(unsigned long long)arg3 short:(bool)arg4;
- (id)languageList;
- (id)localizedLanguageForLanguage:(id)arg1;
- (id)localizedNameForScript:(short)arg1;

@end
