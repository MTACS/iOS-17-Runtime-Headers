
@protocol SFPerformEntityQueryCommand <SFCommand>

@required

- (NSDictionary *)dictionaryRepresentation;
- (SFDrillDownMetadata *)drilldownMetadata;
- (SFColor *)entityBackgroundColor;
- (NSString *)entityIdentifier;
- (int)entityType;
- (NSData *)jsonData;
- (SFDrillDownMetadata *)metadata;
- (NSString *)searchString;
- (void)setDrilldownMetadata:(SFDrillDownMetadata *)arg1;
- (void)setEntityBackgroundColor:(SFColor *)arg1;
- (void)setEntityIdentifier:(NSString *)arg1;
- (void)setEntityType:(int)arg1;
- (void)setMetadata:(SFDrillDownMetadata *)arg1;
- (void)setSearchString:(NSString *)arg1;
- (void)setSymbolImage:(SFSymbolImage *)arg1;
- (void)setTokenString:(NSString *)arg1;
- (SFSymbolImage *)symbolImage;
- (NSString *)tokenString;

@end
