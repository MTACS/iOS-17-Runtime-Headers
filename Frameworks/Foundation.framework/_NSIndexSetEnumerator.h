
@interface _NSIndexSetEnumerator : NSEnumerator {
    unsigned long long  _index;
    NSIndexSet * _indexSet;
}

- (void)dealloc;
- (id)initWithIndexSet:(id)arg1;
- (id)nextObject;

@end
