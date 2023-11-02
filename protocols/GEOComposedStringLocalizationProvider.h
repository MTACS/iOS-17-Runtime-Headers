
@protocol GEOComposedStringLocalizationProvider <NSObject>

@required

- (NSString *)aboutDistanceAndAHalfKilometers;
- (NSString *)aboutDistanceAndAHalfMiles;
- (NSString *)aboutNDistance;
- (NSString *)distanceAQuarterMile;
- (NSString *)distanceAndAHalfKilometers;
- (NSString *)distanceAndAHalfMiles;
- (NSString *)distanceHalfAMile;
- (NSString *)distanceThreeQuartersOfAMile;
- (NSString *)frequencyRange_BothOnlyHours;
- (NSString *)frequencyRange_BothOnlyMinutes;
- (NSString *)frequencyRange_MixedUnits;
- (NSString *)frequencySingleValue_OneHour;
- (NSString *)frequencySingleValue_OneMinute;
- (NSLocale *)locale;
- (NSString *)minutesFormatForCountdownList;
- (NSString *)separatorForTimestampList;
- (NSLocale *)spokenLocale;

@end
