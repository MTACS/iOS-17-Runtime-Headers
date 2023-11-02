
@protocol _INPBWellnessMetadataValue <NSObject>

@required

- (bool)hasOrdinalValue;
- (bool)hasPbDoubleValue;
- (bool)hasPbStringValue;
- (_INPBInteger *)ordinalValue;
- (_INPBDouble *)pbDoubleValue;
- (_INPBString *)pbStringValue;
- (void)setOrdinalValue:(_INPBInteger *)arg1;
- (void)setPbDoubleValue:(_INPBDouble *)arg1;
- (void)setPbStringValue:(_INPBString *)arg1;

@end
