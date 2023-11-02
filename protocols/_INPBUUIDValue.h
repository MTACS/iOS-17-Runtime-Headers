
@protocol _INPBUUIDValue <NSObject>

@required

- (bool)hasUuidString;
- (bool)hasValueMetadata;
- (void)setUuidString:(NSString *)arg1;
- (void)setValueMetadata:(_INPBValueMetadata *)arg1;
- (NSString *)uuidString;
- (_INPBValueMetadata *)valueMetadata;

@end
