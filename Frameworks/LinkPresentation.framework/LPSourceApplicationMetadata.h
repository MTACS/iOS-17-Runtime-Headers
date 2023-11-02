
@interface LPSourceApplicationMetadata : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleIdentifier;
    LPImage * _icon;
    NSString * _name;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, retain) LPImage *icon;
@property (nonatomic, copy) NSString *name;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)icon;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)setBundleIdentifier:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setName:(id)arg1;

@end
