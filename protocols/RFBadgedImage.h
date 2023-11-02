
@protocol RFBadgedImage <NSObject>

@required

- (RFImageSource *)badge;
- (NSDictionary *)dictionaryRepresentation;
- (RFImageSource *)image;
- (NSData *)jsonData;
- (void)setBadge:(RFImageSource *)arg1;
- (void)setImage:(RFImageSource *)arg1;

@end
