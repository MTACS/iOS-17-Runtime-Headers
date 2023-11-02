
@interface HKDiagnosticTestReport : HKMedicalRecord <HKConceptIndexable, NSCopying, NSSecureCoding> {
    HKConcept * _diagnosticTest;
    HKMedicalCodingCollection * _diagnosticTestCodingCollection;
    HKMedicalDate * _effectiveEndDate;
    HKMedicalDate * _effectiveStartDate;
    HKMedicalDate * _issueDate;
    NSArray * _results;
    HKConcept * _status;
    HKMedicalCoding * _statusCoding;
}

@property (readonly) NSUUID *UUID;
@property (nonatomic, readonly, copy) NSString *country;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) HKConcept *diagnosticTest;
@property (readonly, copy) HKMedicalCodingCollection *diagnosticTestCodingCollection;
@property (readonly, copy) HKDiagnosticTestReportType *diagnosticTestReportType;
@property (readonly, copy) HKMedicalDate *effectiveEndDate;
@property (readonly, copy) HKMedicalDate *effectiveStartDate;
@property (readonly) unsigned long long hash;
@property (readonly, copy) HKMedicalDate *issueDate;
@property (nonatomic, readonly, copy) NSLocale *locale;
@property (nonatomic, readonly) long long recordCategoryType;
@property (readonly, copy) NSArray *results;
@property (readonly, copy) HKConcept *status;
@property (readonly, copy) HKMedicalCoding *statusCoding;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (id)_newDiagnosticTestReportWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 diagnosticTestCodingCollection:(id)arg13 results:(id)arg14 effectiveStartDate:(id)arg15 statusCoding:(id)arg16 effectiveEndDate:(id)arg17 issueDate:(id)arg18 config:(id /* block */)arg19;
+ (id)cachedConceptRelationshipKeyPaths;
+ (id)defaultDisplayString;
+ (id)diagnosticTestReportWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 country:(id)arg10 state:(unsigned long long)arg11 diagnosticTestCodingCollection:(id)arg12 results:(id)arg13 effectiveStartDate:(id)arg14 statusCoding:(id)arg15 effectiveEndDate:(id)arg16 issueDate:(id)arg17;
+ (id)diagnosticTestReportWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 diagnosticTestCodingCollection:(id)arg13 results:(id)arg14 effectiveStartDate:(id)arg15 statusCoding:(id)arg16 effectiveEndDate:(id)arg17 issueDate:(id)arg18;
+ (id)indexableConceptKeyPaths;
+ (bool)supportsEquivalence;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setDiagnosticTest:(id)arg1;
- (void)_setDiagnosticTestCodingCollection:(id)arg1;
- (void)_setEffectiveEndDate:(id)arg1;
- (void)_setEffectiveStartDate:(id)arg1;
- (void)_setIssueDate:(id)arg1;
- (void)_setResults:(id)arg1;
- (void)_setStatus:(id)arg1;
- (void)_setStatusCoding:(id)arg1;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x1; unsigned int x2; })arg1;
- (bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3;
- (id)codingsForKeyPath:(id)arg1 error:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)diagnosticTest;
- (id)diagnosticTestCodingCollection;
- (id)diagnosticTestReportType;
- (id)effectiveEndDate;
- (id)effectiveStartDate;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (id)issueDate;
- (id)medicalRecordCodings;
- (long long)recordCategoryType;
- (id)results;
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

- (id)displayItems;
- (id)localizedStatusDisplayString;
- (id)sortDateTitle;

@end
