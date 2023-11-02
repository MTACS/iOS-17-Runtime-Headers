
@interface RETaggedFeatureValueCountedSet : NSObject <NSCopying> {
    struct __CFBag { } * _bag;
}

@property (readonly) unsigned long long count;

- (void)addFeatureValue:(unsigned long long)arg1;
- (bool)containsFeatureValue:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countForFeatureValue:(unsigned long long)arg1;
- (void)dealloc;
- (void)enumerateFeatureValuesUsingBlock:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)removeFeatureValue:(unsigned long long)arg1;

@end
