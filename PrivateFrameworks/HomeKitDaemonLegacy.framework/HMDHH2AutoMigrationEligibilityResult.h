
@interface HMDHH2AutoMigrationEligibilityResult : HMFObject {
    bool  _eligible;
    bool  _hasOnlyEmptyHomes;
    unsigned long long  _iCloudAccountStatus;
    unsigned long long  _numberOwnedNonEmptyHomes;
    unsigned long long  _numberOwnedSharedHomes;
    unsigned long long  _numberUnownedSharedHomes;
    unsigned long long  _status;
    unsigned long long  _unsupportedDevices;
}

@property (getter=isEligible, readonly) bool eligible;
@property (readonly) bool hasOnlyEmptyHomes;
@property (readonly) unsigned long long iCloudAccountStatus;
@property (readonly) unsigned long long numberOwnedNonEmptyHomes;
@property (readonly) unsigned long long numberOwnedSharedHomes;
@property (readonly) unsigned long long numberUnownedSharedHomes;
@property (readonly) unsigned long long status;
@property (readonly) unsigned long long unsupportedDevices;

- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)hasOnlyEmptyHomes;
- (unsigned long long)iCloudAccountStatus;
- (id)initWithStatus:(unsigned long long)arg1 iCloudAccountStatus:(unsigned long long)arg2 unsupportedDevices:(unsigned long long)arg3 hasOnlyEmptyHomes:(bool)arg4 numberOwnedNonEmptyHomes:(unsigned long long)arg5 numberUnownedSharedHomes:(unsigned long long)arg6 numberOwnedSharedHomes:(unsigned long long)arg7;
- (bool)isEligible;
- (bool)isEqual:(id)arg1;
- (unsigned long long)numberOwnedNonEmptyHomes;
- (unsigned long long)numberOwnedSharedHomes;
- (unsigned long long)numberUnownedSharedHomes;
- (unsigned long long)status;
- (unsigned long long)unsupportedDevices;

@end
