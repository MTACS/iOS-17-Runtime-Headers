
@protocol SFImageDerivedColor <SFColor>

@required

- (NSDictionary *)dictionaryRepresentation;
- (SFImage *)image;
- (NSData *)jsonData;
- (void)setImage:(SFImage *)arg1;

@end
