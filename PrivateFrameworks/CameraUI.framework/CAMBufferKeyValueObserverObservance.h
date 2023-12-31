
@interface CAMBufferKeyValueObserverObservance : CAMBufferObservance {
    NSString * _keyPath;
    NSObject * _object;
}

@property (nonatomic, readonly, copy) NSString *keyPath;
@property (nonatomic, readonly) NSObject *object;

- (void).cxx_destruct;
- (id)initWithKeyPath:(id)arg1 ofObject:(id)arg2 withPredicate:(id /* block */)arg3 removedOnceEnabled:(bool)arg4;
- (id)keyPath;
- (id)object;
- (void)setupObservanceForBuffer:(id)arg1;
- (bool)shouldBeFulfilledByChange:(id)arg1;
- (void)teardownObservanceForBuffer:(id)arg1;

@end
