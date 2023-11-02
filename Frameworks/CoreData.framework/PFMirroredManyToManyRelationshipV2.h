
@interface PFMirroredManyToManyRelationshipV2 : PFMirroredManyToManyRelationship

+ (bool)_isValidMirroredRelationshipRecord:(id)arg1 values:(id)arg2;

- (id)initWithRecord:(id)arg1 andValues:(id)arg2 withManagedObjectModel:(id)arg3 andType:(unsigned long long)arg4;
- (id)initWithRecordID:(id)arg1 forRecordWithID:(id)arg2 relatedToRecordWithID:(id)arg3 byRelationship:(id)arg4 withInverse:(id)arg5 andType:(unsigned long long)arg6;
- (void)populateRecordValues:(id)arg1;

@end
