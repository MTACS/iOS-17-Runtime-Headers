
@protocol _INPBMassValue <NSObject>

@required

- (int)StringAsUnit:(NSString *)arg1;
- (bool)hasMagnitude;
- (bool)hasUnit;
- (bool)hasValueMetadata;
- (double)magnitude;
- (void)setHasMagnitude:(bool)arg1;
- (void)setHasUnit:(bool)arg1;
- (void)setMagnitude:(double)arg1;
- (void)setUnit:(int)arg1;
- (void)setValueMetadata:(_INPBValueMetadata *)arg1;
- (int)unit;
- (NSString *)unitAsString:(int)arg1;
- (_INPBValueMetadata *)valueMetadata;

@end
