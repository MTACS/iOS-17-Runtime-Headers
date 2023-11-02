
@interface HKClinicalType : HKSampleType

+ (id)allTypes;
+ (id)allergyRecordType;
+ (id)clinicalNoteRecordType;
+ (id)conditionRecordType;
+ (id)coverageRecordType;
+ (id)immunizationRecordType;
+ (id)labResultRecordType;
+ (id)medicationRecordType;
+ (id)procedureRecordType;
+ (id)sampleTypesForResourceType:(id)arg1 error:(id*)arg2;
+ (id)vitalSignRecordType;

- (id)initWithIdentifier:(id)arg1;
- (bool)isClinicalType;

@end
