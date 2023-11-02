
@interface ISSetApplicationBadgeOperation : ISOperation {
    NSString * _badgeValue;
    NSString * _bundleIdentifier;
}

@property (retain) NSString *badgeValue;
@property (retain) NSString *bundleIdentifier;

- (void).cxx_destruct;
- (id)badgeValue;
- (id)bundleIdentifier;
- (void)run;
- (void)setBadgeValue:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (id)uniqueKey;

@end
