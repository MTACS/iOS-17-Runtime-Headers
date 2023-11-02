
@interface HKSignedClinicalDataItem : NSObject <HKCodedObject, NSCopying, NSSecureCoding> {
    NSUUID * _medicalRecordSampleID;
    HKConcept * _primaryConcept;
    HKMedicalCodingCollection * _primaryConceptCodingCollection;
    NSDate * _relevantDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *medicalRecordSampleID;
@property (nonatomic, readonly, copy) HKConcept *primaryConcept;
@property (nonatomic, readonly, copy) HKMedicalCodingCollection *primaryConceptCodingCollection;
@property (nonatomic, readonly, copy) NSDate *relevantDate;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)indexableKeyPathsWithPrefix:(id)arg1;
+ (id)itemWithPrimaryConceptCodingCollection:(id)arg1 relevantDate:(id)arg2 medicalRecordSampleID:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3;
- (id)codingsForKeyPath:(id)arg1 error:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPrimaryConceptCodingCollection:(id)arg1 relevantDate:(id)arg2 medicalRecordSampleID:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)medicalRecordSampleID;
- (id)primaryConcept;
- (id)primaryConceptCodingCollection;
- (id)relevantDate;

// Image: /System/Library/PrivateFrameworks/HealthRecordServices.framework/HealthRecordServices

- (id)copyWithMedicalRecordSampleID:(id)arg1;

@end
