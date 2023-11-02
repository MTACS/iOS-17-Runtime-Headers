
@interface PHObjectDeleteValidator : NSObject {
    NSManagedObjectContext * _context;
    NSMutableSet * _deletedObjectIDs;
    NSEntityDescription * _entity;
}

- (void).cxx_destruct;
- (id)initWithEntityName:(id)arg1 managedObjectContext:(id)arg2;
- (bool)recordObjectID:(id)arg1;
- (bool)validateForDeleteWithRequestsByObjectID:(id)arg1 error:(id*)arg2;

@end
