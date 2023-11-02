
@interface HKClinicalRecord : HKSample <NSCopying, NSSecureCoding> {
    HKFHIRResource * _FHIRResource;
    NSString * _displayName;
}

@property (readonly, copy) HKFHIRResource *FHIRResource;
@property (readonly, copy) HKClinicalType *clinicalType;
@property (readonly, copy) NSString *displayName;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (id)_newClinicalRecordWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 device:(id)arg4 metadata:(id)arg5 displayName:(id)arg6 FHIRResource:(id)arg7 config:(id /* block */)arg8;
+ (id)clinicalRecordWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 device:(id)arg4 metadata:(id)arg5 displayName:(id)arg6 FHIRResource:(id)arg7;
+ (bool)supportsEquivalence;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)FHIRResource;
- (void)_setDisplayName:(id)arg1;
- (void)_setFHIRResource:(id)arg1;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x1; unsigned int x2; })arg1;
- (id)attachmentObjectIdentifier;
- (id)attachmentSchemaIdentifier;
- (id)clinicalType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEquivalent:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (Class)hd_dataEntityClass;

@end
