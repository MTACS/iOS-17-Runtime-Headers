
@interface _GCPhysicalInputElementEnumerator : NSEnumerator {
    GCPhysicalInputElementCollection * _collection;
    unsigned long long  _currentIndex;
}

- (void).cxx_destruct;
- (id)init;
- (id)nextObject;

@end
