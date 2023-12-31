
@protocol _INPBURLValue <NSObject>

@required

- (NSString *)absoluteString;
- (bool)hasAbsoluteString;
- (bool)hasScope;
- (bool)hasValueMetadata;
- (NSData *)scope;
- (void)setAbsoluteString:(NSString *)arg1;
- (void)setScope:(NSData *)arg1;
- (void)setValueMetadata:(_INPBValueMetadata *)arg1;
- (_INPBValueMetadata *)valueMetadata;

@end
