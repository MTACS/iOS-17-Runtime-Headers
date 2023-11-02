
@interface AVProxyKVOObserver : NSObject {
    bool  _canHandleChanges;
    id /* block */  _changesBlock;
    bool  _includeChanges;
    bool  _includeInitialValue;
    NSSet * _keyPaths;
    id  _retainedObservedObject;
    NSString * _token;
    id  _unsafeUnretainedObservedObject;
}

@property (nonatomic, readonly) id /* block */ changesBlock;
@property (nonatomic, readonly) bool includeChanges;
@property (nonatomic, readonly) bool includeInitialValue;
@property (nonatomic, readonly) NSSet *keyPaths;
@property (nonatomic, readonly) NSString *token;

- (void).cxx_destruct;
- (void)_handleValueChangeForKeyPath:(id)arg1 ofObject:(id)arg2 oldValue:(id)arg3 newValue:(id)arg4 context:(void*)arg5;
- (id /* block */)changesBlock;
- (bool)includeChanges;
- (bool)includeInitialValue;
- (id)initWithObservedObject:(id)arg1 observer:(id)arg2 keyPaths:(id)arg3 retainingObservedObject:(bool)arg4 includeInitialValue:(bool)arg5 includeChanges:(bool)arg6 changesBlock:(id /* block */)arg7;
- (id)keyPaths;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)startObserving:(id)arg1 completion:(id /* block */)arg2;
- (void)stopObserving;
- (id)token;

@end
