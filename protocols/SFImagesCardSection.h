
@protocol SFImagesCardSection <SFCardSection>

@required

- (bool)borderless;
- (NSDictionary *)dictionaryRepresentation;
- (NSArray *)images;
- (NSData *)jsonData;
- (void)setBorderless:(bool)arg1;
- (void)setImages:(NSArray *)arg1;
- (void)setType:(NSString *)arg1;
- (NSString *)type;

@end
