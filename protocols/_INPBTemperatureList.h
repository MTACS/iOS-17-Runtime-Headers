
@protocol _INPBTemperatureList <NSObject>

@required

+ (Class)temperatureType;

- (void)addTemperature:(_INPBTemperature *)arg1;
- (void)clearTemperatures;
- (_INPBCondition *)condition;
- (bool)hasCondition;
- (void)setCondition:(_INPBCondition *)arg1;
- (void)setTemperatures:(NSArray *)arg1;
- (_INPBTemperature *)temperatureAtIndex:(unsigned long long)arg1;
- (NSArray *)temperatures;
- (unsigned long long)temperaturesCount;

@end
