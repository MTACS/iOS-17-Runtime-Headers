
@interface HDClinicalRecordEntity : HDSampleEntity

+ (id)_clinicalRecordForSampleType:(id)arg1 predicate:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)_predicateForRecordWithFHIRResourceIdentifier:(id)arg1;
+ (id)attachmentObjectIdentifierForSampleWithUUID:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (id)clinicalRecordWithAttachmentObjectIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(id /* block */)arg5;
+ (id)existingClinicalRecordCreatedFromResourceWithIdentifier:(id)arg1 basePredicate:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)foreignKeys;
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id*)arg5;
+ (bool)isConcreteEntity;
+ (id)joinClausesForProperty:(id)arg1;

@end
