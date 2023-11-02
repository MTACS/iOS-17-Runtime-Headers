
@interface HDHealthRecordClinicalItem : NSObject {
    HDFHIRResourceObject * _APIResource;
    HDHealthRecordClinicalType * _clinicalType;
    NSString * _country;
    HKMedicalRecord * _extractedMedicalRecord;
    NSDictionary * _medicalRecordMetadata;
    NSMutableDictionary * _medicalRecordProperties;
    NSDictionary * _originalAttributes;
    HDOriginalFHIRResourceObject * _representedResource;
    NSNumber * _rulesVersion;
}

@property (nonatomic, retain) HDFHIRResourceObject *APIResource;
@property (nonatomic, copy) HDHealthRecordClinicalType *clinicalType;
@property (nonatomic, readonly, copy) NSString *country;
@property (nonatomic, retain) HKMedicalRecord *extractedMedicalRecord;
@property (nonatomic, readonly) Class medicalRecordClass;
@property (nonatomic, copy) NSDictionary *medicalRecordMetadata;
@property (nonatomic, readonly, copy) NSDictionary *originalAttributes;
@property (nonatomic, readonly) HDOriginalFHIRResourceObject *representedResource;
@property (nonatomic, readonly, copy) NSNumber *rulesVersion;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)APIResource;
- (id)_medicalRecordPropertyArrayFromKey:(id)arg1 expectedClass:(Class)arg2 error:(id*)arg3;
- (id)_medicalRecordPropertyFromKey:(id)arg1 expectedClass:(Class)arg2 error:(id*)arg3;
- (void)assignExtractedMedicalRecord:(id)arg1;
- (void)assignMedicalRecordMetadata:(id)arg1;
- (id)candidateValueForKeyPath:(id)arg1 error:(id*)arg2;
- (id)clinicalType;
- (id)correspondingClinicalTypeWithError:(id*)arg1;
- (id)country;
- (id)extractedMedicalRecord;
- (id)initWithRepresentedResource:(id)arg1 clinicalType:(id)arg2 rulesVersion:(id)arg3;
- (Class)medicalRecordClass;
- (id)medicalRecordMetadata;
- (id)medicalRecordPropertyValueForKey:(id)arg1 expectedClass:(Class)arg2 isArray:(bool)arg3 error:(id*)arg4;
- (id)originalAttributes;
- (id)representedResource;
- (id)rulesVersion;
- (void)setAPIResource:(id)arg1;
- (void)setClinicalType:(id)arg1;
- (void)setExtractedMedicalRecord:(id)arg1;
- (void)setMedicalRecordMetadata:(id)arg1;
- (void)setMedicalRecordPropertyValue:(id)arg1 forKey:(id)arg2;
- (long long)type;
- (id)valueForUndefinedKey:(id)arg1;

@end
