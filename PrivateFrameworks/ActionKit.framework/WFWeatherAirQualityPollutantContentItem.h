
@interface WFWeatherAirQualityPollutantContentItem : WFContentItem

+ (id)contentCategories;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)propertyBuilders;
+ (id)typeDescription;

- (id)concentration;
- (id)formattedConcentration;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3;
- (id)localizedDescription;
- (id)localizedName;
- (id)pollutant;

@end
