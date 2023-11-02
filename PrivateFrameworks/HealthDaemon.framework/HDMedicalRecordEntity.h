
@interface HDMedicalRecordEntity : HDSampleEntity

+ (id)attachmentObjectIdentifierForSampleWithUUID:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (id)checkConstraints;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(id /* block */)arg5;
+ (id)foreignKeys;
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id*)arg5;
+ (id)joinClausesForProperty:(id)arg1;
+ (id)latestCreationDateWithProfile:(id)arg1 error:(id*)arg2;
+ (id)latestModifiedDateWithProfile:(id)arg1 error:(id*)arg2;
+ (id)medicalRecordWithAttachmentObjectIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)orderingTermForSortDescriptor:(id)arg1;

- (bool)willDeleteWithTransaction:(id)arg1 error:(id*)arg2;

@end
