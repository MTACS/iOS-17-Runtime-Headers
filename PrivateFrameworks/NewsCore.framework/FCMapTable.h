
@interface FCMapTable : NSObject <NSCopying, NSFastEnumeration, NSSecureCoding> {
    NSString * _keyClassName;
    NSMapTable * _mapTable;
    NSString * _valueClassName;
}

@property (readonly) unsigned long long count;
@property (readonly, copy) NSPointerFunctions *keyPointerFunctions;
@property (readonly, copy) NSPointerFunctions *valuePointerFunctions;

+ (id)mapTableWithKeyOptions:(unsigned long long)arg1 valueOptions:(unsigned long long)arg2;
+ (id)strongToStrongObjectsMapTable;
+ (id)strongToWeakObjectsMapTable;
+ (bool)supportsSecureCoding;
+ (id)weakToStrongObjectsMapTable;
+ (id)weakToWeakObjectsMapTable;

- (void).cxx_destruct;
- (void)addObjectsFromMapTable:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyOptions:(unsigned long long)arg1 valueOptions:(unsigned long long)arg2 capacity:(unsigned long long)arg3;
- (id)initWithKeyPointerFunctions:(id)arg1 valuePointerFunctions:(id)arg2 capacity:(unsigned long long)arg3;
- (id)initWithMapTable:(id)arg1;
- (id)keyEnumerator;
- (id)keyPointerFunctions;
- (id)objectEnumerator;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)valuePointerFunctions;

@end
