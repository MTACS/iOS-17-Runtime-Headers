
@interface UNCSectionIconVariant : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundlePath;
    long long  _format;
    id  _imageInfo;
    long long  _imageInfoType;
    bool  _precomposed;
}

@property (nonatomic, copy) NSString *applicationIdentifier;
@property (nonatomic, copy) NSString *bundlePath;
@property (nonatomic) long long format;
@property (nonatomic, copy) NSData *imageData;
@property (nonatomic, copy) NSString *imageName;
@property (nonatomic, copy) NSString *imagePath;
@property (getter=isPrecomposed, nonatomic) bool precomposed;
@property (nonatomic, copy) NSString *systemImageName;

+ (bool)supportsSecureCoding;
+ (id)variantWithFormat:(long long)arg1 applicationIdentifier:(id)arg2;
+ (id)variantWithFormat:(long long)arg1 imageData:(id)arg2;
+ (id)variantWithFormat:(long long)arg1 imageName:(id)arg2 inBundle:(id)arg3;
+ (id)variantWithFormat:(long long)arg1 imageName:(id)arg2 inBundleAtPath:(id)arg3;
+ (id)variantWithFormat:(long long)arg1 imagePath:(id)arg2;
+ (id)variantWithFormat:(long long)arg1 systemImageName:(id)arg2;

- (void).cxx_destruct;
- (id)_processImageInfo:(id)arg1 imageInfoType:(long long)arg2;
- (void)_setImageInfo:(id)arg1 ofType:(long long)arg2;
- (id)applicationIdentifier;
- (id)bundlePath;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)format;
- (unsigned long long)hash;
- (id)imageData;
- (id)imageName;
- (id)imagePath;
- (id)initWithCoder:(id)arg1;
- (id)initWithFormat:(long long)arg1 imageInfo:(id)arg2 imageInfoType:(long long)arg3 bundlePath:(id)arg4 precomposed:(bool)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isPrecomposed;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setBundlePath:(id)arg1;
- (void)setFormat:(long long)arg1;
- (void)setImageData:(id)arg1;
- (void)setImageName:(id)arg1;
- (void)setImagePath:(id)arg1;
- (void)setPrecomposed:(bool)arg1;
- (void)setSystemImageName:(id)arg1;
- (id)systemImageName;

@end
