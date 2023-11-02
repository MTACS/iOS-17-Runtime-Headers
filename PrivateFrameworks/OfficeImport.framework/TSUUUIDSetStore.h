
@interface TSUUUIDSetStore : NSObject <NSCopying> {
    unsigned int  _highestIndex;
    NSMutableDictionary * _indexesUsingUuid;
    NSLock * _lock;
    TSUSparseArray * _uuidSetForIndex;
}

@property (readonly) unsigned long long count;

- (void).cxx_destruct;
- (void)_foreachUuidSet:(id /* block */)arg1;
- (unsigned int)addSet:(id)arg1;
- (unsigned int)addSetForSingleUuid:(const void*)arg1;
- (unsigned int)addSetForUuids:(const void*)arg1;
- (bool)containsUuidSet:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)description;
- (void)foreachUuidSet:(id /* block */)arg1;
- (unsigned int)indexOfSet:(id)arg1;
- (id)indexesUsingAnyOfUuids:(const void*)arg1;
- (id)indexesUsingUuid:(const void*)arg1;
- (id)init;
- (void)p_addSet:(id)arg1 atIndex:(unsigned int)arg2;
- (void)removeSetAtIndex:(unsigned int)arg1;
- (id)setForIndex:(unsigned int)arg1;
- (id)subsetStoreForIndexes:(id)arg1;

@end
