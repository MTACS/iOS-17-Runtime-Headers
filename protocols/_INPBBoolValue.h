
@protocol _INPBBoolValue <NSObject>

@required

- (bool)hasValue;
- (bool)hasValueMetadata;
- (void)setHasValue:(bool)arg1;
- (void)setValue:(bool)arg1;
- (void)setValueMetadata:(_INPBValueMetadata *)arg1;
- (bool)value;
- (_INPBValueMetadata *)valueMetadata;

@end
