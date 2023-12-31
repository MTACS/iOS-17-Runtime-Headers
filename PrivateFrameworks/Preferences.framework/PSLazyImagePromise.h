
@interface PSLazyImagePromise : NSObject {
    UIImage * _image;
    NSBundle * _imageBundle;
    bool  _imageLoaded;
    NSString * _imageName;
    NSString * _imagePath;
    id /* block */  _loadBlock;
}

@property (nonatomic, readonly) UIImage *image;
@property (getter=isImageLoaded, nonatomic, readonly) bool imageLoaded;

+ (id)imagePromiseWithImageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)imagePromiseWithImagePath:(id)arg1;
+ (id)imagePromiseWithLoadBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)image;
- (bool)isImageLoaded;
- (void)loadImage;

@end
