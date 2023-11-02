
@interface _PKProvisioningSEStorageSnapshot : NSObject <NSSecureCoding> {
    void snapshot;
}

+ (id)purpleTrustAirAccessAppletType;
+ (id)purpleTrustAirHomeAppletType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)addToSnapshotWithAppletTypes:(id)arg1;
- (id)appletTypesForAppletIDs:(id)arg1;
- (bool)canFitWithAppletTypes:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)removeFromSnapshotWithAppletTypes:(id)arg1;
- (long long)requiredStorageForAppletTypes:(id)arg1;
- (void)reset;
- (long long)totalStorage;
- (long long)totalUsage;
- (long long)totalUsageOfAppletType:(id)arg1;
- (long long)usageOfAppletType:(id)arg1;

@end
