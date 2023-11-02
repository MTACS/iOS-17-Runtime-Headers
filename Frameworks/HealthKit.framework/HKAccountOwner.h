
@interface HKAccountOwner : HKMedicalRecord <NSCopying, NSSecureCoding> {
    HKMedicalDate * _birthDate;
    NSString * _name;
}

@property (readonly, copy) HKAccountOwnerType *accountOwnerType;
@property (readonly, copy) HKMedicalDate *birthDate;
@property (readonly, copy) NSString *name;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (id)_newAccountOwnerWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 name:(id)arg13 birthDate:(id)arg14 config:(id /* block */)arg15;
+ (id)accountOwnerWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 country:(id)arg10 state:(unsigned long long)arg11 name:(id)arg12 birthDate:(id)arg13;
+ (id)accountOwnerWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 name:(id)arg13 birthDate:(id)arg14;
+ (bool)supportsEquivalence;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setBirthDate:(id)arg1;
- (void)_setName:(id)arg1;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x1; unsigned int x2; })arg1;
- (id)accountOwnerType;
- (id)birthDate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (id)name;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (Class)hd_dataEntityClass;

// Image: /System/Library/PrivateFrameworks/HealthRecordsExtraction.framework/HealthRecordsExtraction

+ (id)medicalRecordFromClinicalItem:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (id)sortDateTitle;

@end
