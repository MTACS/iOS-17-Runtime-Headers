
@interface NTKFaceDescriptor : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleIdentifier;
    long long  _faceStyle;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) Class faceClass;
@property (nonatomic, readonly) long long faceStyle;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithFaceStyle:(long long)arg1 bundleIdentifier:(id)arg2;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (Class)faceClass;
- (long long)faceStyle;
- (unsigned long long)hash;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFaceStyle:(long long)arg1;
- (bool)isAvailableForDevice:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
