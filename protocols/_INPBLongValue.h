
@protocol _INPBLongValue <NSObject>

@required

- (bool)hasValue;
- (bool)hasValueMetadata;
- (void)setHasValue:(bool)arg1;
- (void)setValue:(long long)arg1;
- (void)setValueMetadata:(_INPBValueMetadata *)arg1;
- (long long)value;
- (_INPBValueMetadata *)valueMetadata;

@end
