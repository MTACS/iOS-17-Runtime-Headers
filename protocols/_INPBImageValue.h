
@protocol _INPBImageValue <NSObject>

@required

- (int)StringAsRenderingMode:(NSString *)arg1;
- (int)StringAsType:(NSString *)arg1;
- (NSData *)data;
- (bool)hasData;
- (bool)hasHeight;
- (bool)hasProxyServiceIdentifier;
- (bool)hasRenderingMode;
- (bool)hasType;
- (bool)hasUri;
- (bool)hasValueMetadata;
- (bool)hasWidth;
- (double)height;
- (NSString *)proxyServiceIdentifier;
- (int)renderingMode;
- (NSString *)renderingModeAsString:(int)arg1;
- (void)setData:(NSData *)arg1;
- (void)setHasHeight:(bool)arg1;
- (void)setHasRenderingMode:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setHasWidth:(bool)arg1;
- (void)setHeight:(double)arg1;
- (void)setProxyServiceIdentifier:(NSString *)arg1;
- (void)setRenderingMode:(int)arg1;
- (void)setType:(int)arg1;
- (void)setUri:(NSString *)arg1;
- (void)setValueMetadata:(_INPBValueMetadata *)arg1;
- (void)setWidth:(double)arg1;
- (int)type;
- (NSString *)typeAsString:(int)arg1;
- (NSString *)uri;
- (_INPBValueMetadata *)valueMetadata;
- (double)width;

@end
