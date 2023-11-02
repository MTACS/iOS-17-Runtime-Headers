
@interface NSSQLCorrelationTableUpdateTracker : NSObject {
    id  _deletes;
    id  _inserts;
    id  _masterUpdates;
    id  _otherUpdates;
    NSSQLManyToMany * _relationship;
}

- (void)dealloc;
- (id)initForRelationship:(id)arg1;

@end
