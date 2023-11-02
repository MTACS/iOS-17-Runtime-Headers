
@interface PFUbiquityToManyConflictDiff : NSObject {
    NSMutableSet * _deletedObjectIDs;
    NSMutableSet * _insertedObjectIDs;
    NSString * _relationshipKey;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (id)initForRelationshipAtKey:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
