
@interface CityPersistenceConversions : NSObject

+ (bool)cityDictionaryHasValidCoordinates:(id)arg1;
+ (id)cityFromALCity:(id)arg1;
+ (id)cityFromCloudDictionary:(id)arg1;
+ (id)cityFromDictionary:(id)arg1;
+ (id)cloudDictionaryRepresentationOfALCity:(id)arg1;
+ (id)cloudDictionaryRepresentationOfCity:(id)arg1;
+ (id)dayForecastDictionariesFromCity:(id)arg1;
+ (id)dictionaryRepresentationOfCity:(id)arg1;
+ (id)dictionaryRepresentationOfScaleCategory:(id)arg1;
+ (id)dictionaryRepresentationOfTemperature:(id)arg1;
+ (id)hourlyForecastDictionariesFromCity:(id)arg1;
+ (bool)isCityValid:(id)arg1;
+ (void)populateCity:(id)arg1 withDayForecastDictionaries:(id)arg2;
+ (void)populateCity:(id)arg1 withHourlyForecastDictionaries:(id)arg2;
+ (id)scaleCategoryFromDictionaryRepresentation:(id)arg1;
+ (id)temperatureFromDictionaryRepresentation:(id)arg1;
+ (id)weatherDetailsDictionaryFromCity:(id)arg1;

@end
