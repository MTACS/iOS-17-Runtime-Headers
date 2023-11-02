
@interface _PASLazyImmortalResult : _PASLazyResult {
    _Atomic bool  _done;
}

- (id)_initWithBlock:(id /* block */)arg1;
- (id)initWithResult:(id)arg1;
- (id)result;
- (id)resultIfAvailable;

@end
