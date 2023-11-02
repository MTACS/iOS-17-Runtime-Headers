
@interface BSIntegerMap : NSObject <NSCopying, NSMutableCopying> {
    NSMapTable * _mapTable;
    id  _zeroIndexValue;
}

@property (nonatomic, readonly) unsigned long long count;

- (void).cxx_destruct;
- (id)allKeys;
- (id)allValues;
- (bool)containsObjectForKey:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)description;
- (void)enumerateKeysWithBlock:(id /* block */)arg1;
- (void)enumerateWithBlock:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectForKey:(long long)arg1;

@end
