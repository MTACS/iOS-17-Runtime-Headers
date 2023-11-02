
@interface MCUIAppSigner : NSObject {
    long long  _almostUntrustedAppCount;
    NSArray * _applications;
    NSString * _displayName;
    bool  _hasFreePP;
    bool  _hasUniversalPP;
    NSString * _identity;
    NSArray * _provisioningProfiles;
    long long  _untrustedAppCount;
}

@property (nonatomic, readonly) long long almostUntrustedAppCount;
@property (nonatomic, readonly) NSArray *applications;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) bool hasFreePP;
@property (nonatomic, readonly) bool hasUniversalPP;
@property (nonatomic, readonly) NSString *identity;
@property (nonatomic, readonly) bool isTrusted;
@property (nonatomic, readonly) NSArray *provisioningProfiles;
@property (nonatomic, readonly) long long untrustedAppCount;

+ (void)_addProfile:(id)arg1 toSignerIdentity:(id)arg2 inDictionary:(id)arg3;
+ (id)_displayNameFromIdentity:(id)arg1 hasFreePP:(bool)arg2 hasUPP:(bool)arg3;
+ (id)_uppProfilesBySignerIDWithOutFreeDevProfilesBySignerID:(id*)arg1;
+ (id)enterpriseAppSignersWithOutDeveloperAppSigners:(id*)arg1;

- (void).cxx_destruct;
- (void)_updateUntrustedAppCountsForBundleIDs:(id)arg1;
- (long long)almostUntrustedAppCount;
- (id)applications;
- (id)displayName;
- (bool)hasFreePP;
- (bool)hasUniversalPP;
- (id)identity;
- (id)initWithIdentity:(id)arg1 applications:(id)arg2 provisioningProfiles:(id)arg3 hasUPP:(bool)arg4 hasFreePP:(bool)arg5;
- (bool)isTrusted;
- (void)main_removeMCUIReferenceForBundleID:(id)arg1;
- (id)provisioningProfiles;
- (void)refreshApplications;
- (void)setIdentity:(id)arg1;
- (long long)untrustedAppCount;

@end
