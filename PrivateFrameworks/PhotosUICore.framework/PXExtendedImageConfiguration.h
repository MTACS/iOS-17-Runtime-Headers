
@interface PXExtendedImageConfiguration : NSObject {
    NSBundle * _bundle;
    UIImageConfiguration * _imageConfiguration;
    NSString * _imageName;
    bool  _isSystemImage;
    UIColor * _tintColor;
}

@property (nonatomic, readonly) NSBundle *bundle;
@property (nonatomic, readonly) UIImageConfiguration *imageConfiguration;
@property (nonatomic, readonly) NSString *imageName;
@property (nonatomic, readonly) bool isSystemImage;
@property (nonatomic, readonly) UIColor *tintColor;

- (void).cxx_destruct;
- (id)bundle;
- (id)imageConfiguration;
- (id)imageName;
- (id)init;
- (id)initWithImageName:(id)arg1;
- (id)initWithImageName:(id)arg1 isSystemImage:(bool)arg2;
- (id)initWithImageName:(id)arg1 isSystemImage:(bool)arg2 tintColor:(id)arg3 imageConfiguration:(id)arg4 inBundle:(id)arg5;
- (bool)isSystemImage;
- (id)tintColor;

@end
