
@interface REUIDonatedElementDemoProperties : REUIDonatedElementProperties {
    UIImage * _demoAppIcon;
    NSString * _demoAppName;
    NSString * _demoBundleIdentifier;
    INIntent * _demoIntent;
}

+ (id)createWithIntent:(id)arg1 bundleIdentifier:(id)arg2 appName:(id)arg3 appIcon:(id)arg4;

- (void).cxx_destruct;
- (id)appIcon;
- (id)appName;
- (id)bundleIdentifier;
- (id)intent;

@end
