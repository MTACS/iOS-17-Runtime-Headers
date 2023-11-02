
@interface _PASArrayProxy : _PASLazyArrayBase <NSFastEnumeration> {
    id /* block */  _countBlock;
    id /* block */  _objectAtIndexBlock;
}

- (void).cxx_destruct;
- (id)_pas_unproxy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2;
- (id)objectAtIndex:(unsigned long long)arg1;

@end
