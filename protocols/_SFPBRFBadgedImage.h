
@protocol _SFPBRFBadgedImage <NSObject>

@required

- (_SFPBRFImageSource *)badge;
- (_SFPBRFImageSource *)image;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setBadge:(_SFPBRFImageSource *)arg1;
- (void)setImage:(_SFPBRFImageSource *)arg1;

@end
