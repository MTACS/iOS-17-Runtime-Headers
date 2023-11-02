
@interface SCRCIndexMap : NSObject <NSCopying, NSSecureCoding> {
    struct __CFDictionary { } * _map;
}

+ (bool)supportsSecureCoding;

- (unsigned long long*)_createIndexesWithSize:(unsigned long long*)arg1;
- (id)_initAndDeepCopyIndexMap:(id)arg1;
- (id)_initWithIndexMap:(id)arg1;
- (void)addObjectsFromIndexMap:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)deepCopyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)indexes;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjects:(const id*)arg1 andIndexes:(unsigned long long*)arg2 count:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (id)objectForIndex:(unsigned long long)arg1;
- (void)removeAllObjects;
- (void)removeObjectForIndex:(unsigned long long)arg1;
- (void)setObject:(id)arg1 forIndex:(unsigned long long)arg2;

@end
