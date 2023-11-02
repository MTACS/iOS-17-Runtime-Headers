
@interface RERecentActionRelevanceProvider : RERelevanceProvider {
    unsigned long long  _actionIdentifier;
    NSString * _bundleIdentifier;
}

@property (nonatomic, readonly) unsigned long long actionIdentifier;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) RERecentAction *recentAction;

- (void).cxx_destruct;
- (unsigned long long)_hash;
- (unsigned long long)actionIdentifier;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1 actionIdentifier:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)recentAction;

@end
