
@interface ACTrackedSet : NSObject <NSCoding, NSCopying, NSMutableCopying, NSSecureCoding> {
    NSMutableDictionary * _changesDictionary;
    NSMutableSet * _underlyingSet;
}

@property (readonly) unsigned long long count;

+ (id)set;
+ (id)setWithArray:(id)arg1;
+ (id)setWithSet:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithEnumerable:(id)arg1 count:(unsigned long long)arg2;
- (id)_initWithUnderlyingSet:(id)arg1 changesDictionary:(id)arg2;
- (id)allModifications;
- (id)allObjects;
- (id)anyObject;
- (bool)containsObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateModificationsUsingBlock:(id /* block */)arg1;
- (void)enumerateModificationsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateObjectsUsingBlock:(id /* block */)arg1;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (unsigned long long)hash;
- (id)init;
- (id)initWithArray:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2;
- (id)initWithSet:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTrackedSet:(id)arg1;
- (id)member:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectEnumerator;

@end
