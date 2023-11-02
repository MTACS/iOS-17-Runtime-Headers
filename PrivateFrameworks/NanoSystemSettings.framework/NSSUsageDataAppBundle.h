
@interface NSSUsageDataAppBundle : NSObject {
    NSString * _bundleIdentifier;
    NSString * _bundleVersion;
    NSString * _name;
    NSSSizeVector * _size;
    bool  _supportsManualPurge;
    NSString * _vendor;
}

@property (nonatomic, readonly, retain) NSString *bundleIdentifier;
@property (nonatomic, readonly, retain) NSString *bundleVersion;
@property (nonatomic, readonly, retain) NSString *name;
@property (nonatomic, readonly, retain) NSSSizeVector *size;
@property (nonatomic, readonly) bool supportsManualPurge;
@property (nonatomic, readonly, retain) NSString *vendor;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)bundleVersion;
- (id)initWithName:(id)arg1 bundleIdentifier:(id)arg2 bundleVersion:(id)arg3 vendor:(id)arg4 size:(id)arg5 supportsPurge:(bool)arg6;
- (id)mergeWith:(id)arg1;
- (id)name;
- (id)size;
- (bool)supportsManualPurge;
- (id)vendor;
- (id)withSize:(id)arg1 purge:(bool)arg2;

@end
