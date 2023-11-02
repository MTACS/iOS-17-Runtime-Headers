
@protocol _INPBDoubleValue <NSObject>

@required

- (bool)hasValue;
- (bool)hasValueMetadata;
- (void)setHasValue:(bool)arg1;
- (void)setValue:(double)arg1;
- (void)setValueMetadata:(_INPBValueMetadata *)arg1;
- (double)value;
- (_INPBValueMetadata *)valueMetadata;

@end
