
@interface NCAppPickerContentProviderAppObject : NSObject {
    unsigned long long  _avgNumberOfNotifications;
    NSString * _bundleIdentifier;
    NSString * _name;
}

@property (nonatomic) unsigned long long avgNumberOfNotifications;
@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, retain) NSString *name;

- (void).cxx_destruct;
- (unsigned long long)avgNumberOfNotifications;
- (id)bundleIdentifier;
- (id)name;
- (void)setAvgNumberOfNotifications:(unsigned long long)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setName:(id)arg1;

@end
