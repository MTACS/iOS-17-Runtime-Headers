
@protocol _INPBPlaceList <NSObject>

@required

+ (Class)placeType;

- (void)addPlace:(_INPBPlace *)arg1;
- (void)clearPlaces;
- (_INPBCondition *)condition;
- (bool)hasCondition;
- (_INPBPlace *)placeAtIndex:(unsigned long long)arg1;
- (NSArray *)places;
- (unsigned long long)placesCount;
- (void)setCondition:(_INPBCondition *)arg1;
- (void)setPlaces:(NSArray *)arg1;

@end
