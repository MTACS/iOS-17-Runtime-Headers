
@interface _CNLazyArrayOperatorFlatMap : _CNLazyArrayOperator {
    CNQueue * _buffer;
    id /* block */  _transform;
}

- (void).cxx_destruct;
- (id)initWithInput:(id)arg1 transform:(id /* block */)arg2;
- (id)nextObject;

@end
