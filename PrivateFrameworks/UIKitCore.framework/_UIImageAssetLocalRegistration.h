
@interface _UIImageAssetLocalRegistration : NSObject {
    UIImageConfiguration * _configuration;
    UIImage * _image;
}

@property (nonatomic, retain) UIImageConfiguration *configuration;
@property (nonatomic, retain) UIImage *image;

+ (id)registrationWithImage:(id)arg1 configuration:(id)arg2;

- (void).cxx_destruct;
- (id)configuration;
- (id)image;
- (bool)matchesConfiguration:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setImage:(id)arg1;

@end
