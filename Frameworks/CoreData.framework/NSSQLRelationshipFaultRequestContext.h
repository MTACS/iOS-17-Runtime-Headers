
@interface NSSQLRelationshipFaultRequestContext : NSSQLStoreRequestContext {
    NSManagedObjectID * _objectID;
    NSRelationshipDescription * _relationship;
}

- (void)dealloc;
- (bool)executeRequestCore:(id*)arg1;
- (id)initWithObjectID:(id)arg1 relationship:(id)arg2 context:(id)arg3 sqlCore:(id)arg4;

@end
