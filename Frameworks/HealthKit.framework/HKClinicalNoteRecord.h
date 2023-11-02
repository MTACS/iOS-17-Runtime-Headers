
@interface HKClinicalNoteRecord : HKMedicalRecord <HKConceptIndexable, NSCopying, NSSecureCoding> {
    NSArray * _authors;
    NSArray * _categories;
    NSArray * _categoriesCodingCollections;
    HKConcept * _documentType;
    HKMedicalCodingCollection * _documentTypeCodingCollection;
    HKMedicalDate * _noteCreationDate;
    HKMedicalDate * _relevantEndDate;
    HKMedicalDate * _relevantStartDate;
    HKConcept * _status;
    HKMedicalCoding * _statusCoding;
}

@property (readonly) NSUUID *UUID;
@property (readonly, copy) NSArray *authors;
@property (readonly, copy) NSArray *categories;
@property (readonly, copy) NSArray *categoriesCodingCollections;
@property (readonly, copy) HKClinicalNoteRecordType *clinicalNoteRecordType;
@property (nonatomic, readonly, copy) NSString *country;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) HKConcept *documentType;
@property (readonly, copy) HKMedicalCodingCollection *documentTypeCodingCollection;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSLocale *locale;
@property (readonly, copy) HKMedicalDate *noteCreationDate;
@property (nonatomic, readonly) long long recordCategoryType;
@property (readonly, copy) HKMedicalDate *relevantEndDate;
@property (readonly, copy) HKMedicalDate *relevantStartDate;
@property (readonly, copy) HKConcept *status;
@property (readonly, copy) HKMedicalCoding *statusCoding;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (id)_newClinicalNoteRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 statusCoding:(id)arg13 documentTypeCodingCollection:(id)arg14 noteCreationDate:(id)arg15 categoriesCodingCollections:(id)arg16 relevantStartDate:(id)arg17 relevantEndDate:(id)arg18 authors:(id)arg19 config:(id /* block */)arg20;
+ (id)cachedConceptRelationshipKeyPaths;
+ (id)clinicalNoteRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 country:(id)arg10 state:(unsigned long long)arg11 statusCoding:(id)arg12 documentTypeCodingCollection:(id)arg13 noteCreationDate:(id)arg14 categoriesCodingCollections:(id)arg15 relevantStartDate:(id)arg16 relevantEndDate:(id)arg17 authors:(id)arg18;
+ (id)clinicalNoteRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 statusCoding:(id)arg13 documentTypeCodingCollection:(id)arg14 noteCreationDate:(id)arg15 categoriesCodingCollections:(id)arg16 relevantStartDate:(id)arg17 relevantEndDate:(id)arg18 authors:(id)arg19;
+ (id)defaultDisplayString;
+ (id)indexableConceptKeyPaths;
+ (bool)supportsEquivalence;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setAuthors:(id)arg1;
- (void)_setCategories:(id)arg1;
- (void)_setCategoriesCodingCollections:(id)arg1;
- (void)_setDocumentType:(id)arg1;
- (void)_setDocumentTypeCodingCollection:(id)arg1;
- (void)_setNoteCreationDate:(id)arg1;
- (void)_setRelevantEndDate:(id)arg1;
- (void)_setRelevantStartDate:(id)arg1;
- (void)_setStatus:(id)arg1;
- (void)_setStatusCoding:(id)arg1;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x1; unsigned int x2; })arg1;
- (bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3;
- (id)authors;
- (id)categories;
- (id)categoriesCodingCollections;
- (id)clinicalNoteRecordType;
- (id)codingsForKeyPath:(id)arg1 error:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)documentType;
- (id)documentTypeCodingCollection;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (id)medicalRecordCodings;
- (id)noteCreationDate;
- (long long)recordCategoryType;
- (id)relevantEndDate;
- (id)relevantStartDate;
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
