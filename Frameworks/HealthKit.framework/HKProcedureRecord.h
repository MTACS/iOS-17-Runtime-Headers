
@interface HKProcedureRecord : HKMedicalRecord <HKConceptIndexable, NSCopying, NSSecureCoding> {
    NSArray * _bodySites;
    NSArray * _bodySitesCodingCollections;
    HKConcept * _category;
    HKMedicalCodingCollection * _categoryCodingCollection;
    NSArray * _complications;
    NSArray * _complicationsCodingCollections;
    HKMedicalDate * _executionEndDate;
    HKMedicalDate * _executionStartDate;
    NSArray * _followUps;
    NSArray * _followUpsCodingCollections;
    bool  _notPerformed;
    HKConcept * _outcome;
    HKMedicalCodingCollection * _outcomeCodingCollection;
    NSArray * _performers;
    HKConcept * _procedure;
    HKMedicalCodingCollection * _procedureCodingCollection;
    NSArray * _reason;
    NSArray * _reasonCodingCollections;
    NSArray * _reasonsNotPerformed;
    NSArray * _reasonsNotPerformedCodingCollections;
    HKConcept * _status;
    HKMedicalCoding * _statusCoding;
}

@property (readonly) NSUUID *UUID;
@property (readonly, copy) NSArray *bodySites;
@property (readonly, copy) NSArray *bodySitesCodingCollections;
@property (readonly, copy) HKConcept *category;
@property (readonly, copy) HKMedicalCodingCollection *categoryCodingCollection;
@property (readonly, copy) NSArray *complications;
@property (readonly, copy) NSArray *complicationsCodingCollections;
@property (nonatomic, readonly, copy) NSString *country;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) HKMedicalDate *executionEndDate;
@property (readonly, copy) HKMedicalDate *executionStartDate;
@property (readonly, copy) NSArray *followUps;
@property (readonly, copy) NSArray *followUpsCodingCollections;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSLocale *locale;
@property (readonly) bool notPerformed;
@property (readonly, copy) HKConcept *outcome;
@property (readonly, copy) HKMedicalCodingCollection *outcomeCodingCollection;
@property (readonly, copy) NSArray *performers;
@property (readonly, copy) HKConcept *procedure;
@property (readonly, copy) HKMedicalCodingCollection *procedureCodingCollection;
@property (readonly, copy) HKProcedureRecordType *procedureRecordType;
@property (readonly, copy) NSArray *reason;
@property (readonly, copy) NSArray *reasonCodingCollections;
@property (readonly, copy) NSArray *reasonsNotPerformed;
@property (readonly, copy) NSArray *reasonsNotPerformedCodingCollections;
@property (nonatomic, readonly) long long recordCategoryType;
@property (readonly, copy) HKConcept *status;
@property (readonly, copy) HKMedicalCoding *statusCoding;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (id)_newProcedureRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 procedureCodingCollection:(id)arg13 performers:(id)arg14 executionStartDate:(id)arg15 executionEndDate:(id)arg16 notPerformed:(bool)arg17 statusCoding:(id)arg18 categoryCodingCollection:(id)arg19 reasonCodingCollections:(id)arg20 reasonsNotPerformedCodingCollections:(id)arg21 outcomeCodingCollection:(id)arg22 complicationsCodingCollections:(id)arg23 followUpsCodingCollections:(id)arg24 bodySitesCodingCollections:(id)arg25 config:(id /* block */)arg26;
+ (id)cachedConceptRelationshipKeyPaths;
+ (id)defaultDisplayString;
+ (bool)groupsByUserDomainConcept;
+ (id)indexableConceptKeyPaths;
+ (id)procedureRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 country:(id)arg10 state:(unsigned long long)arg11 procedureCodingCollection:(id)arg12 performers:(id)arg13 executionStartDate:(id)arg14 executionEndDate:(id)arg15 notPerformed:(bool)arg16 statusCoding:(id)arg17 categoryCodingCollection:(id)arg18 reasonCodingCollections:(id)arg19 reasonsNotPerformedCodingCollections:(id)arg20 outcomeCodingCollection:(id)arg21 complicationsCodingCollections:(id)arg22 followUpsCodingCollections:(id)arg23 bodySitesCodingCollections:(id)arg24;
+ (id)procedureRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 procedureCodingCollection:(id)arg13 performers:(id)arg14 executionStartDate:(id)arg15 executionEndDate:(id)arg16 notPerformed:(bool)arg17 statusCoding:(id)arg18 categoryCodingCollection:(id)arg19 reasonCodingCollections:(id)arg20 reasonsNotPerformedCodingCollections:(id)arg21 outcomeCodingCollection:(id)arg22 complicationsCodingCollections:(id)arg23 followUpsCodingCollections:(id)arg24 bodySitesCodingCollections:(id)arg25;
+ (bool)supportsEquivalence;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setBodySites:(id)arg1;
- (void)_setBodySitesCodingCollections:(id)arg1;
- (void)_setCategory:(id)arg1;
- (void)_setCategoryCodingCollection:(id)arg1;
- (void)_setComplications:(id)arg1;
- (void)_setComplicationsCodingCollections:(id)arg1;
- (void)_setExecutionEndDate:(id)arg1;
- (void)_setExecutionStartDate:(id)arg1;
- (void)_setFollowUps:(id)arg1;
- (void)_setFollowUpsCodingCollections:(id)arg1;
- (void)_setNotPerformed:(bool)arg1;
- (void)_setOutcome:(id)arg1;
- (void)_setOutcomeCodingCollection:(id)arg1;
- (void)_setPerformers:(id)arg1;
- (void)_setProcedure:(id)arg1;
- (void)_setProcedureCodingCollection:(id)arg1;
- (void)_setReason:(id)arg1;
- (void)_setReasonCodingCollections:(id)arg1;
- (void)_setReasonsNotPerformed:(id)arg1;
- (void)_setReasonsNotPerformedCodingCollections:(id)arg1;
- (void)_setStatus:(id)arg1;
- (void)_setStatusCoding:(id)arg1;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x1; unsigned int x2; })arg1;
- (bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3;
- (id)bodySites;
- (id)bodySitesCodingCollections;
- (id)category;
- (id)categoryCodingCollection;
- (id)codingsForKeyPath:(id)arg1 error:(id*)arg2;
- (id)complications;
- (id)complicationsCodingCollections;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)executionEndDate;
- (id)executionStartDate;
- (id)followUps;
- (id)followUpsCodingCollections;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (id)medicalRecordCodings;
- (bool)notPerformed;
- (id)outcome;
- (id)outcomeCodingCollection;
- (id)performers;
- (id)procedure;
- (id)procedureCodingCollection;
- (id)procedureRecordType;
- (id)reason;
- (id)reasonCodingCollections;
- (id)reasonsNotPerformed;
- (id)reasonsNotPerformedCodingCollections;
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
