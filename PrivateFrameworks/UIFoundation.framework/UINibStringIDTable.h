
@interface UINibStringIDTable : NSObject {
    struct UIStringIDTableBucket { id x1; unsigned long long x2; struct UIStringIDTableBucket {} *x3; } * buckets;
    unsigned long long  count;
    unsigned long long  hashMask;
    struct UIStringIDTableBucket {} ** table;
}

- (long long)count;
- (void)dealloc;
- (id)initWithKeysTransferingOwnership:(id*)arg1 count:(unsigned long long)arg2;
- (bool)lookupKey:(id)arg1 identifier:(long long*)arg2;

@end
