
@protocol _INPBWellnessMetadataPair <NSObject>

@required

- (bool)hasKey;
- (bool)hasValue;
- (bool)hasValueMetadata;
- (_INPBString *)key;
- (void)setKey:(_INPBString *)arg1;
- (void)setValue:(_INPBWellnessMetadataValue *)arg1;
- (void)setValueMetadata:(_INPBValueMetadata *)arg1;
- (_INPBWellnessMetadataValue *)value;
- (_INPBValueMetadata *)valueMetadata;

@end
