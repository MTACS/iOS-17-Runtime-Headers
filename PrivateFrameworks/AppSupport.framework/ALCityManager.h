
@interface ALCityManager : NSObject {
    CPSearchMatcher * _citySearchMatcher;
    NSRecursiveLock * _databaseAccessRecursiveLock;
    struct sqlite3 { } * _db;
    ALSCGreenClient * _greenClient;
    bool  _greenKey1ValueCache;
    bool  _greenKey2ValueCache;
    bool  _greenKey3ValueCache;
    NSDate * _greenKeyValueCacheExpirationDate;
    struct sqlite3 { } * _localizedDb;
}

@property (readonly) CPSearchMatcher *citySearchMatcher;

// Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport

+ (id)_localeDictionaryFromSQLRow:(char **)arg1;
+ (struct __CFArray { }*)legacyCityForCity:(id)arg1;
+ (id)newCitiesByIdentifierMap:(id)arg1;
+ (id)sharedManager;
+ (bool)willApplyTimeZoneChanges1;

- (id)_cityForClassicIdentifier:(id)arg1 commaSearchOptions:(unsigned long long)arg2;
- (id)_cityForTimeZone:(id)arg1 localeCode:(id)arg2;
- (id)_defaultCityForTimeZone:(id)arg1 localeCode:(id)arg2;
- (bool)_shouldUseTablesAlternate1;
- (void)_whileDatabaseLocked_ensureGreenKeyValueCaches;
- (id)_whileDatabaseLocked_localeCodesMatchingQualifier:(id)arg1;
- (void)_whileDatabaseLocked_modifyCityForGreen:(id)arg1;
- (id)allCities;
- (id)allLocales;
- (id)bestCityForLegacyCity:(struct __CFArray { }*)arg1;
- (id)citiesMatchingName:(id)arg1;
- (id)citiesMatchingName:(id)arg1 localized:(bool)arg2;
- (id)citiesMatchingQualifier:(id)arg1;
- (id)citiesWithIdentifiers:(id)arg1;
- (id)citiesWithTimeZone:(id)arg1;
- (id)cityForClassicIdentifier:(id)arg1;
- (id)citySearchMatcher;
- (void)dealloc;
- (id)defaultCitiesForLocaleCode:(id)arg1;
- (id)defaultCitiesForLocaleCode:(id)arg1 options:(int)arg2;
- (id)defaultCitiesShownInWorldClock;
- (id)defaultCityForTimeZone:(id)arg1;
- (id)defaultCityForTimeZone:(id)arg1 localeCode:(id)arg2;
- (id)init;
- (id)localeWithCode:(id)arg1;
- (void)localizeCities:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (id)px_typedCitiesMatchingName:(id)arg1;

@end
