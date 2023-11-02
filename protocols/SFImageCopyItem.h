
@protocol SFImageCopyItem <SFCopyItem>

@required

- (NSDictionary *)dictionaryRepresentation;
- (SFImage *)image;
- (NSData *)jsonData;
- (void)setImage:(SFImage *)arg1;

@end
