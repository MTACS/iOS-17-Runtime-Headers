
@interface _CNLazyArrayGeneratorSource : NSObject <_CNLazyArrayOperation> {
    id /* block */  _condition;
    bool  _firstTime;
    id /* block */  _nextState;
    id /* block */  _resultFromState;
    id  _state;
}

- (void).cxx_destruct;
- (id)initWithInitialState:(id)arg1 condition:(id /* block */)arg2 nextState:(id /* block */)arg3 resultSelector:(id /* block */)arg4;
- (id)nextObject;

@end
