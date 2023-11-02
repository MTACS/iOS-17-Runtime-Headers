
@interface HKAllergyRecord : HKMedicalRecord <HKConceptIndexable, NSCopying, NSSecureCoding> {
    HKConcept * _allergy;
    HKMedicalCodingCollection * _allergyCodingCollection;
    HKConcept * _allergyType;
    HKMedicalCoding * _allergyTypeCoding;
    NSString * _asserter;
    HKConcept * _category;
    HKMedicalCoding * _categoryCoding;
    HKConcept * _clinicalStatus;
    HKMedicalCoding * _clinicalStatusCoding;
    HKConcept * _criticality;
    HKMedicalCoding * _criticalityCoding;
    HKMedicalDate * _lastOccurrenceDate;
    HKMedicalDate * _onsetDate;
    NSArray * _reactions;
    HKMedicalDate * _recordedDate;
    HKConcept * _verificationStatus;
    HKMedicalCoding * _verificationStatusCoding;
}

@property (readonly) NSUUID *UUID;
@property (readonly, copy) HKConcept *allergy;
@property (readonly, copy) HKMedicalCodingCollection *allergyCodingCollection;
@property (readonly, copy) HKAllergyRecordType *allergyRecordType;
@property (readonly, copy) HKConcept *allergyType;
@property (readonly, copy) HKMedicalCoding *allergyTypeCoding;
@property (readonly, copy) NSString *asserter;
@property (readonly, copy) HKConcept *category;
@property (readonly, copy) HKMedicalCoding *categoryCoding;
@property (readonly, copy) HKConcept *clinicalStatus;
@property (readonly, copy) HKMedicalCoding *clinicalStatusCoding;
@property (nonatomic, readonly, copy) NSString *country;
@property (readonly, copy) HKConcept *criticality;
@property (readonly, copy) HKMedicalCoding *criticalityCoding;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) HKMedicalDate *lastOccurrenceDate;
@property (nonatomic, readonly, copy) NSLocale *locale;
@property (readonly, copy) HKMedicalDate *onsetDate;
@property (readonly, copy) NSArray *reactions;
@property (nonatomic, readonly) long long recordCategoryType;
@property (readonly, copy) HKMedicalDate *recordedDate;
@property (readonly) Class superclass;
@property (readonly, copy) HKConcept *verificationStatus;
@property (readonly, copy) HKMedicalCoding *verificationStatusCoding;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (id)_newAllergyRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 allergyCodingCollection:(id)arg13 onsetDate:(id)arg14 asserter:(id)arg15 reactions:(id)arg16 criticalityCoding:(id)arg17 lastOccurrenceDate:(id)arg18 recordedDate:(id)arg19 verificationStatusCoding:(id)arg20 clinicalStatusCoding:(id)arg21 allergyTypeCoding:(id)arg22 categoryCoding:(id)arg23 config:(id /* block */)arg24;
+ (id)allergyRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 country:(id)arg10 state:(unsigned long long)arg11 allergyCodingCollection:(id)arg12 onsetDate:(id)arg13 asserter:(id)arg14 reactions:(id)arg15 criticalityCoding:(id)arg16 lastOccurrenceDate:(id)arg17 recordedDate:(id)arg18 verificationStatusCoding:(id)arg19 clinicalStatusCoding:(id)arg20 allergyTypeCoding:(id)arg21 categoryCoding:(id)arg22;
+ (id)allergyRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 allergyCodingCollection:(id)arg13 onsetDate:(id)arg14 asserter:(id)arg15 reactions:(id)arg16 criticalityCoding:(id)arg17 lastOccurrenceDate:(id)arg18 recordedDate:(id)arg19 verificationStatusCoding:(id)arg20 clinicalStatusCoding:(id)arg21 allergyTypeCoding:(id)arg22 categoryCoding:(id)arg23;
+ (id)cachedConceptRelationshipKeyPaths;
+ (id)defaultDisplayString;
+ (bool)groupsByUserDomainConcept;
+ (id)indexableConceptKeyPaths;
+ (bool)supportsEquivalence;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setAllergy:(id)arg1;
- (void)_setAllergyCodingCollection:(id)arg1;
- (void)_setAllergyType:(id)arg1;
- (void)_setAllergyTypeCoding:(id)arg1;
- (void)_setAsserter:(id)arg1;
- (void)_setCategory:(id)arg1;
- (void)_setCategoryCoding:(id)arg1;
- (void)_setClinicalStatus:(id)arg1;
- (void)_setClinicalStatusCoding:(id)arg1;
- (void)_setCriticality:(id)arg1;
- (void)_setCriticalityCoding:(id)arg1;
- (void)_setLastOccurrenceDate:(id)arg1;
- (void)_setOnsetDate:(id)arg1;
- (void)_setReactions:(id)arg1;
- (void)_setRecordedDate:(id)arg1;
- (void)_setVerificationStatus:(id)arg1;
- (void)_setVerificationStatusCoding:(id)arg1;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x1; unsigned int x2; })arg1;
- (id)allergy;
- (id)allergyCodingCollection;
- (id)allergyRecordType;
- (id)allergyType;
- (id)allergyTypeCoding;
- (id)allergyTypeCodingCollection;
- (bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3;
- (id)asserter;
- (id)category;
- (id)categoryCoding;
- (id)categoryCodingCollection;
- (id)clinicalStatus;
- (id)clinicalStatusCoding;
- (id)clinicalStatusCodingCollection;
- (id)codingsForKeyPath:(id)arg1 error:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)criticality;
- (id)criticalityCoding;
- (id)criticalityCodingCollection;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (id)lastOccurrenceDate;
- (id)medicalRecordCodings;
- (id)onsetDate;
- (id)reactions;
- (long long)recordCategoryType;
- (id)recordedDate;
- (id)verificationStatus;
- (id)verificationStatusCoding;
- (id)verificationStatusCodingCollection;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (Class)hd_dataEntityClass;

// Image: /System/Library/PrivateFrameworks/HealthRecordsExtraction.framework/HealthRecordsExtraction

+ (id)medicalRecordFromClinicalItem:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI

- (id)codings;
- (id)title;
- (id)titleDisplayStringForDetailViewController;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (id)sortDateTitle;

@end
