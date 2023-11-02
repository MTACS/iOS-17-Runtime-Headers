
@protocol _INPBConfidenceScore <NSObject>

@required

+ (Class)componentsType;

- (void)addComponents:(_INPBConfidenceScoreComponent *)arg1;
- (float)aggregateScore;
- (void)clearComponents;
- (NSArray *)components;
- (_INPBConfidenceScoreComponent *)componentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)componentsCount;
- (bool)hasAggregateScore;
- (void)setAggregateScore:(float)arg1;
- (void)setComponents:(NSArray *)arg1;
- (void)setHasAggregateScore:(bool)arg1;

@end
