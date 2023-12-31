
@interface TLSystemApplication : NSObject {
    NSString * _bundleIdentifier;
    NSString * _name;
}

@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSString *name;

+ (id)defaultSystemApplication;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)initWithBundleIdentifier:(id)arg1 name:(id)arg2;
- (id)name;

@end
