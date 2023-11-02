
@interface BNImageProvider : NSObject <BNImageProviding> {
    NSURL * _bundleURL;
    UIImage * _image;
    id  _imageSource;
    long long  _imageSourceType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) UIImage *image;
@property (getter=isImageProvider, nonatomic, readonly) bool imageProvider;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithImageSource:(id)arg1 ofType:(long long)arg2 fromBundle:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithImage:(id)arg1;
- (id)initWithImageName:(id)arg1;
- (id)initWithImageName:(id)arg1 fromBundle:(id)arg2;
- (id)initWithSystemImageName:(id)arg1;
- (bool)isImageProvider;

@end
