
@protocol SFURLImage <SFImage>

@required

- (NSURL *)darkUrlValue;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setDarkUrlValue:(NSURL *)arg1;
- (void)setUrlValue:(NSURL *)arg1;
- (NSURL *)urlValue;

@end
