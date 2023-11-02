
@interface _HKSourceAliasMapping : NSObject {
    NSString * _aliasName;
    NSString * _bundleIdentifierForIcon;
    NSString * _bundleIdentifierForInstallationStatus;
}

@property (nonatomic, copy) NSString *aliasName;
@property (nonatomic, copy) NSString *bundleIdentifierForIcon;
@property (nonatomic, copy) NSString *bundleIdentifierForInstallationStatus;

- (void).cxx_destruct;
- (id)aliasName;
- (id)bundleIdentifierForIcon;
- (id)bundleIdentifierForInstallationStatus;
- (void)setAliasName:(id)arg1;
- (void)setBundleIdentifierForIcon:(id)arg1;
- (void)setBundleIdentifierForInstallationStatus:(id)arg1;

@end
