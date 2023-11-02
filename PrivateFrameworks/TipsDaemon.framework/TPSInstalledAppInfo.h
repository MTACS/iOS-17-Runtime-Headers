
@interface TPSInstalledAppInfo : TPSSerializableObject {
    NSString * _bundleID;
    NSString * _maxVersion;
    NSString * _minVersion;
}

@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, copy) NSString *maxVersion;
@property (nonatomic, copy) NSString *minVersion;

- (void).cxx_destruct;
- (id)bundleID;
- (id)debugDescription;
- (id)initWithDictionary:(id)arg1;
- (id)maxVersion;
- (id)minVersion;
- (void)setBundleID:(id)arg1;
- (void)setMaxVersion:(id)arg1;
- (void)setMinVersion:(id)arg1;

@end
