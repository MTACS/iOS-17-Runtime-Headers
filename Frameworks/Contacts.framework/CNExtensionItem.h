
@interface CNExtensionItem : NSObject <NSCopying, NSSecureCoding> {
    NSString * _appName;
    NSString * _bundleIdentifier;
    bool  _enabled;
}

@property (nonatomic, retain) NSString *appName;
@property (nonatomic, retain) NSString *bundleIdentifier;
@property (getter=isEnabled, nonatomic) bool enabled;

+ (id)itemWithBundleIdentifer:(id)arg1 appName:(id)arg2 enabled:(bool)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appName;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (void)setAppName:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setEnabled:(bool)arg1;

@end
