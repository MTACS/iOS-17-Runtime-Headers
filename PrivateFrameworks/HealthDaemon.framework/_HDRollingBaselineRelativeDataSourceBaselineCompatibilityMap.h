
@interface _HDRollingBaselineRelativeDataSourceBaselineCompatibilityMap : NSObject {
    NSMutableDictionary * _bundleIDBySourceID;
    NSDictionary * _canonicalBundleIDByBundleID;
    HDProfile * _profile;
}

+ (id)_canonicalSleepingWristTemperatureBundleIDByBundleIDWithProfile:(id)arg1;

- (void).cxx_destruct;
- (id)_bundleIDForSourceID:(long long)arg1 error:(id*)arg2;
- (id)baselineCompatibilityIDForSourceID:(long long)arg1;
- (id)initWithProfile:(id)arg1 quantityType:(id)arg2;
- (id)predicateForDataEntitiesWithSourceIDsCompatibleWithSourceID:(long long)arg1;

@end
