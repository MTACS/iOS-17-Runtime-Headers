
@interface EKFrozenReminderObject : EKPersistentObject {
    EKChangeSet * _changeSet;
    NSArray * _path;
    id  _remObject;
    EKReminderStore * _reminderStore;
}

@property (nonatomic, copy) NSArray *path;
@property (nonatomic, readonly) EKChangeSet *uncommittedChanges;

+ (bool)canCommitSelf;
+ (Class)frozenClass;
+ (Class)meltedClass;
+ (id)uniqueIdentifierForREMObject:(id)arg1;

- (void).cxx_destruct;
- (id)REMObject;
- (bool)_applyChangesToSaveRequest:(id)arg1 error:(id*)arg2;
- (id)changeSet;
- (int)entityType;
- (id)existingMeltedObject;
- (bool)existsInStore;
- (id)frozenObject;
- (unsigned long long)hash;
- (id)initWithREMObject:(id)arg1 inStore:(id)arg2;
- (id)initWithREMObject:(id)arg1 inStore:(id)arg2 withChanges:(id)arg3;
- (bool)isCompletelyEqual:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqual:(id)arg1 ignoringProperties:(id)arg2;
- (bool)isFrozen;
- (bool)isNew;
- (bool)isPartialObject;
- (bool)isPropertyUnavailable:(id)arg1;
- (id)path;
- (id)remObjectID;
- (id)semanticIdentifier;
- (void)setPath:(id)arg1;
- (id)uncommittedChanges;
- (id)uniqueIdentifier;
- (id)updateParentToCommitSelf:(id)arg1;
- (id)updatedFrozenObjectWithChanges:(id)arg1;
- (id)updatedFrozenObjectWithChanges:(id)arg1 updatedChildren:(id)arg2;
- (id)valueForSingleValueKey:(id)arg1 backingValue:(id /* block */)arg2;

@end
