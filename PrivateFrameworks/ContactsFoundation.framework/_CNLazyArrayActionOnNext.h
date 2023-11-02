
@interface _CNLazyArrayActionOnNext : _CNLazyArrayOperator {
    id /* block */  _action;
}

- (void).cxx_destruct;
- (id)initWithInput:(id)arg1 action:(id /* block */)arg2;
- (id)nextObject;

@end
