
@protocol _INPBDataValue <NSObject>

@required

- (bool)hasValue;
- (bool)hasValueMetadata;
- (void)setValue:(NSData *)arg1;
- (void)setValueMetadata:(_INPBValueMetadata *)arg1;
- (NSData *)value;
- (_INPBValueMetadata *)valueMetadata;

@end
