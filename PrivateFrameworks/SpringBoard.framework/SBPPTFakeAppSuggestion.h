
@interface SBPPTFakeAppSuggestion : SBBestAppSuggestion {
    NSString * _bundleIdentifier;
    NSUUID * _uuid;
}

- (void).cxx_destruct;
- (id)activityType;
- (id)bundleIdentifier;
- (unsigned long long)hash;
- (id)initWithBundleIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)originatingDeviceName;
- (id)originatingDeviceType;
- (id)suggestedLocationName;
- (id)uniqueIdentifier;

@end
