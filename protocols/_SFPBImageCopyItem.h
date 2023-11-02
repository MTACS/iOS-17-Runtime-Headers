
@protocol _SFPBImageCopyItem <NSObject>

@required

- (_SFPBImage *)image;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setImage:(_SFPBImage *)arg1;

@end
