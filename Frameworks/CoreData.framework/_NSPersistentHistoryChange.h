
@interface _NSPersistentHistoryChange : NSPersistentHistoryChange <NSSecureCoding> {
    NSManagedObjectID * _backingObjectID;
    long long  _changeID;
    long long  _changeType;
    NSManagedObjectID * _changedObjectID;
    NSData * _columns;
    NSSQLEntity * _sqlEntity;
    NSDictionary * _tombstone;
    NSPersistentHistoryTransaction * _transaction;
}

+ (bool)supportsSecureCoding;

- (id)_backingObjectID;
- (void)_setTransaction:(id)arg1;
- (long long)changeID;
- (long long)changeType;
- (id)changedObjectID;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 andChangeObjectID:(id)arg2;
- (id)tombstone;
- (id)transaction;
- (id)updatedProperties;

@end
