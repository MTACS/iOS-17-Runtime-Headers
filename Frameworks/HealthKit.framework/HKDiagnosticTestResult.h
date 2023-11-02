
@interface HKDiagnosticTestResult : HKMedicalRecord <HKConceptIndexable, NSCopying, NSSecureCoding> {
    HKConcept * _bodySite;
    HKMedicalCodingCollection * _bodySiteCodingCollection;
    NSArray * _categories;
    NSArray * _categoriesCodingCollections;
    NSString * _category;
    NSString * _comments;
    HKConcept * _diagnosticTest;
    HKMedicalCodingCollection * _diagnosticTestCodingCollection;
    HKMedicalDate * _effectiveEndDate;
    HKMedicalDate * _effectiveStartDate;
    NSArray * _interpretation;
    NSArray * _interpretationCodingCollections;
    HKMedicalDate * _issueDate;
    HKConcept * _method;
    HKMedicalCodingCollection * _methodCodingCollection;
    NSArray * _performers;
    long long  _referenceRangeStatus;
    NSArray * _referenceRanges;
    HKConcept * _status;
    HKMedicalCoding * _statusCoding;
    HKInspectableValueCollection * _value;
}

@property (readonly) NSUUID *UUID;
@property (readonly, copy) HKConcept *bodySite;
@property (readonly, copy) HKMedicalCodingCollection *bodySiteCodingCollection;
@property (readonly, copy) NSArray *categories;
@property (readonly, copy) NSArray *categoriesCodingCollections;
@property (readonly, copy) NSString *category;
@property (readonly, copy) NSString *comments;
@property (nonatomic, readonly, copy) NSString *country;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) HKConcept *diagnosticTest;
@property (readonly, copy) HKMedicalCodingCollection *diagnosticTestCodingCollection;
@property (readonly, copy) HKDiagnosticTestResultType *diagnosticTestResultType;
@property (readonly, copy) HKMedicalDate *effectiveEndDate;
@property (readonly, copy) HKMedicalDate *effectiveStartDate;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSArray *interpretation;
@property (readonly, copy) NSArray *interpretationCodingCollections;
@property (readonly, copy) HKMedicalDate *issueDate;
@property (nonatomic, readonly, copy) NSLocale *locale;
@property (readonly, copy) HKConcept *method;
@property (readonly, copy) HKMedicalCodingCollection *methodCodingCollection;
@property (readonly, copy) NSArray *performers;
@property (nonatomic, readonly) long long recordCategoryType;
@property (readonly) long long referenceRangeStatus;
@property (readonly, copy) NSArray *referenceRanges;
@property (readonly, copy) HKConcept *status;
@property (readonly, copy) HKMedicalCoding *statusCoding;
@property (readonly) Class superclass;
@property (readonly, copy) HKInspectableValueCollection *value;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (id)_newDiagnosticTestResultWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 diagnosticTestCodingCollection:(id)arg13 value:(id)arg14 referenceRanges:(id)arg15 effectiveStartDate:(id)arg16 category:(id)arg17 categoriesCodingCollections:(id)arg18 issueDate:(id)arg19 effectiveEndDate:(id)arg20 statusCoding:(id)arg21 interpretationCodingCollections:(id)arg22 comments:(id)arg23 bodySiteCodingCollection:(id)arg24 methodCodingCollection:(id)arg25 performers:(id)arg26 referenceRangeStatus:(long long)arg27 config:(id /* block */)arg28;
+ (id)cachedConceptRelationshipKeyPaths;
+ (id)defaultDisplayString;
+ (id)diagnosticTestResultWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 country:(id)arg10 state:(unsigned long long)arg11 diagnosticTestCodingCollection:(id)arg12 value:(id)arg13 referenceRanges:(id)arg14 effectiveStartDate:(id)arg15 category:(id)arg16 categoriesCodingCollections:(id)arg17 issueDate:(id)arg18 effectiveEndDate:(id)arg19 statusCoding:(id)arg20 interpretationCodingCollections:(id)arg21 comments:(id)arg22 bodySiteCodingCollection:(id)arg23 methodCodingCollection:(id)arg24 performers:(id)arg25 referenceRangeStatus:(long long)arg26;
+ (id)diagnosticTestResultWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 diagnosticTestCodingCollection:(id)arg13 value:(id)arg14 referenceRanges:(id)arg15 effectiveStartDate:(id)arg16 category:(id)arg17 categoriesCodingCollections:(id)arg18 issueDate:(id)arg19 effectiveEndDate:(id)arg20 statusCoding:(id)arg21 interpretationCodingCollections:(id)arg22 comments:(id)arg23 bodySiteCodingCollection:(id)arg24 methodCodingCollection:(id)arg25 performers:(id)arg26 referenceRangeStatus:(long long)arg27;
+ (bool)groupsByUserDomainConcept;
+ (id)indexableConceptKeyPaths;
+ (bool)supportsEquivalence;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setBodySite:(id)arg1;
- (void)_setBodySiteCodingCollection:(id)arg1;
- (void)_setCategories:(id)arg1;
- (void)_setCategoriesCodingCollections:(id)arg1;
- (void)_setCategory:(id)arg1;
- (void)_setComments:(id)arg1;
- (void)_setDiagnosticTest:(id)arg1;
- (void)_setDiagnosticTestCodingCollection:(id)arg1;
- (void)_setEffectiveEndDate:(id)arg1;
- (void)_setEffectiveStartDate:(id)arg1;
- (void)_setInterpretation:(id)arg1;
- (void)_setInterpretationCodingCollections:(id)arg1;
- (void)_setIssueDate:(id)arg1;
- (void)_setMethod:(id)arg1;
- (void)_setMethodCodingCollection:(id)arg1;
- (void)_setPerformers:(id)arg1;
- (void)_setReferenceRangeStatus:(long long)arg1;
- (void)_setReferenceRanges:(id)arg1;
- (void)_setStatus:(id)arg1;
- (void)_setStatusCoding:(id)arg1;
- (void)_setValue:(id)arg1;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x1; unsigned int x2; })arg1;
- (bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3;
- (id)bodySite;
- (id)bodySiteCodingCollection;
- (id)categories;
- (id)categoriesCodingCollections;
- (id)category;
- (id)codingsForKeyPath:(id)arg1 error:(id*)arg2;
- (id)comments;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)diagnosticTest;
- (id)diagnosticTestCodingCollection;
- (id)diagnosticTestResultType;
- (id)effectiveEndDate;
- (id)effectiveStartDate;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)interpretation;
- (id)interpretationCodingCollections;
- (bool)isEquivalent:(id)arg1;
- (id)issueDate;
- (id)medicalRecordCodings;
- (id)method;
- (id)methodCodingCollection;
- (id)performers;
- (long long)recordCategoryType;
- (long long)referenceRangeStatus;
- (id)referenceRanges;
- (id)status;
- (id)statusCoding;
- (id)statusCodingCollection;
- (id)value;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (Class)hd_dataEntityClass;
+ (bool)supportsDistinctByKeyPath:(id)arg1;

- (id)uniqueIdentifierForDistinctByKeyPath:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/HealthRecordsDaemon.framework/HealthRecordsDaemon

- (id)chartableCodedQuantitySet;

// Image: /System/Library/PrivateFrameworks/HealthRecordsExtraction.framework/HealthRecordsExtraction

+ (id)medicalRecordFromClinicalItem:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI

- (void)_displayItemsForCodedValueCollection:(id)arg1 healthRecordsStore:(id)arg2 preferredStyle:(long long)arg3 completion:(id /* block */)arg4;
- (void)_displayItemsForValuePreferedStyle:(long long)arg1 healthRecordsStore:(id)arg2 completion:(id /* block */)arg3;
- (id)chartableCodedQuantitySet;
- (id)codings;
- (void)fetchConceptRoomItemsWithHealthRecordsStore:(id)arg1 conceptStore:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchDetailItemsWithHealthRecordsStore:(id)arg1 conceptStore:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchObservationDetailItemsWithHealthRecordsStore:(id)arg1 style:(long long)arg2 completion:(id /* block */)arg3;
- (id)title;
- (id)titleDisplayStringForDetailViewController;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (id)displayItems;
- (id)localizedStatusDisplayString;
- (id)sortDateTitle;
- (id)valueItem;

@end
