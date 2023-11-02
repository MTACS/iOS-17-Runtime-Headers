
@interface RETaggedFeatureValueArray : NSObject <NSCopying> {
    struct __CFArray { } * _array;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (readonly) unsigned long long count;

- (unsigned long long)_locked_count;
- (unsigned long long)_locked_featureValueAtIndex:(unsigned long long)arg1;
- (void)addFeatureValue:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (void)enumerateFeatureValuesUsingBlock:(id /* block */)arg1;
- (unsigned long long)featureValueAtIndex:(unsigned long long)arg1;
- (unsigned long long)firstFeatureValue;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithFeatureValues:(id)arg1;
- (id)initWithValues:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)insertFeatureValue:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)lastFeatureValue;
- (void)removeAllFeatureValues;
- (void)removeFeatureValueAtIndex:(unsigned long long)arg1;
- (void)replaceFeatureValueAtIndex:(unsigned long long)arg1 withValue:(unsigned long long)arg2;

@end
