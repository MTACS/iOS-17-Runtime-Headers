
@interface NSConstraintConflict : NSObject <NSSecureCoding> {
    NSDictionary * _conflictedValues;
    NSArray * _conflictingObjects;
    NSArray * _conflictingSnapshots;
    NSArray * _constraint;
    NSManagedObject * _databaseObject;
    NSDictionary * _databaseSnapshot;
}

@property (readonly, copy) NSArray *conflictingObjects;
@property (readonly, copy) NSArray *conflictingSnapshots;
@property (readonly, copy) NSArray *constraint;
@property (readonly, copy) NSDictionary *constraintValues;
@property (readonly, retain) NSManagedObject *databaseObject;
@property (readonly, retain) NSDictionary *databaseSnapshot;

+ (bool)supportsSecureCoding;

- (void)_doCleanupForXPCStore:(id)arg1 context:(id)arg2;
- (bool)_isDBConflict;
- (id)conflictingObjects;
- (id)conflictingSnapshots;
- (id)constraint;
- (id)constraintValues;
- (id)databaseObject;
- (id)databaseSnapshot;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConstraint:(id)arg1 databaseObject:(id)arg2 databaseSnapshot:(id)arg3 conflictingObjects:(id)arg4 conflictingSnapshots:(id)arg5;

@end
