
@interface NSSQLObjectFaultRequestContext : NSSQLStoreRequestContext {
    NSFetchRequest * _fetchRequest;
    bool  _forConflictAnalysis;
    NSManagedObjectID * _objectID;
}

- (void)dealloc;
- (bool)executeRequestCore:(id*)arg1;
- (id)initWithObjectID:(id)arg1 context:(id)arg2 sqlCore:(id)arg3;

@end
