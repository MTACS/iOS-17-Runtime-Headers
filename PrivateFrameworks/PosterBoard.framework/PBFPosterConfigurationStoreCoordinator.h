
@interface PBFPosterConfigurationStoreCoordinator : PBFPosterModelStoreCoordinator

+ (bool)requiresDescriptorIdentifier;
+ (bool)shouldBeExcludedFromBackup;
+ (long long)type;

- (id)_accessQueue_buildIdentityForVersion:(unsigned long long)arg1 supplement:(unsigned long long)arg2;

@end
