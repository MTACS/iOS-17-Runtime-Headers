
@interface RERecentAction : NSObject <NSCopying> {
    unsigned long long  _actionIdentifier;
    NSString * _bundleIdentifier;
}

@property (nonatomic) unsigned long long actionIdentifier;
@property (nonatomic, retain) NSString *bundleIdentifier;

+ (id)actionWithBundleIdentifier:(id)arg1 actionIdentifier:(unsigned long long)arg2;

- (void).cxx_destruct;
- (unsigned long long)actionIdentifier;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setActionIdentifier:(unsigned long long)arg1;
- (void)setBundleIdentifier:(id)arg1;

@end
