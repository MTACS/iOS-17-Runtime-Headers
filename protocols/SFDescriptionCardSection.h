
@protocol SFDescriptionCardSection <SFTitleCardSection>

@required

- (SFImage *)attributionGlyph;
- (NSString *)attributionText;
- (NSURL *)attributionURL;
- (bool)descriptionExpand;
- (NSNumber *)descriptionSize;
- (SFText *)descriptionText;
- (NSNumber *)descriptionWeight;
- (NSDictionary *)dictionaryRepresentation;
- (NSString *)expandText;
- (SFImage *)image;
- (int)imageAlign;
- (NSData *)jsonData;
- (NSArray *)richDescriptions;
- (void)setAttributionGlyph:(SFImage *)arg1;
- (void)setAttributionText:(NSString *)arg1;
- (void)setAttributionURL:(NSURL *)arg1;
- (void)setDescriptionExpand:(bool)arg1;
- (void)setDescriptionSize:(NSNumber *)arg1;
- (void)setDescriptionText:(SFText *)arg1;
- (void)setDescriptionWeight:(NSNumber *)arg1;
- (void)setExpandText:(NSString *)arg1;
- (void)setImage:(SFImage *)arg1;
- (void)setImageAlign:(int)arg1;
- (void)setRichDescriptions:(NSArray *)arg1;
- (void)setTextAlign:(int)arg1;
- (void)setTitleNoWrap:(bool)arg1;
- (void)setTitleWeight:(NSNumber *)arg1;
- (int)textAlign;
- (bool)titleNoWrap;
- (NSNumber *)titleWeight;

@end
