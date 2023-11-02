
@interface _PASLPArray : _PASLazyArrayBase <NSFastEnumeration> {
    _PASLPArrayContext * _context;
    NSData * _objects;
    <_PASLPReaderProtocol> * _reader;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLazyPlistReader:(id)arg1 context:(id)arg2;
- (id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2;
- (id)objectAtIndex:(unsigned long long)arg1;

@end
