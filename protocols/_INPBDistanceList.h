
@protocol _INPBDistanceList <NSObject>

@required

+ (Class)distanceType;

- (void)addDistance:(_INPBDistance *)arg1;
- (void)clearDistances;
- (_INPBCondition *)condition;
- (_INPBDistance *)distanceAtIndex:(unsigned long long)arg1;
- (NSArray *)distances;
- (unsigned long long)distancesCount;
- (bool)hasCondition;
- (void)setCondition:(_INPBCondition *)arg1;
- (void)setDistances:(NSArray *)arg1;

@end
