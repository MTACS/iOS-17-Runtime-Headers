
@protocol _INPBIntegerValue <NSObject>

@required

- (bool)hasValue;
- (bool)hasValueMetadata;
- (void)setHasValue:(bool)arg1;
- (void)setValue:(int)arg1;
- (void)setValueMetadata:(_INPBValueMetadata *)arg1;
- (int)value;
- (_INPBValueMetadata *)valueMetadata;

@end
