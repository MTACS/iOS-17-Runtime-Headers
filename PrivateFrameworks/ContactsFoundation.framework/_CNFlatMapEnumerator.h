
@interface _CNFlatMapEnumerator : NSEnumerator {
    NSEnumerator * _buffer;
    NSEnumerator * _enumerator;
    id /* block */  _transform;
}

- (void).cxx_destruct;
- (id)initWithEnumerator:(id)arg1 transform:(id /* block */)arg2;
- (id)nextBufferedObject;
- (id)nextObject;
- (void)refillBuffer;

@end
