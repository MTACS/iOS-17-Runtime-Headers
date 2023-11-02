
@interface ICUserIdentityProperties : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    bool  _active;
    bool  _activeLocker;
    NSString * _alternateDSID;
    NSString * _carrierBundleDeviceIdentifier;
    bool  _cloudBackupEnabled;
    NSDictionary * _cloudLibraryStateReason;
    ICDelegateToken * _delegateToken;
    bool  _delegated;
    NSNumber * _dsid;
    NSString * _firstName;
    NSArray * _homeUserIdentifiers;
    NSString * _iCloudPersonID;
    NSString * _lastName;
    bool  _managedAppleID;
    NSNumber * _mergeToCloudLibraryPreference;
    NSDictionary * _privacyAcknowledgementVersions;
    NSNumber * _privateListeningEnabled;
    NSDictionary * _privateListeningEnabledForHomeUsers;
    bool  _sandboxed;
    NSString * _storefrontIdentifier;
    bool  _subscriptionStatusEnabled;
    NSString * _username;
}

@property (nonatomic, readonly, copy) NSNumber *DSID;
@property (getter=isActive, nonatomic, readonly) bool active;
@property (getter=isActiveLocker, nonatomic, readonly) bool activeLocker;
@property (nonatomic, readonly, copy) NSDate *ageVerificationExpirationDate;
@property (nonatomic, readonly, copy) NSString *alternateDSID;
@property (nonatomic, readonly, copy) NSString *carrierBundleDeviceIdentifier;
@property (getter=isCloudBackupEnabled, nonatomic) bool cloudBackupEnabled;
@property (nonatomic, readonly, copy) NSDictionary *cloudLibraryStateReason;
@property (nonatomic, readonly, copy) ICDelegateToken *delegateToken;
@property (getter=isDelegated, nonatomic, readonly) bool delegated;
@property (nonatomic, readonly, copy) NSString *firstName;
@property (nonatomic, copy) NSArray *homeUserIdentifiers;
@property (setter=setICloudPersonID:, nonatomic, copy) NSString *iCloudPersonID;
@property (nonatomic, readonly, copy) NSString *lastName;
@property (getter=isManagedAppleID, nonatomic, readonly) bool managedAppleID;
@property (nonatomic, readonly, copy) NSNumber *mergeToCloudLibraryPreference;
@property (nonatomic, readonly, copy) NSDictionary *privacyAcknowledgementVersions;
@property (nonatomic, readonly, copy) NSNumber *privateListeningEnabled;
@property (nonatomic, copy) NSDictionary *privateListeningEnabledForHomeUsers;
@property (getter=isSandboxed, nonatomic, readonly) bool sandboxed;
@property (nonatomic, readonly, copy) NSString *storefrontIdentifier;
@property (getter=isSubscriptionStatusEnabled, nonatomic, readonly) bool subscriptionStatusEnabled;
@property (nonatomic, readonly, copy) NSString *username;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)DSID;
- (id)ageVerificationExpirationDate;
- (id)alternateDSID;
- (id)carrierBundleDeviceIdentifier;
- (id)cloudLibraryStateReason;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegateToken;
- (void)encodeWithCoder:(id)arg1;
- (id)firstName;
- (id)homeUserIdentifiers;
- (id)iCloudPersonID;
- (id)initWithCoder:(id)arg1;
- (bool)isActive;
- (bool)isActiveLocker;
- (bool)isCloudBackupEnabled;
- (bool)isDelegated;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToIdentityProperties:(id)arg1;
- (bool)isManagedAppleID;
- (bool)isSandboxed;
- (bool)isSubscriptionStatusEnabled;
- (id)lastName;
- (id)mergeToCloudLibraryPreference;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)privacyAcknowledgementVersions;
- (id)privateListeningEnabled;
- (id)privateListeningEnabledForHomeUsers;
- (void)setCloudBackupEnabled:(bool)arg1;
- (void)setHomeUserIdentifiers:(id)arg1;
- (void)setICloudPersonID:(id)arg1;
- (void)setPrivateListeningEnabledForHomeUsers:(id)arg1;
- (id)storefrontIdentifier;
- (id)username;

@end
