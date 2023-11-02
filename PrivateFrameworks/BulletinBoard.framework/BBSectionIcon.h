
@interface BBSectionIcon : NSObject <NSCopying, NSSecureCoding> {
    NSSet * _variants;
}

@property (nonatomic, copy) NSSet *variants;

// Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_bestVariantForFormat:(long long)arg1;
- (void)addVariant:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setVariants:(id)arg1;
- (id)variants;

// Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit

- (id)nc_imageForFormat:(long long)arg1 scale:(double)arg2;

@end
