
@interface __NSArrayReversed : NSArray {
    id  _array;
    unsigned long long  _cnt;
}

- (unsigned long long)count;
- (void)dealloc;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithArray:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;

@end
