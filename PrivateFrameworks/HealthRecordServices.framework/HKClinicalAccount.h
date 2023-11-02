
@interface HKClinicalAccount : NSObject <HKClinicalBrandable, NSCopying, NSSecureCoding> {
    HKClinicalSharingStatus * _clinicalSharingStatus;
    NSNumber * _failedFetchAttemptsCount;
    bool  _hasClinicalSharingScopes;
    NSUUID * _identifier;
    NSDate * _lastFailedFetchDate;
    NSDate * _lastFetchDate;
    NSDate * _lastFullFetchDate;
    HKClinicalAccountProvenance * _provenance;
    long long  _state;
    bool  _userEnabled;
}

@property (nonatomic, readonly, copy) HKClinicalBrand *brand;
@property (nonatomic, readonly) bool canEnableSharingToProvider;
@property (nonatomic, readonly, copy) HKClinicalSharingStatus *clinicalSharingStatus;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *displayableLastDownloadDate;
@property (nonatomic, readonly) NSString *displayableLastSharedToProviderDate;
@property (nonatomic, readonly) NSString *displayableSharingSinceTitle;
@property (nonatomic, readonly) NSString *displayableStatus;
@property (nonatomic, readonly, copy) NSNumber *failedFetchAttemptsCount;
@property (nonatomic, readonly, copy) HKClinicalGateway *gateway;
@property (nonatomic, readonly) bool hasClinicalSharingScopes;
@property (nonatomic, readonly) bool hasLogo;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly) bool isSharingToProvider;
@property (nonatomic, readonly) bool isSourceType;
@property (nonatomic, readonly, copy) NSDate *lastFailedFetchDate;
@property (nonatomic, readonly, copy) NSDate *lastFetchDate;
@property (nonatomic, readonly, copy) NSDate *lastFullFetchDate;
@property (nonatomic, readonly) bool needsLogin;
@property (nonatomic, readonly) bool needsLoginToEnableClinicalSharing;
@property (nonatomic, readonly) bool needsRelogin;
@property (nonatomic, readonly) bool needsScopeUpgrade;
@property (nonatomic, readonly, copy) HKClinicalGatewayReference *newerAvailableGateway;
@property (nonatomic, readonly, copy) HKClinicalAccountProvenance *provenance;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;
@property (getter=isUserEnabled, nonatomic, readonly) bool userEnabled;
@property (nonatomic, readonly) bool wantsGatewayUpgrade;

// Image: /System/Library/PrivateFrameworks/HealthRecordServices.framework/HealthRecordServices

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)brand;
- (id)clinicalSharingStatus;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)failedFetchAttemptsCount;
- (id)gateway;
- (bool)hasClinicalSharingScopes;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 state:(long long)arg2 userEnabled:(bool)arg3 lastFetchDate:(id)arg4 lastFullFetchDate:(id)arg5 lastFailedFetchDate:(id)arg6 failedFetchAttemptsCount:(id)arg7 clinicalSharingStatus:(id)arg8 hasClinicalSharingScopes:(bool)arg9 provenance:(id)arg10;
- (bool)isEqual:(id)arg1;
- (bool)isUserEnabled;
- (id)lastFailedFetchDate;
- (id)lastFetchDate;
- (id)lastFullFetchDate;
- (bool)needsRelogin;
- (bool)needsScopeUpgrade;
- (id)newerAvailableGateway;
- (id)provenance;
- (long long)state;
- (id)subtitle;
- (id)title;

// Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI

- (bool)canEnableSharingToProvider;
- (id)displayableLastDownloadDate;
- (id)displayableLastSharedToProviderDate;
- (id)displayableSharingSinceTitle;
- (id)displayableStatus;
- (bool)hasLogo;
- (bool)isSharingToProvider;
- (bool)isSourceType;
- (bool)needsLogin;
- (bool)needsLoginToEnableClinicalSharing;
- (bool)wantsGatewayUpgrade;

@end
