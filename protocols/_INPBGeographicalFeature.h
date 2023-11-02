
@protocol _INPBGeographicalFeature <NSObject>

@required

+ (Class)geographicalFeatureDescriptorsType;

- (void)addGeographicalFeatureDescriptors:(_INPBString *)arg1;
- (void)clearGeographicalFeatureDescriptors;
- (NSArray *)geographicalFeatureDescriptors;
- (_INPBString *)geographicalFeatureDescriptorsAtIndex:(unsigned long long)arg1;
- (unsigned long long)geographicalFeatureDescriptorsCount;
- (_INPBString *)geographicalFeatureType;
- (bool)hasGeographicalFeatureType;
- (void)setGeographicalFeatureDescriptors:(NSArray *)arg1;
- (void)setGeographicalFeatureType:(_INPBString *)arg1;

@end
