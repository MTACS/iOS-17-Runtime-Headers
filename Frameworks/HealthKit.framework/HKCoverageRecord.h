
@interface HKCoverageRecord : HKMedicalRecord <HKConceptIndexable, NSCopying, NSSecureCoding> {
    NSString * _beneficiary;
    HKFHIRIdentifierElement * _beneficiaryIdentifier;
    NSArray * _classification;
    HKConcept * _coverageType;
    HKMedicalCodingCollection * _coverageTypeCodingCollection;
    NSString * _network;
    NSArray * _payor;
    HKMedicalDate * _periodEndDate;
    HKMedicalDate * _periodStartDate;
    NSString * _policyHolder;
    HKConcept * _relationship;
    HKMedicalCodingCollection * _relationshipCodingCollection;
    HKConcept * _status;
    HKMedicalCoding * _statusCoding;
    NSString * _subscriber;
    NSString * _subscriberId;
    HKFHIRIdentifierElement * _subscriberIdentifier;
}

@property (readonly) NSUUID *UUID;
@property (readonly, copy) NSString *beneficiary;
@property (readonly, copy) HKFHIRIdentifierElement *beneficiaryIdentifier;
@property (readonly, copy) NSArray *classification;
@property (nonatomic, readonly, copy) NSString *country;
@property (readonly, copy) HKCoverageRecordType *coverageRecordType;
@property (readonly, copy) HKConcept *coverageType;
@property (readonly, copy) HKMedicalCodingCollection *coverageTypeCodingCollection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSLocale *locale;
@property (readonly, copy) NSString *network;
@property (readonly, copy) NSArray *payor;
@property (readonly, copy) HKMedicalDate *periodEndDate;
@property (readonly, copy) HKMedicalDate *periodStartDate;
@property (readonly, copy) NSString *policyHolder;
@property (nonatomic, readonly) long long recordCategoryType;
@property (readonly, copy) HKConcept *relationship;
@property (readonly, copy) HKMedicalCodingCollection *relationshipCodingCollection;
@property (readonly, copy) HKConcept *status;
@property (readonly, copy) HKMedicalCoding *statusCoding;
@property (readonly, copy) NSString *subscriber;
@property (readonly, copy) NSString *subscriberId;
@property (readonly, copy) HKFHIRIdentifierElement *subscriberIdentifier;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (id)_newCoverageRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 statusCoding:(id)arg13 coverageTypeCodingCollection:(id)arg14 subscriber:(id)arg15 subscriberId:(id)arg16 beneficiary:(id)arg17 policyHolder:(id)arg18 payor:(id)arg19 relationshipCodingCollection:(id)arg20 classification:(id)arg21 network:(id)arg22 periodStartDate:(id)arg23 periodEndDate:(id)arg24 subscriberIdentifier:(id)arg25 beneficiaryIdentifier:(id)arg26 config:(id /* block */)arg27;
+ (id)cachedConceptRelationshipKeyPaths;
+ (id)coverageRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 country:(id)arg10 state:(unsigned long long)arg11 statusCoding:(id)arg12 coverageTypeCodingCollection:(id)arg13 subscriber:(id)arg14 subscriberId:(id)arg15 beneficiary:(id)arg16 policyHolder:(id)arg17 payor:(id)arg18 relationshipCodingCollection:(id)arg19 classification:(id)arg20 network:(id)arg21 periodStartDate:(id)arg22 periodEndDate:(id)arg23 subscriberIdentifier:(id)arg24 beneficiaryIdentifier:(id)arg25;
+ (id)coverageRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 statusCoding:(id)arg13 coverageTypeCodingCollection:(id)arg14 subscriber:(id)arg15 subscriberId:(id)arg16 beneficiary:(id)arg17 policyHolder:(id)arg18 payor:(id)arg19 relationshipCodingCollection:(id)arg20 classification:(id)arg21 network:(id)arg22 periodStartDate:(id)arg23 periodEndDate:(id)arg24 subscriberIdentifier:(id)arg25 beneficiaryIdentifier:(id)arg26;
+ (id)defaultDisplayString;
+ (id)indexableConceptKeyPaths;
+ (bool)supportsEquivalence;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setBeneficiary:(id)arg1;
- (void)_setBeneficiaryIdentifier:(id)arg1;
- (void)_setClassification:(id)arg1;
- (void)_setCoverageType:(id)arg1;
- (void)_setCoverageTypeCodingCollection:(id)arg1;
- (void)_setNetwork:(id)arg1;
- (void)_setPayor:(id)arg1;
- (void)_setPeriodEndDate:(id)arg1;
- (void)_setPeriodStartDate:(id)arg1;
- (void)_setPolicyHolder:(id)arg1;
- (void)_setRelationship:(id)arg1;
- (void)_setRelationshipCodingCollection:(id)arg1;
- (void)_setStatus:(id)arg1;
- (void)_setStatusCoding:(id)arg1;
- (void)_setSubscriber:(id)arg1;
- (void)_setSubscriberId:(id)arg1;
- (void)_setSubscriberIdentifier:(id)arg1;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x1; unsigned int x2; })arg1;
- (bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3;
- (id)beneficiary;
- (id)beneficiaryIdentifier;
- (id)classification;
- (id)codingsForKeyPath:(id)arg1 error:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coverageRecordType;
- (id)coverageType;
- (id)coverageTypeCodingCollection;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (id)medicalRecordCodings;
- (id)network;
- (id)payor;
- (id)periodEndDate;
- (id)periodStartDate;
- (id)policyHolder;
- (long long)recordCategoryType;
- (id)relationship;
- (id)relationshipCodingCollection;
- (id)status;
- (id)statusCoding;
- (id)statusCodingCollection;
- (id)subscriber;
- (id)subscriberId;
- (id)subscriberIdentifier;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (Class)hd_dataEntityClass;

// Image: /System/Library/PrivateFrameworks/HealthRecordsExtraction.framework/HealthRecordsExtraction

+ (id)medicalRecordFromClinicalItem:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI

- (id)codings;
- (id)meaningfulDateString;
- (id)title;
- (id)titleDisplayStringForDetailViewController;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (id)sortDateTitle;

@end
