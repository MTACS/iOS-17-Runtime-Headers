
@protocol _INPBCreateTimerIntent <NSObject>

@required

- (int)StringAsType:(NSString *)arg1;
- (double)duration;
- (bool)hasDuration;
- (bool)hasIntentMetadata;
- (bool)hasLabel;
- (bool)hasType;
- (_INPBIntentMetadata *)intentMetadata;
- (_INPBDataString *)label;
- (void)setDuration:(double)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setLabel:(_INPBDataString *)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (NSString *)typeAsString:(int)arg1;

@end
