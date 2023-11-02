
@interface PKPaymentSetupProductImageAssets : NSObject <NSCopying> {
    struct CGImage { } * _digitalCardImage;
    struct CGImage { } * _logoImage;
    struct CGImage { } * _plasticCardImage;
    struct CGImage { } * _thumbnailImage;
}

@property (nonatomic) struct CGImage { }*digitalCardImage;
@property (nonatomic) struct CGImage { }*logoImage;
@property (nonatomic) struct CGImage { }*plasticCardImage;
@property (nonatomic) struct CGImage { }*thumbnailImage;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (struct CGImage { }*)digitalCardImage;
- (struct CGImage { }*)logoImage;
- (struct CGImage { }*)plasticCardImage;
- (void)setDigitalCardImage:(struct CGImage { }*)arg1;
- (void)setLogoImage:(struct CGImage { }*)arg1;
- (void)setPlasticCardImage:(struct CGImage { }*)arg1;
- (void)setThumbnailImage:(struct CGImage { }*)arg1;
- (struct CGImage { }*)thumbnailImage;

@end
