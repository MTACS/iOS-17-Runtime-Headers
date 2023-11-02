
@protocol WFSettings <NSObject, NSCopying>

@required

- (NSString *)apiVersion;
- (NSString *)apiVersionFallback;
- (NSURL *)appAnalyticsEndpointUrl;
- (NSSet *)aqiEnabledCountryCodes;
- (double)cachedGeocodeLocationExpirationTimeInterval;
- (float)dataSamplingRate;
- (bool)disableForecastRequestCancelation;
- (bool)disableLimitReverseGeocoding;
- (bool)disablePriorityForecastRequestQueue;
- (bool)loadSavedCitiesFromKVSOnly;
- (float)locationGeocodingSamplingRate;
- (unsigned long long)locationNumDecimalsOfPrecision;
- (double)locationUpdateMinDistance;
- (double)locationUpdateMinTimeInterval;
- (unsigned long long)networkFailedAttemptsLimit;
- (unsigned long long)networkSwitchExpirationTimeInSeconds;
- (double)privateUserIdentifierResetTimeInterval;
- (float)telemetrySamplingRate;
- (double)userIdentifierResetTimeInterval;
- (WFWeatherEventsConfig *)weatherEventsConfig;
- (NSDictionary *)widgetRefreshPolicy;

@end
