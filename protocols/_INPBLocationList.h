
@protocol _INPBLocationList <NSObject>

@required

+ (Class)locationType;

- (void)addLocation:(_INPBLocation *)arg1;
- (void)clearLocations;
- (_INPBCondition *)condition;
- (bool)hasCondition;
- (_INPBLocation *)locationAtIndex:(unsigned long long)arg1;
- (NSArray *)locations;
- (unsigned long long)locationsCount;
- (void)setCondition:(_INPBCondition *)arg1;
- (void)setLocations:(NSArray *)arg1;

@end
