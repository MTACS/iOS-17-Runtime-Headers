
@interface _UIViewBackingObserver : NSObject {
    id /* block */  _observerBlock;
}

@property (nonatomic, copy) id /* block */ observerBlock;

+ (id)sharedObserver;

- (void).cxx_destruct;
- (void)observe:(id)arg1 forKeyPath:(id)arg2 once:(id /* block */)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id /* block */)observerBlock;
- (void)setObserverBlock:(id /* block */)arg1;

@end
