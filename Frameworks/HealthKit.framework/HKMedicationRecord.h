
@interface HKMedicationRecord : HKMedicalRecord <HKConceptIndexable, NSCopying, NSSecureCoding> {
    NSString * _asserter;
    HKMedicalDate * _assertionDate;
    long long  _assertionType;
    NSArray * _dosages;
    HKMedicalDate * _earliestDosageDate;
    HKMedicalDate * _effectiveEndDate;
    HKMedicalDate * _effectiveStartDate;
    HKConcept * _medication;
    HKMedicalCodingCollection * _medicationCodingCollection;
    bool  _notTaken;
    NSArray * _reasonForUse;
    NSArray * _reasonForUseCodingCollections;
    NSArray * _reasonsNotTaken;
    NSArray * _reasonsNotTakenCodingCollections;
    HKConcept * _status;
    HKMedicalCoding * _statusCoding;
}

@property (readonly) NSUUID *UUID;
@property (readonly, copy) NSString *asserter;
@property (readonly, copy) HKMedicalDate *assertionDate;
@property (readonly) long long assertionType;
@property (nonatomic, readonly, copy) NSString *country;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSArray *dosages;
@property (readonly, copy) HKMedicalDate *earliestDosageDate;
@property (readonly, copy) HKMedicalDate *effectiveEndDate;
@property (readonly, copy) HKMedicalDate *effectiveStartDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSLocale *locale;
@property (readonly, copy) HKConcept *medication;
@property (readonly, copy) HKMedicalCodingCollection *medicationCodingCollection;
@property (readonly, copy) HKMedicationRecordType *medicationRecordType;
@property (readonly) bool notTaken;
@property (readonly, copy) NSArray *reasonForUse;
@property (readonly, copy) NSArray *reasonForUseCodingCollections;
@property (readonly, copy) NSArray *reasonsNotTaken;
@property (readonly, copy) NSArray *reasonsNotTakenCodingCollections;
@property (nonatomic, readonly) long long recordCategoryType;
@property (readonly, copy) HKConcept *status;
@property (readonly, copy) HKMedicalCoding *statusCoding;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (id)_newMedicationRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 medicationCodingCollection:(id)arg13 assertionType:(long long)arg14 asserter:(id)arg15 assertionDate:(id)arg16 statusCoding:(id)arg17 dosages:(id)arg18 earliestDosageDate:(id)arg19 reasonForUseCodingCollections:(id)arg20 notTaken:(bool)arg21 reasonsNotTakenCodingCollections:(id)arg22 effectiveStartDate:(id)arg23 effectiveEndDate:(id)arg24 config:(id /* block */)arg25;
+ (id)cachedConceptRelationshipKeyPaths;
+ (id)defaultDisplayString;
+ (bool)groupsByUserDomainConcept;
+ (id)indexableConceptKeyPaths;
+ (id)medicationRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 country:(id)arg10 state:(unsigned long long)arg11 medicationCodingCollection:(id)arg12 assertionType:(long long)arg13 asserter:(id)arg14 assertionDate:(id)arg15 statusCoding:(id)arg16 dosages:(id)arg17 earliestDosageDate:(id)arg18 reasonForUseCodingCollections:(id)arg19 notTaken:(bool)arg20 reasonsNotTakenCodingCollections:(id)arg21 effectiveStartDate:(id)arg22 effectiveEndDate:(id)arg23;
+ (id)medicationRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 medicationCodingCollection:(id)arg13 assertionType:(long long)arg14 asserter:(id)arg15 assertionDate:(id)arg16 statusCoding:(id)arg17 dosages:(id)arg18 earliestDosageDate:(id)arg19 reasonForUseCodingCollections:(id)arg20 notTaken:(bool)arg21 reasonsNotTakenCodingCollections:(id)arg22 effectiveStartDate:(id)arg23 effectiveEndDate:(id)arg24;
+ (bool)supportsEquivalence;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setAsserter:(id)arg1;
- (void)_setAssertionDate:(id)arg1;
- (void)_setAssertionType:(long long)arg1;
- (void)_setDosages:(id)arg1;
- (void)_setEarliestDosageDate:(id)arg1;
- (void)_setEffectiveEndDate:(id)arg1;
- (void)_setEffectiveStartDate:(id)arg1;
- (void)_setMedication:(id)arg1;
- (void)_setMedicationCodingCollection:(id)arg1;
- (void)_setNotTaken:(bool)arg1;
- (void)_setReasonForUse:(id)arg1;
- (void)_setReasonForUseCodingCollections:(id)arg1;
- (void)_setReasonsNotTaken:(id)arg1;
- (void)_setReasonsNotTakenCodingCollections:(id)arg1;
- (void)_setStatus:(id)arg1;
- (void)_setStatusCoding:(id)arg1;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x1; unsigned int x2; })arg1;
- (bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3;
- (id)asserter;
- (id)assertionDate;
- (long long)assertionType;
- (id)codingsForKeyPath:(id)arg1 error:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dosages;
- (id)earliestDosageDate;
- (id)effectiveEndDate;
- (id)effectiveStartDate;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (id)medicalRecordCodings;
- (id)medication;
- (id)medicationCodingCollection;
- (id)medicationRecordType;
- (bool)notTaken;
- (id)reasonForUse;
- (id)reasonForUseCodingCollections;
- (id)reasonsNotTaken;
- (id)reasonsNotTakenCodingCollections;
- (long long)recordCategoryType;
- (id)status;
- (id)statusCoding;
- (id)statusCodingCollection;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (Class)hd_dataEntityClass;

// Image: /System/Library/PrivateFrameworks/HealthRecordsExtraction.framework/HealthRecordsExtraction

+ (id)medicalRecordFromClinicalItem:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI

- (id)codings;
- (id)meaningfulDateTitle;
- (id)title;
- (id)titleDisplayStringForDetailViewController;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (id)sortDateTitle;

@end
