
@interface _NSConstantDictionaryEnumerator : NSEnumerator {
    unsigned long long  capacity;
    id * currentKey;
    unsigned long long  keyIndex;
}

- (id)allObjects;
- (id)initWithFirstKeyPointer:(id*)arg1 capacity:(unsigned long long)arg2;
- (id)nextObject;

@end
