
@protocol _SFPBPerformEntityQueryCommand <NSObject>

@required

- (_SFPBDrillDownMetadata *)drilldownMetadata;
- (_SFPBColor *)entityBackgroundColor;
- (NSString *)entityIdentifier;
- (int)entityType;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (_SFPBDrillDownMetadata *)metadata;
- (NSString *)searchString;
- (void)setDrilldownMetadata:(_SFPBDrillDownMetadata *)arg1;
- (void)setEntityBackgroundColor:(_SFPBColor *)arg1;
- (void)setEntityIdentifier:(NSString *)arg1;
- (void)setEntityType:(int)arg1;
- (void)setMetadata:(_SFPBDrillDownMetadata *)arg1;
- (void)setSearchString:(NSString *)arg1;
- (void)setSymbolImage:(_SFPBSymbolImage *)arg1;
- (void)setTokenString:(NSString *)arg1;
- (_SFPBSymbolImage *)symbolImage;
- (NSString *)tokenString;

@end
