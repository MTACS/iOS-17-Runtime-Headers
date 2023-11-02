
@interface CDPUIInheritanceAppAccessDetails : NSObject {
    NSString * _accessString;
    UIImage * _appIcon;
    NSString * _appName;
    NSString * _bundleID;
}

@property (nonatomic, copy) NSString *accessString;
@property (nonatomic, readonly) UIImage *appIcon;
@property (nonatomic, readonly) NSString *appName;
@property (nonatomic, readonly) NSString *bundleID;

- (void).cxx_destruct;
- (void)_prepareIcon;
- (id)accessString;
- (id)appIcon;
- (id)appName;
- (id)bundleID;
- (id)initWithBundleID:(id)arg1;
- (id)initWithBundleID:(id)arg1 accessString:(id)arg2;
- (void)setAccessString:(id)arg1;

@end
