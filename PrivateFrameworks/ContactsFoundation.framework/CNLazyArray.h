
@interface CNLazyArray : NSObject <NSFastEnumeration> {
    <_CNLazyArrayOperation> * _operationChain;
    NSMutableArray * _output;
}

@property (readonly) NSArray *allObjects;
@property (readonly) id firstObject;
@property (readonly) id lastObject;
@property (retain) <_CNLazyArrayOperation> *operationChain;
@property (readonly) NSMutableArray *output;

- (void).cxx_destruct;
- (id /* block */)all;
- (id)allObjects;
- (id /* block */)any;
- (id /* block */)compactMap;
- (void)consumeAllObjects;
- (bool)consumeNextObject;
- (void)consumeToIndex:(unsigned long long)arg1;
- (id /* block */)contains;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)distinct;
- (id /* block */)doOnNext;
- (id /* block */)filter;
- (id)firstObject;
- (id /* block */)flatMap;
- (id)init;
- (id)initWithArray:(id)arg1;
- (id)initWithEnumerator:(id)arg1;
- (id)initWithFastEnumeration:(id)arg1;
- (id)initWithInitialState:(id)arg1 condition:(id /* block */)arg2 nextState:(id /* block */)arg3 resultSelector:(id /* block */)arg4;
- (id)initWithSource:(id)arg1;
- (id)lastObject;
- (id /* block */)map;
- (id /* block */)none;
- (id)operationChain;
- (id)output;
- (id /* block */)reduce;
- (void)setOperationChain:(id)arg1;
- (id /* block */)skip;
- (id /* block */)skipLast;
- (id /* block */)take;
- (id /* block */)takeLast;

@end
