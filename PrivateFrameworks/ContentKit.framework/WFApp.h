
@interface WFApp : NSObject <NSSecureCoding, WFNaming> {
    NSString * _bundleIdentifier;
    NSString * _localizedName;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly, copy) NSString *wfName;

+ (id)allApps;
+ (id)findAppWithBundleIdentifier:(id)arg1 name:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)bundleURL;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)icon;
- (id)initWithBundleIdentifier:(id)arg1 localizedName:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecord:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFrontmost;
- (bool)isHidden;
- (bool)isRunning;
- (id)launchDate;
- (id)localizedName;
- (id)processIdentifier;
- (id)wfName;

@end
