
@interface HKSignedClinicalDataSubject : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _addresses;
    HKMedicalDate * _birthDate;
    NSString * _birthSex;
    NSArray * _emailAddresses;
    NSString * _ethnicity;
    NSString * _fullName;
    NSString * _gender;
    NSArray * _identifiers;
    NSString * _maritalStatus;
    NSArray * _phoneNumbers;
    NSString * _race;
}

@property (nonatomic, readonly, copy) NSArray *addresses;
@property (nonatomic, readonly, copy) HKMedicalDate *birthDate;
@property (nonatomic, readonly, copy) NSString *birthSex;
@property (nonatomic, readonly, copy) NSData *dataForUniquenessChecksumCalculation;
@property (nonatomic, readonly, copy) NSArray *emailAddresses;
@property (nonatomic, readonly, copy) NSString *ethnicity;
@property (nonatomic, readonly, copy) NSString *fullName;
@property (nonatomic, readonly, copy) NSString *gender;
@property (nonatomic, readonly, copy) NSArray *identifiers;
@property (nonatomic, readonly, copy) NSString *maritalStatus;
@property (nonatomic, readonly, copy) NSArray *phoneNumbers;
@property (nonatomic, readonly, copy) NSString *race;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)subjectWithFullName:(id)arg1 birthDate:(id)arg2 gender:(id)arg3 emailAddresses:(id)arg4 phoneNumbers:(id)arg5;
+ (id)subjectWithFullName:(id)arg1 birthDate:(id)arg2 gender:(id)arg3 emailAddresses:(id)arg4 phoneNumbers:(id)arg5 identifiers:(id)arg6 addresses:(id)arg7 maritalStatus:(id)arg8 race:(id)arg9 ethnicity:(id)arg10 birthSex:(id)arg11;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)addresses;
- (id)birthDate;
- (id)birthSex;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)emailAddresses;
- (void)encodeWithCoder:(id)arg1;
- (id)ethnicity;
- (id)fullName;
- (id)gender;
- (unsigned long long)hash;
- (id)identifiers;
- (id)initWithCoder:(id)arg1;
- (id)initWithFullName:(id)arg1 birthDate:(id)arg2 gender:(id)arg3 emailAddresses:(id)arg4 phoneNumbers:(id)arg5 identifiers:(id)arg6 addresses:(id)arg7 maritalStatus:(id)arg8 race:(id)arg9 ethnicity:(id)arg10 birthSex:(id)arg11;
- (bool)isEqual:(id)arg1;
- (id)maritalStatus;
- (id)phoneNumbers;
- (id)race;

// Image: /System/Library/PrivateFrameworks/HealthRecordServices.framework/HealthRecordServices

- (id)dataForUniquenessChecksumCalculation;

@end
