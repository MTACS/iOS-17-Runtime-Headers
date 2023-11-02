
@interface _NSLineBreakerQueue : NSObject {
    const void ** _buf;
    unsigned long long  _capacity;
    unsigned long long  _count;
    unsigned long long  _end;
    unsigned long long  _start;
}

- (void)_ensureCapacity:(unsigned long long)arg1;
- (void)appendValue:(const void*)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (void)enumerateValuesWithBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)removeAllValues;
- (void)removeValuesBeforeIndex:(unsigned long long)arg1;
- (const void*)valueAtIndex:(unsigned long long)arg1;

@end
