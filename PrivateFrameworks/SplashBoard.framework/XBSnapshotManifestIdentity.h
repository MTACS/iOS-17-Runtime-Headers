
@interface XBSnapshotManifestIdentity : NSObject <NSCopying> {
    NSString * _bundleIdentifier;
    <XBSnapshotManifestStore> * _store;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSString *defaultGroupIdentifier;
@property (nonatomic, readonly, copy) <XBSnapshotManifestStore> *store;

+ (id)identityWithBundleIdentifier:(id)arg1 store:(id)arg2;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultGroupIdentifier;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1 store:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)store;

@end
