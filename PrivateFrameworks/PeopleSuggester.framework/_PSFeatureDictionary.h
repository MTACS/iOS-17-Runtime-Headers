
@interface _PSFeatureDictionary : NSMutableDictionary {
    unsigned long long  _count;
    NSMutableDictionary * _otherValues;
    NSMutableDictionary * _timeBuckets;
}

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)init;
- (id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
- (id)keyEnumerator;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end
