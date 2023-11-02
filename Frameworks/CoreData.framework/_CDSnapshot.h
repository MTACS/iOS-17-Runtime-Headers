
@interface _CDSnapshot : NSObject <NSCopying, NSMutableCopying> {
    struct _snapshotFlags_st { 
        unsigned int _readOnly : 1; 
        unsigned int _reservedFlags : 7; 
    }  _cd_flags;
    unsigned char  _cd_nullFlags_;
    NSManagedObjectID * _cd_objectID;
    int  _cd_rc;
    int  _cd_version;
}

+ (void)_entityDeallocated;
+ (void)_invalidateStaticCaches;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (Class)classForEntity:(id)arg1;
+ (void)initialize;
+ (unsigned int)newBatchAllocation:(id*)arg1 count:(unsigned int)arg2 withOwnedObjectIDs:(id*)arg3;

- (bool)_isDeallocating;
- (bool)_tryRetain;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;

@end
