
@protocol SFMapCardSection <SFCardSection>

@required

- (SFMapRegion *)boundingMapRegion;
- (NSDictionary *)dictionaryRepresentation;
- (NSString *)footnote;
- (NSString *)footnoteLabel;
- (bool)interactive;
- (NSData *)jsonData;
- (SFLatLng *)location;
- (int)pinBehavior;
- (SFColor *)pinColor;
- (NSArray *)pins;
- (void)setBoundingMapRegion:(SFMapRegion *)arg1;
- (void)setFootnote:(NSString *)arg1;
- (void)setFootnoteLabel:(NSString *)arg1;
- (void)setInteractive:(bool)arg1;
- (void)setLocation:(SFLatLng *)arg1;
- (void)setPinBehavior:(int)arg1;
- (void)setPinColor:(SFColor *)arg1;
- (void)setPins:(NSArray *)arg1;
- (void)setSizeFormat:(int)arg1;
- (void)setType:(NSString *)arg1;
- (int)sizeFormat;
- (NSString *)type;

@end
