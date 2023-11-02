
@interface WFLocation : NSObject <NSCopying, NSSecureCoding> {
    long long  _archiveVersion;
    NSString * _city;
    NSString * _country;
    NSString * _countryAbbreviation;
    NSString * _county;
    NSDate * _creationDate;
    NSString * _displayName;
    CLLocation * _geoLocation;
    NSString * _locationID;
    NSString * _state;
    NSString * _stateAbbreviation;
    NSTimeZone * _timeZone;
    NSString * _weatherDisplayName;
    NSString * _weatherLocationName;
}

@property long long archiveVersion;
@property (nonatomic, copy) NSString *city;
@property (nonatomic, copy) NSString *country;
@property (nonatomic, copy) NSString *countryAbbreviation;
@property (nonatomic, copy) NSString *county;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) CLLocation *geoLocation;
@property (nonatomic, copy) NSString *locationID;
@property (nonatomic, readonly) bool needsGeocoding;
@property (nonatomic, readonly) bool nwm_isAQICountry;
@property (nonatomic, readonly) bool nwm_isDAQICountry;
@property (nonatomic, readonly) bool nwm_isUBACountry;
@property (nonatomic, readonly) bool shouldQueryForAirQualityData;
@property (nonatomic, copy) NSString *state;
@property (nonatomic, copy) NSString *stateAbbreviation;
@property (nonatomic, retain) NSTimeZone *timeZone;
@property (nonatomic, copy) NSString *weatherDisplayName;
@property (nonatomic, copy) NSString *weatherLocationName;
@property (nonatomic, readonly) NSString *wf_weatherChannelGeocodeValue;

// Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation

+ (long long)currentArchiveVersion;
+ (id)knownKeys;
+ (id)locationsByConsolidatingDuplicates:(id)arg1 originalOrder:(id)arg2;
+ (id)locationsByConsolidatingDuplicatesInBucket:(id)arg1;
+ (id)locationsByFilteringDuplicates:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_sunAlmanacForDate:(id)arg1;
- (long long)archiveVersion;
- (id)city;
- (id)cloudDictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)country;
- (id)countryAbbreviation;
- (id)county;
- (id)creationDate;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)geoLocation;
- (unsigned long long)hash;
- (id)initWithCloudDictionaryRepresentation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalDataRepresentation:(id)arg1;
- (id)initWithMapItem:(id)arg1;
- (id)initWithMapItem:(id)arg1 isCurrentLocation:(bool)arg2;
- (id)initWithPlacemark:(id)arg1;
- (id)initWithSearchResponse:(id)arg1;
- (bool)isDay;
- (bool)isDayForDate:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localDataRepresentation;
- (id)locationID;
- (bool)needsGeocoding;
- (void)setArchiveVersion:(long long)arg1;
- (void)setCity:(id)arg1;
- (void)setCountry:(id)arg1;
- (void)setCountryAbbreviation:(id)arg1;
- (void)setCounty:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setGeoLocation:(id)arg1;
- (void)setLocationID:(id)arg1;
- (void)setState:(id)arg1;
- (void)setStateAbbreviation:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setWeatherDisplayName:(id)arg1;
- (void)setWeatherLocationName:(id)arg1;
- (bool)shouldQueryForAirQualityData;
- (id)state;
- (id)stateAbbreviation;
- (id)summary;
- (id)summaryThatIsCompact:(bool)arg1;
- (void)sunrise:(id*)arg1 andSunset:(id*)arg2 forDate:(id)arg3;
- (id)sunriseForDate:(id)arg1;
- (id)sunsetForDate:(id)arg1;
- (id)timeZone;
- (id)weatherDisplayName;
- (id)weatherLocationName;
- (id)wf_weatherChannelGeocodeValue;

// Image: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion

+ (id)_nwm_attributedDisplayName:(id)arg1 prefixedWithLocationGlyph:(id)arg2;
+ (id)nwm_attributedDisplayNameWithLocationGlyph:(id)arg1 inFont:(id)arg2;
+ (id)nwm_attributedDisplayNameWithLocationGlyph:(id)arg1 withTextStyle:(id)arg2;

- (bool)nwm_isAQICountry;
- (bool)nwm_isDAQICountry;
- (bool)nwm_isUBACountry;

@end
