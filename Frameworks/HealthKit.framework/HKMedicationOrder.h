
@interface HKMedicationOrder : HKMedicalRecord <HKConceptIndexable, NSCopying, NSSecureCoding> {
    NSArray * _dosages;
    HKMedicalDate * _earliestDosageDate;
    HKMedicalDate * _endedDate;
    HKConcept * _medication;
    HKMedicalCodingCollection * _medicationCodingCollection;
    long long  _numberOfFills;
    NSString * _prescriber;
    NSArray * _reason;
    NSArray * _reasonCodingCollections;
    HKConcept * _reasonEnded;
    HKMedicalCodingCollection * _reasonEndedCodingCollection;
    HKConcept * _status;
    HKMedicalCoding * _statusCoding;
    HKConcept * _statusReason;
    HKMedicalCodingCollection * _statusReasonCodingCollection;
    HKMedicalDate * _writtenDate;
}

@property (readonly) NSUUID *UUID;
@property (nonatomic, readonly, copy) NSString *country;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSArray *dosages;
@property (readonly, copy) HKMedicalDate *earliestDosageDate;
@property (readonly, copy) HKMedicalDate *endedDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSLocale *locale;
@property (readonly, copy) HKConcept *medication;
@property (readonly, copy) HKMedicalCodingCollection *medicationCodingCollection;
@property (readonly, copy) HKMedicationOrderType *medicationOrderType;
@property (readonly) long long numberOfFills;
@property (readonly, copy) NSString *prescriber;
@property (readonly, copy) NSArray *reason;
@property (readonly, copy) NSArray *reasonCodingCollections;
@property (readonly, copy) HKConcept *reasonEnded;
@property (readonly, copy) HKMedicalCodingCollection *reasonEndedCodingCollection;
@property (nonatomic, readonly) long long recordCategoryType;
@property (readonly, copy) HKConcept *status;
@property (readonly, copy) HKMedicalCoding *statusCoding;
@property (readonly, copy) HKConcept *statusReason;
@property (readonly, copy) HKMedicalCodingCollection *statusReasonCodingCollection;
@property (readonly) Class superclass;
@property (readonly, copy) HKMedicalDate *writtenDate;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (id)_newMedicationOrderWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 medicationCodingCollection:(id)arg13 prescriber:(id)arg14 numberOfFills:(long long)arg15 dosages:(id)arg16 earliestDosageDate:(id)arg17 writtenDate:(id)arg18 endedDate:(id)arg19 statusCoding:(id)arg20 reasonCodingCollections:(id)arg21 reasonEndedCodingCollection:(id)arg22 statusReasonCodingCollection:(id)arg23 config:(id /* block */)arg24;
+ (id)cachedConceptRelationshipKeyPaths;
+ (id)defaultDisplayString;
+ (bool)groupsByUserDomainConcept;
+ (id)indexableConceptKeyPaths;
+ (id)medicationOrderWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 country:(id)arg10 state:(unsigned long long)arg11 medicationCodingCollection:(id)arg12 prescriber:(id)arg13 numberOfFills:(long long)arg14 dosages:(id)arg15 earliestDosageDate:(id)arg16 writtenDate:(id)arg17 endedDate:(id)arg18 statusCoding:(id)arg19 reasonCodingCollections:(id)arg20 reasonEndedCodingCollection:(id)arg21 statusReasonCodingCollection:(id)arg22;
+ (id)medicationOrderWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 medicationCodingCollection:(id)arg13 prescriber:(id)arg14 numberOfFills:(long long)arg15 dosages:(id)arg16 earliestDosageDate:(id)arg17 writtenDate:(id)arg18 endedDate:(id)arg19 statusCoding:(id)arg20 reasonCodingCollections:(id)arg21 reasonEndedCodingCollection:(id)arg22 statusReasonCodingCollection:(id)arg23;
+ (bool)supportsEquivalence;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setDosages:(id)arg1;
- (void)_setEarliestDosageDate:(id)arg1;
- (void)_setEndedDate:(id)arg1;
- (void)_setMedication:(id)arg1;
- (void)_setMedicationCodingCollection:(id)arg1;
- (void)_setNumberOfFills:(long long)arg1;
- (void)_setPrescriber:(id)arg1;
- (void)_setReason:(id)arg1;
- (void)_setReasonCodingCollections:(id)arg1;
- (void)_setReasonEnded:(id)arg1;
- (void)_setReasonEndedCodingCollection:(id)arg1;
- (void)_setStatus:(id)arg1;
- (void)_setStatusCoding:(id)arg1;
- (void)_setStatusReason:(id)arg1;
- (void)_setStatusReasonCodingCollection:(id)arg1;
- (void)_setWrittenDate:(id)arg1;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x1; unsigned int x2; })arg1;
- (bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3;
- (id)codingsForKeyPath:(id)arg1 error:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dosages;
- (id)earliestDosageDate;
- (void)encodeWithCoder:(id)arg1;
- (id)endedDate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (id)medicalRecordCodings;
- (id)medication;
- (id)medicationCodingCollection;
- (id)medicationOrderType;
- (long long)numberOfFills;
- (id)prescriber;
- (id)reason;
- (id)reasonCodingCollections;
- (id)reasonEnded;
- (id)reasonEndedCodingCollection;
- (long long)recordCategoryType;
- (id)status;
- (id)statusCoding;
- (id)statusCodingCollection;
- (id)statusReason;
- (id)statusReasonCodingCollection;
- (id)writtenDate;

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
