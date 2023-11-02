
@interface WFWeatherDataContentItem : WFContentItem <WFContentItemClass>

@property (nonatomic, readonly) NSDictionary *additionalRepresentationsForSerialization;
@property (nonatomic, readonly) bool cachesSupportedTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasStringOutput;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool includesFileRepresentationInSerializedItem;
@property (nonatomic, readonly) NSDictionary *metadataForSerialization;
@property (nonatomic, readonly) WFFileType *preferredFileType;
@property (nonatomic, readonly) WFObjectType *preferredObjectType;
@property (readonly) Class superclass;

+ (id)contentCategories;
+ (id)countDescription;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)propertyBuilders;
+ (id)typeDescription;

- (id)date;
- (id)dewpoint;
- (id)feelsLikeTemperature;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3;
- (id)highTemperature;
- (id)humidity;
- (id)localizedAirQualityCategory;
- (id)localizedAirQualityIndex;
- (id)localizedConditionString;
- (id)location;
- (id)lowTemperature;
- (id)pollutants;
- (id)precipitationAmount;
- (id)precipitationChance;
- (id)pressure;
- (id)sunriseTime;
- (id)sunsetTime;
- (id)temperature;
- (id)uvIndex;
- (id)visibility;
- (id)weatherData;
- (id)windDirection;
- (id)windSpeed;

@end
