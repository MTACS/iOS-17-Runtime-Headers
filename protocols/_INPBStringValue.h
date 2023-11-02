
@protocol _INPBStringValue <NSObject>

@required

- (bool)hasValue;
- (bool)hasValueMetadata;
- (void)setValue:(NSString *)arg1;
- (void)setValueMetadata:(_INPBValueMetadata *)arg1;
- (NSString *)value;
- (_INPBValueMetadata *)valueMetadata;

@end
