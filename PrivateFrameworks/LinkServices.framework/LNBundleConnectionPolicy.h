
@interface LNBundleConnectionPolicy : NSObject <NSCopying> {
    NSString * _appBundleIdentifier;
    NSString * _bundleIdentifier;
}

@property (nonatomic, readonly, copy) NSString *appBundleIdentifier;
@property (nonatomic, readonly) NSString *bundleIdentifier;

- (void).cxx_destruct;
- (id)appBundleIdentifier;
- (id)bundleIdentifier;
- (id)connectionWithError:(id*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithBundleIdentifier:(id)arg1 appBundleIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
