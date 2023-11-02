
@interface _MXBundleBlacklistEntry : NSObject {
    NSString * _bundleIdentifier;
    _MXVersion * _maximum;
    _MXVersion * _minimum;
}

+ (id)blacklistEntriesFromDefaultsValue:(id)arg1;

- (void).cxx_destruct;
- (bool)_isVersionValueAllowed:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 minimumDisallowedVersion:(id)arg2 maximumDisallowedVersion:(id)arg3;
- (bool)isBundleRecordAllowed:(id)arg1;
- (bool)isExtensionAllowed:(id)arg1;

@end
