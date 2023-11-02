
@interface HKConditionRecord : HKMedicalRecord <HKConceptIndexable, NSCopying, NSSecureCoding> {
    HKInspectableValue * _abatement;
    NSString * _asserter;
    NSArray * _bodySites;
    NSArray * _bodySitesCodingCollections;
    NSArray * _categories;
    NSArray * _categoriesCodingCollections;
    HKConcept * _clinicalStatus;
    HKMedicalCoding * _clinicalStatusCoding;
    HKConcept * _condition;
    HKMedicalCodingCollection * _conditionCodingCollection;
    HKInspectableValue * _onset;
    HKMedicalDate * _recordedDate;
    HKConcept * _severity;
    HKMedicalCodingCollection * _severityCodingCollection;
    HKConcept * _verificationStatus;
    HKMedicalCoding * _verificationStatusCoding;
}

@property (readonly) NSUUID *UUID;
@property (readonly, copy) HKInspectableValue *abatement;
@property (readonly, copy) NSString *asserter;
@property (readonly, copy) NSArray *bodySites;
@property (readonly, copy) NSArray *bodySitesCodingCollections;
@property (readonly, copy) NSArray *categories;
@property (readonly, copy) NSArray *categoriesCodingCollections;
@property (readonly, copy) HKConcept *clinicalStatus;
@property (readonly, copy) HKMedicalCoding *clinicalStatusCoding;
@property (readonly, copy) HKConcept *condition;
@property (readonly, copy) HKMedicalCodingCollection *conditionCodingCollection;
@property (readonly, copy) HKConditionRecordType *conditionRecordType;
@property (nonatomic, readonly, copy) NSString *country;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSLocale *locale;
@property (readonly, copy) HKInspectableValue *onset;
@property (nonatomic, readonly) long long recordCategoryType;
@property (readonly, copy) HKMedicalDate *recordedDate;
@property (readonly, copy) HKConcept *severity;
@property (readonly, copy) HKMedicalCodingCollection *severityCodingCollection;
@property (readonly) Class superclass;
@property (readonly, copy) HKConcept *verificationStatus;
@property (readonly, copy) HKMedicalCoding *verificationStatusCoding;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (id)_newConditionRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 conditionCodingCollection:(id)arg13 categoriesCodingCollections:(id)arg14 asserter:(id)arg15 abatement:(id)arg16 onset:(id)arg17 recordedDate:(id)arg18 clinicalStatusCoding:(id)arg19 verificationStatusCoding:(id)arg20 severityCodingCollection:(id)arg21 bodySitesCodingCollections:(id)arg22 config:(id /* block */)arg23;
+ (id)cachedConceptRelationshipKeyPaths;
+ (id)conditionRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 country:(id)arg10 state:(unsigned long long)arg11 conditionCodingCollection:(id)arg12 categoriesCodingCollections:(id)arg13 asserter:(id)arg14 abatement:(id)arg15 onset:(id)arg16 recordedDate:(id)arg17 clinicalStatusCoding:(id)arg18 verificationStatusCoding:(id)arg19 severityCodingCollection:(id)arg20 bodySitesCodingCollections:(id)arg21;
+ (id)conditionRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 conditionCodingCollection:(id)arg13 categoriesCodingCollections:(id)arg14 asserter:(id)arg15 abatement:(id)arg16 onset:(id)arg17 recordedDate:(id)arg18 clinicalStatusCoding:(id)arg19 verificationStatusCoding:(id)arg20 severityCodingCollection:(id)arg21 bodySitesCodingCollections:(id)arg22;
+ (id)defaultDisplayString;
+ (bool)groupsByUserDomainConcept;
+ (id)indexableConceptKeyPaths;
+ (bool)supportsEquivalence;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setAbatement:(id)arg1;
- (void)_setAsserter:(id)arg1;
- (void)_setBodySites:(id)arg1;
- (void)_setBodySitesCodingCollections:(id)arg1;
- (void)_setCategories:(id)arg1;
- (void)_setCategoriesCodingCollections:(id)arg1;
- (void)_setClinicalStatus:(id)arg1;
- (void)_setClinicalStatusCoding:(id)arg1;
- (void)_setCondition:(id)arg1;
- (void)_setConditionCodingCollection:(id)arg1;
- (void)_setOnset:(id)arg1;
- (void)_setRecordedDate:(id)arg1;
- (void)_setSeverity:(id)arg1;
- (void)_setSeverityCodingCollection:(id)arg1;
- (void)_setVerificationStatus:(id)arg1;
- (void)_setVerificationStatusCoding:(id)arg1;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x1; unsigned int x2; })arg1;
- (id)abatement;
- (bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3;
- (id)asserter;
- (id)bodySites;
- (id)bodySitesCodingCollections;
- (id)categories;
- (id)categoriesCodingCollections;
- (id)clinicalStatus;
- (id)clinicalStatusCoding;
- (id)clinicalStatusCodingCollection;
- (id)codingsForKeyPath:(id)arg1 error:(id*)arg2;
- (id)condition;
- (id)conditionCodingCollection;
- (id)conditionRecordType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (id)medicalRecordCodings;
- (id)onset;
- (long long)recordCategoryType;
- (id)recordedDate;
- (id)severity;
- (id)severityCodingCollection;
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

- (id)abatementItem;
- (id)asserterItem;
- (id)categoryItem;
- (id)displayItems;
- (id)sortDateTitle;
- (id)verificationStatusItem;

@end
