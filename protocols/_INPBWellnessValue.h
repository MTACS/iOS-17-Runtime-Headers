
@protocol _INPBWellnessValue <NSObject>

@required

- (bool)hasOrdinalValue;
- (bool)hasPbDoubleValue;
- (bool)hasValueMetadata;
- (_INPBInteger *)ordinalValue;
- (_INPBDouble *)pbDoubleValue;
- (void)setOrdinalValue:(_INPBInteger *)arg1;
- (void)setPbDoubleValue:(_INPBDouble *)arg1;
- (void)setValueMetadata:(_INPBValueMetadata *)arg1;
- (_INPBValueMetadata *)valueMetadata;

@end
