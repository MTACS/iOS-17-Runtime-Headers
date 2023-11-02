
@interface SSWorldClockUtilities : NSObject

+ (id)additionalTimeZonesStringForFormattedData:(id)arg1;
+ (id)clockImageForDate:(id)arg1 timeZone:(id)arg2;
+ (id)commandForFormattedData:(id)arg1;
+ (id)compactCardSectionForFormattedData:(id)arg1 primaryCityFormattedData:(id)arg2;
+ (id)formattedLocationForCity:(id)arg1 country:(id)arg2;
+ (id)formattedTimeForDate:(id)arg1 timeZone:(id)arg2;
+ (void)getLocationAndTimeZoneForQuery:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)getWorldClockResultsForQuery:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)inlineCardSectionForFormattedData:(id)arg1 primaryCityFormattedData:(id)arg2;
+ (id)onDeviceResultsForLocationQuery:(id)arg1;
+ (void)parseQueryForWorldClock:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)sendResultsForQuery:(id)arg1 detectedLocations:(id)arg2 shouldEmphasizeTimeZone:(bool)arg3 completionHandler:(id /* block */)arg4;
+ (id)timeZoneOffsetDescriptionForDate:(id)arg1 timeZone:(id)arg2;

@end
