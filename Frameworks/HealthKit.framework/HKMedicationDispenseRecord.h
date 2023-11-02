
@interface HKMedicationDispenseRecord : HKMedicalRecord <HKConceptIndexable, NSCopying, NSSecureCoding> {
    HKCodedQuantity * _daysSupplyQuantity;
    NSArray * _dosages;
    HKMedicalDate * _earliestDosageDate;
    HKMedicalDate * _handOverDate;
    HKConcept * _medication;
    NSArray * _medicationCodings;
    HKMedicalDate * _preparationDate;
    HKCodedQuantity * _quantityDispensed;
    HKConcept * _status;
    HKMedicalCoding * _statusCoding;
}

@property (readonly) NSUUID *UUID;
@property (nonatomic, readonly, copy) NSString *country;
@property (readonly, copy) HKCodedQuantity *daysSupplyQuantity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSArray *dosages;
@property (readonly, copy) HKMedicalDate *earliestDosageDate;
@property (readonly, copy) HKMedicalDate *handOverDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSLocale *locale;
@property (readonly, copy) HKConcept *medication;
@property (readonly, copy) NSArray *medicationCodings;
@property (readonly, copy) HKMedicationDispenseRecordType *medicationDispenseRecordType;
@property (readonly, copy) HKMedicalDate *preparationDate;
@property (readonly, copy) HKCodedQuantity *quantityDispensed;
@property (nonatomic, readonly) long long recordCategoryType;
@property (readonly, copy) HKConcept *status;
@property (readonly, copy) HKMedicalCoding *statusCoding;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (id)_newMedicationDispenseRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 medicationCodings:(id)arg13 quantityDispensed:(id)arg14 preparationDate:(id)arg15 handOverDate:(id)arg16 dosages:(id)arg17 earliestDosageDate:(id)arg18 statusCoding:(id)arg19 daysSupplyQuantity:(id)arg20 config:(id /* block */)arg21;
+ (id)cachedConceptRelationshipKeyPaths;
+ (id)defaultDisplayString;
+ (bool)groupsByUserDomainConcept;
+ (id)indexableConceptKeyPaths;
+ (id)medicationDispenseRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 country:(id)arg10 state:(unsigned long long)arg11 medicationCodings:(id)arg12 quantityDispensed:(id)arg13 preparationDate:(id)arg14 handOverDate:(id)arg15 dosages:(id)arg16 earliestDosageDate:(id)arg17 statusCoding:(id)arg18 daysSupplyQuantity:(id)arg19;
+ (id)medicationDispenseRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 medicationCodings:(id)arg13 quantityDispensed:(id)arg14 preparationDate:(id)arg15 handOverDate:(id)arg16 dosages:(id)arg17 earliestDosageDate:(id)arg18 statusCoding:(id)arg19 daysSupplyQuantity:(id)arg20;
+ (bool)supportsEquivalence;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setDaysSupplyQuantity:(id)arg1;
- (void)_setDosages:(id)arg1;
- (void)_setEarliestDosageDate:(id)arg1;
- (void)_setHandOverDate:(id)arg1;
- (void)_setMedication:(id)arg1;
- (void)_setMedicationCodings:(id)arg1;
- (void)_setPreparationDate:(id)arg1;
- (void)_setQuantityDispensed:(id)arg1;
- (void)_setStatus:(id)arg1;
- (void)_setStatusCoding:(id)arg1;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x1; unsigned int x2; })arg1;
- (bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3;
- (id)codingsForKeyPath:(id)arg1 error:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)daysSupplyQuantity;
- (id)description;
- (id)dosages;
- (id)earliestDosageDate;
- (void)encodeWithCoder:(id)arg1;
- (id)handOverDate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (id)medicalRecordCodings;
- (id)medication;
- (id)medicationCodings;
- (id)medicationCodingsCollection;
- (id)medicationDispenseRecordType;
- (id)preparationDate;
- (id)quantityDispensed;
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
- (id)title;
- (id)titleDisplayStringForDetailViewController;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (id)sortDateTitle;

@end
