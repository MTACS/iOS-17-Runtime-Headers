
@interface PFMirroredManyToManyRelationship : PFMirroredRelationship {
    CKRecordID * _ckRecordID;
    NSRelationshipDescription * _inverseRelationshipDescription;
    CKRecordID * _manyToManyRecordID;
    NSString * _manyToManyRecordType;
    CKRecordID * _relatedCKRecordID;
    NSRelationshipDescription * _relationshipDescription;
    unsigned long long  _type;
}

+ (bool)_isValidMirroredRelationshipRecord:(id)arg1 values:(id)arg2;

- (void)dealloc;
- (id)description;
- (id)initWithRecordID:(id)arg1 recordType:(id)arg2 managedObjectModel:(id)arg3 andType:(unsigned long long)arg4;
- (bool)updateRelationshipValueUsingImportContext:(id)arg1 andManagedObjectContext:(id)arg2 error:(id*)arg3;

@end
