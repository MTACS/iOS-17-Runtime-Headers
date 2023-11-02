
@protocol _INPBGeographicalFeatureList <NSObject>

@required

+ (Class)geographicalFeatureType;

- (void)addGeographicalFeature:(_INPBGeographicalFeature *)arg1;
- (void)clearGeographicalFeatures;
- (_INPBCondition *)condition;
- (_INPBGeographicalFeature *)geographicalFeatureAtIndex:(unsigned long long)arg1;
- (NSArray *)geographicalFeatures;
- (unsigned long long)geographicalFeaturesCount;
- (bool)hasCondition;
- (void)setCondition:(_INPBCondition *)arg1;
- (void)setGeographicalFeatures:(NSArray *)arg1;

@end
