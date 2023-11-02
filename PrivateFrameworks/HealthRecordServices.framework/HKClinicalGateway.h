
@interface HKClinicalGateway : NSObject <HKClinicalBrandable, NSCopying, NSSecureCoding> {
    HKFHIRVersion * _FHIRVersion;
    NSArray * _authSchemas;
    NSURL * _baseURL;
    HKClinicalBrand * _brand;
    NSString * _country;
    NSString * _displayableDescription;
    NSString * _externalID;
    NSArray * _features;
    NSArray * _gatewayVersions;
    NSURL * _informationURL;
    long long  _minCompatibleAPIVersion;
    NSURL * _passwordResetURL;
    NSURL * _patientPortalURL;
    NSString * _phoneNumber;
    NSArray * _resourceSchemas;
    NSURL * _signupURL;
    long long  _status;
    NSString * _subtitle;
    NSString * _title;
    long long  _type;
}

@property (nonatomic, readonly, copy) HKFHIRVersion *FHIRVersion;
@property (nonatomic, readonly, copy) NSArray *authSchemas;
@property (nonatomic, readonly, copy) NSURL *baseURL;
@property (nonatomic, readonly, copy) HKClinicalBrand *brand;
@property (nonatomic, readonly) bool canEnableSharingToProvider;
@property (nonatomic, readonly, copy) NSString *country;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *displayableDescription;
@property (nonatomic, readonly, copy) NSString *externalID;
@property (nonatomic, readonly, copy) NSArray *features;
@property (nonatomic, readonly, copy) NSArray *gatewayVersions;
@property (nonatomic, readonly) bool hasLogo;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSURL *informationURL;
@property (nonatomic, readonly) long long minCompatibleAPIVersion;
@property (nonatomic, readonly) HKClinicalGatewayReference *newerSupportedGatewayVersion;
@property (nonatomic, readonly, copy) NSURL *passwordResetURL;
@property (nonatomic, readonly, copy) NSURL *patientPortalURL;
@property (nonatomic, readonly, copy) NSString *phoneNumber;
@property (nonatomic, readonly, copy) NSArray *resourceSchemas;
@property (nonatomic, readonly, copy) NSURL *signupURL;
@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsSharingToProvider;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) long long type;

// Image: /System/Library/PrivateFrameworks/HealthRecordServices.framework/HealthRecordServices

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)FHIRVersion;
- (id)authSchemas;
- (id)baseURL;
- (id)brand;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)country;
- (id)description;
- (id)displayableDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)externalID;
- (id)features;
- (id)gatewayVersions;
- (unsigned long long)hash;
- (id)informationURL;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithExternalID:(id)arg1 title:(id)arg2 subtitle:(id)arg3 displayableDescription:(id)arg4 phoneNumber:(id)arg5 informationURL:(id)arg6 passwordResetURL:(id)arg7 patientPortalURL:(id)arg8 signupURL:(id)arg9 status:(long long)arg10 type:(long long)arg11 brand:(id)arg12 country:(id)arg13 baseURL:(id)arg14 FHIRVersion:(id)arg15 authSchemas:(id)arg16 resourceSchemas:(id)arg17 features:(id)arg18 gatewayVersions:(id)arg19 minCompatibleAPIVersion:(long long)arg20;
- (bool)isEqual:(id)arg1;
- (bool)isNewerGatewayVersionOfGateway:(id)arg1;
- (long long)minCompatibleAPIVersion;
- (id)newerSupportedGatewayVersion;
- (id)passwordResetURL;
- (id)patientPortalURL;
- (id)phoneNumber;
- (id)resourceSchemas;
- (id)signupURL;
- (long long)status;
- (id)subtitle;
- (id)title;
- (long long)type;

// Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI

- (bool)canEnableSharingToProvider;
- (bool)hasLogo;
- (bool)supportsSharingToProvider;

@end
