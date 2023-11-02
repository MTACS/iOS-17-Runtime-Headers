
@interface MKPlaceholder : NSObject {
    NSString * _appStoreIdentifier;
    NSString * _bundleIdentifier;
    NSString * _container;
    NSString * _developer;
    bool  _enabled;
    NSData * _icon;
    NSString * _name;
}

@property (nonatomic, copy) NSString *appStoreIdentifier;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *container;
@property (nonatomic, copy) NSString *developer;
@property (nonatomic) bool enabled;
@property (nonatomic, retain) NSData *icon;
@property (nonatomic, copy) NSString *name;

- (void).cxx_destruct;
- (id)appStoreIdentifier;
- (id)bundleIdentifier;
- (id)container;
- (id)developer;
- (bool)enabled;
- (id)icon;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 appStoreIdentifier:(id)arg2 bundleName:(id)arg3 developer:(id)arg4 icon:(id)arg5;
- (id)initWithJSONData:(id)arg1;
- (id)initWithTestBundleIdentifier;
- (void)install;
- (id)name;
- (void)setAppStoreIdentifier:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setDeveloper:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setIcon:(id)arg1;
- (void)setName:(id)arg1;
- (void)uninstall;

@end
