
@interface PPTTLDeletionPolicyRule : NSObject {
    NSString * _bundleIdentifier;
    NSString * _groupIdentifier;
    NSNumber * _maxAgeSeconds;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *groupIdentifier;
@property (nonatomic, readonly) NSNumber *maxAgeSeconds;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)description;
- (id)groupIdentifier;
- (id)initWithBundleIdentifier:(id)arg1 groupIdentifier:(id)arg2 maxAgeSeconds:(id)arg3;
- (id)maxAgeSeconds;

@end
