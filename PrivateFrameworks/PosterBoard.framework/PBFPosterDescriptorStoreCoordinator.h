
@interface PBFPosterDescriptorStoreCoordinator : PBFPosterModelStoreCoordinator {
    NSString * _descriptorIdentifier;
    NSURL * _descriptorIdentifierURL;
}

+ (bool)shouldBeExcludedFromBackup;
+ (long long)type;

- (void).cxx_destruct;
- (id)_accessQueue_buildIdentityForVersion:(unsigned long long)arg1 supplement:(unsigned long long)arg2;

@end
