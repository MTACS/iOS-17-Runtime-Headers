
@interface CPNowPlayingImageButton : CPNowPlayingButton {
    CPImageSet * _imageSet;
}

@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, retain) CPImageSet *imageSet;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)image;
- (id)imageSet;
- (id)initWithCoder:(id)arg1;
- (id)initWithImage:(id)arg1 handler:(id /* block */)arg2;
- (void)setImageSet:(id)arg1;

@end
