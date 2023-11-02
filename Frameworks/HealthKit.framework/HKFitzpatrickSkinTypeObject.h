
@interface HKFitzpatrickSkinTypeObject : NSObject <NSCopying, NSSecureCoding> {
    long long  _skinType;
}

@property (readonly) long long skinType;

+ (bool)supportsSecureCoding;

- (id)_initWithSkinType:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)skinType;

@end