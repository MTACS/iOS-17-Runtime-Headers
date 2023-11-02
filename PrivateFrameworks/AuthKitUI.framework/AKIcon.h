
@interface AKIcon : NSObject {
    NSString * _bundleID;
    NSData * _data;
    unsigned long long  _maskingStyle;
    NSString * _name;
    double  _scale;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

+ (double)_screenScale;
+ (double)defaultScale;
+ (id)iconWithBundleID:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (id)iconWithData:(id)arg1 scale:(double)arg2;
+ (id)iconWithIconContext:(id)arg1;
+ (id)iconWithName:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (id)iconWithPresentationContext:(id)arg1;

- (void).cxx_destruct;
- (struct CGImage { }*)_CGImageForImage:(id)arg1;
- (id)_applicationProxyForBundleID:(id)arg1;
- (id)_catalogueImageWithName:(id)arg1;
- (id)_dataForImage:(id)arg1;
- (bool)_hasInstalledApplicationWithBundleID:(id)arg1;
- (id)_iconWithImage:(id)arg1;
- (id)_imageWithBundleID:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 masked:(bool)arg3;
- (id)_imageWithData:(id)arg1 scale:(double)arg2 masked:(bool)arg3;
- (id)_imageWithIcon:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 masked:(bool)arg3;
- (id)_imageWithName:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 masked:(bool)arg3;
- (bool)_shouldMaskImage;
- (id)automaskedImage;
- (id)automaskedImageData;
- (unsigned long long)iconType;
- (id)initWithBundleID:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithData:(id)arg1 scale:(double)arg2;
- (id)initWithIconContext:(id)arg1;
- (id)initWithName:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithPresentationContext:(id)arg1;
- (id)maskedImage;
- (id)maskedImageData;
- (id)unmaskedImage;
- (id)unmaskedImageData;

@end
