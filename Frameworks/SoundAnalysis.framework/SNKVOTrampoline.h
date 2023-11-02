
@interface SNKVOTrampoline : NSObject {
    void observeValue;
}

@property (nonatomic, copy) id /* block */ observeValue;

- (void).cxx_destruct;
- (id)init;
- (id /* block */)observeValue;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setObserveValue:(id /* block */)arg1;

@end
