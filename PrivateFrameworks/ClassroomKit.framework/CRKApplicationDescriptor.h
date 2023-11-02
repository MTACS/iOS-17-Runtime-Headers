
@interface CRKApplicationDescriptor : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleIdentifier;
    bool  _includeBadgeIcon;
    bool  _includeIcon;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly) bool includeBadgeIcon;
@property (nonatomic, readonly) bool includeIcon;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (bool)includeBadgeIcon;
- (bool)includeIcon;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1 includeIcon:(bool)arg2 includeBadgeIcon:(bool)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToApplicationDescriptor:(id)arg1;

@end
