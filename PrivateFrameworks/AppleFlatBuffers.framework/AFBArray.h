
@interface AFBArray : NSArray {
    AFBBufRef * _bufRef;
    unsigned long long  _count;
    id /* block */  _objectAtIndex;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)init;
- (id)initWithBufRef:(id)arg1 count:(unsigned long long)arg2 objectAtIndex:(id /* block */)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2;
- (id)objectAtIndex:(unsigned long long)arg1;

@end
