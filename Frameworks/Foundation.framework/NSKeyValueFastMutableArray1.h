
@interface NSKeyValueFastMutableArray1 : NSKeyValueFastMutableArray {
    NSKeyValueNonmutatingArrayMethodSet * _nonmutatingMethods;
}

- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;
- (void)_proxyNonGCFinalize;
- (unsigned long long)count;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectsAtIndexes:(id)arg1;

@end
