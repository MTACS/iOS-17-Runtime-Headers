
@interface TFBetaLaunchHandleConfiguration : NSObject <NSCopying> {
    NSString * _bundleIdentifier;
    ASDBetaAppLaunchInfo * _launchInfo;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly) ASDBetaAppLaunchInfo *launchInfo;

+ (id)configurationFromUserInfo:(id)arg1;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)encodedAsUserInfo;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 preloadingLaunchInfo:(id)arg2;
- (id)initWithBundleURL:(id)arg1;
- (id)initWithBundleURL:(id)arg1 preloadingLaunchInfo:(id)arg2;
- (id)launchInfo;

@end
