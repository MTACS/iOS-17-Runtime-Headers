
@interface SNLPSSUApplicationInfo : NSObject {
    NSURL * _assetURL;
    NSString * _bundleIdentifier;
    NSString * _locale;
}

@property (readonly) NSURL *assetURL;
@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSString *locale;

+ (id)applicationInfoWithBundleIdentifier:(id)arg1 assetURL:(id)arg2 forLocale:(id)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (id)assetURL;
- (id)bundleIdentifier;
- (id)description;
- (id)initWithBundleIdentifier:(id)arg1 assetURL:(id)arg2 forLocale:(id)arg3;
- (id)locale;

@end
