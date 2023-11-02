
@interface PKProvisioningSEStorageSnapshot : NSObject <NSSecureCoding> {
    _PKProvisioningSEStorageSnapshot * _snapshot;
}

+ (id)appletTypePurpleTrustAirAccess;
+ (id)appletTypePurpleTrustAirHome;
+ (void)getCurrentSnapshot:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithSnapshot:(id)arg1;
- (bool)addAppletTypesToSnapshot:(id)arg1;
- (id)appletTypesForAppletIDs:(id)arg1;
- (bool)canFitAppletTypes:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)removeAppletTypesFromSnapshot:(id)arg1;
- (long long)requiredStorageForAppletTypes:(id)arg1;
- (void)reset;
- (long long)totalStorage;
- (long long)totalUsage;
- (long long)totalUsageOfAppletType:(id)arg1;
- (long long)usageOfAppletType:(id)arg1;

@end
