
@interface TSUIntegerKeyDictionary : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    struct __CFDictionary { } * mDictionary;
}

+ (bool)supportsSecureCoding;

- (id)allValues;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)keyEnumerator;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectForKey:(long long)arg1;
- (struct __CFDictionary { }*)p_cfDictionary;
- (void)removeAllObjects;
- (void)removeObjectForKey:(long long)arg1;
- (void)setObject:(id)arg1 forKey:(long long)arg2;
- (id)valueEnumerator;

@end
