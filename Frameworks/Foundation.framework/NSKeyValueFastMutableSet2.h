
@interface NSKeyValueFastMutableSet2 : NSKeyValueFastMutableSet {
    NSKeyValueGetter * _valueGetter;
}

- (id)_nonNilSetValueWithSelector:(SEL)arg1;
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;
- (void)_proxyNonGCFinalize;
- (unsigned long long)count;
- (id)member:(id)arg1;
- (id)objectEnumerator;

@end
