
@interface GKAvatarImage : NSObject {
    UIImage * _image;
    NSData * _imageData;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) NSData *imageData;

- (void).cxx_destruct;
- (id)image;
- (id)imageData;
- (id)initWithPNGData:(id)arg1 useUIImage:(bool)arg2;
- (void)prepareForUsingUIImage:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setImageData:(id)arg1;

@end
