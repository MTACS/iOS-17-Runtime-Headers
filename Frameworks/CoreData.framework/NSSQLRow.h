
@interface NSSQLRow : NSPersistentCacheRow <NSCopying> {
    _CDSnapshot * _snapshot;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;
+ (unsigned int)newBatchRowAllocation:(id*)arg1 count:(unsigned int)arg2 forSQLEntity:(id)arg3 withOwnedObjectIDs:(id*)arg4 andTimestamp:(double)arg5;

- (id)_snapshot_;
- (unsigned int)_versionNumber;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithSQLEntity:(id)arg1 objectID:(id)arg2;
- (id)initWithSQLEntity:(id)arg1 ownedObjectID:(id)arg2 andTimestamp:(double)arg3;
- (bool)isEqual:(id)arg1;
- (const id*)knownKeyValuesPointer;
- (id)newObjectIDForToOne:(id)arg1;
- (id)objectID;
- (void)setForeignEntityKeySlot:(unsigned int)arg1 entityKey:(unsigned int)arg2;
- (void)setForeignKeySlot:(unsigned int)arg1 int64:(long long)arg2;
- (void)setForeignOrderKeySlot:(unsigned int)arg1 orderKey:(unsigned int)arg2;
- (void)setObjectID:(id)arg1;
- (void)setOptLock:(long long)arg1;
- (id)valueForKey:(id)arg1;
- (unsigned long long)version;

@end
