
@interface PFMirroredOneToManyRelationship : PFMirroredRelationship {
    NSRelationshipDescription * _inverseRelationshipDescription;
    CKRecordID * _recordID;
    CKRecordID * _relatedRecordID;
    NSRelationshipDescription * _relationshipDescription;
}

- (void)dealloc;
- (id)initWithManagedObject:(id)arg1 withRecordName:(id)arg2 relatedToRecordWithRecordName:(id)arg3 byRelationship:(id)arg4;
- (bool)updateRelationshipValueUsingImportContext:(id)arg1 andManagedObjectContext:(id)arg2 error:(id*)arg3;

@end
