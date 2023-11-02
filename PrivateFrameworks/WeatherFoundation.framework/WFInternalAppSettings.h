
@interface WFInternalAppSettings : NSObject <WFSettings>

@property (nonatomic, readonly) NSString *apiVersion;
@property (nonatomic, readonly) NSString *apiVersionFallback;
@property (nonatomic, readonly) NSURL *appAnalyticsEndpointUrl;
@property (nonatomic, readonly) NSSet *aqiEnabledCountryCodes;
@property (nonatomic, readonly) double cachedGeocodeLocationExpirationTimeInterval;
@property (nonatomic, readonly) float dataSamplingRate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool disableForecastRequestCancelation;
@property (nonatomic, readonly) bool disableLimitReverseGeocoding;
@property (nonatomic, readonly) bool disablePriorityForecastRequestQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool loadSavedCitiesFromKVSOnly;
@property (nonatomic, readonly) float locationGeocodingSamplingRate;
@property (nonatomic, readonly) unsigned long long locationNumDecimalsOfPrecision;
@property (nonatomic, readonly) double locationUpdateMinDistance;
@property (nonatomic, readonly) double locationUpdateMinTimeInterval;
@property (nonatomic, readonly) unsigned long long networkFailedAttemptsLimit;
@property (nonatomic, readonly) unsigned long long networkSwitchExpirationTimeInSeconds;
@property (nonatomic, readonly) double privateUserIdentifierResetTimeInterval;
@property (readonly) Class superclass;
@property (nonatomic, readonly) float telemetrySamplingRate;
@property (nonatomic, readonly) double userIdentifierResetTimeInterval;
@property (nonatomic, readonly) WFWeatherEventsConfig *weatherEventsConfig;
@property (nonatomic, readonly) NSDictionary *widgetRefreshPolicy;

- (id)apiVersion;
- (id)apiVersionFallback;
- (id)appAnalyticsEndpointUrl;
- (id)aqiEnabledCountryCodes;
- (double)cachedGeocodeLocationExpirationTimeInterval;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)dataSamplingRate;
- (id)description;
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
- (id)weatherEventsConfig;

@end
