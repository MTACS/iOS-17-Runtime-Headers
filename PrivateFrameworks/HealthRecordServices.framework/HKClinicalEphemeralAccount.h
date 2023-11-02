
@interface HKClinicalEphemeralAccount : HKClinicalAccount <NSCopying, NSSecureCoding> {
    HDFHIRAuthResponse * _authResponse;
    NSString * _requestedScopeString;
}

@property (nonatomic, readonly, copy) HDFHIRAuthResponse *authResponse;
@property (nonatomic, readonly) bool hasClinicalSharingScopes;
@property (nonatomic, readonly, copy) NSString *requestedScopeString;

// Image: /System/Library/PrivateFrameworks/HealthRecordServices.framework/HealthRecordServices

+ (id)ephemeralAccountIdentifier;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)authResponse;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithGateway:(id)arg1 authResponse:(id)arg2 requestedScopeString:(id)arg3;
- (id)initWithProvenance:(id)arg1 authResponse:(id)arg2 requestedScopeString:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)requestedScopeString;

// Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI

- (bool)hasClinicalSharingScopes;

@end
