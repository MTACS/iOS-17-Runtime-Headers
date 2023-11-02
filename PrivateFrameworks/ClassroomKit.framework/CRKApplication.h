
@interface CRKApplication : NSObject <NSSecureCoding> {
    NSData * _badgeIconData;
    NSString * _bundleIdentifier;
    NSData * _iconData;
    NSString * _name;
    NSString * _shortVersionString;
}

@property (nonatomic, retain) NSData *badgeIconData;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, retain) NSData *iconData;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *shortVersionString;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)badgeIconData;
- (id)bundleIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)iconData;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (void)setBadgeIconData:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setIconData:(id)arg1;
- (void)setName:(id)arg1;
- (void)setShortVersionString:(id)arg1;
- (id)shortVersionString;

@end
