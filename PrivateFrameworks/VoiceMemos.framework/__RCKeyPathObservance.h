
@interface __RCKeyPathObservance : NSObject <RCKeyPathObservance> {
    NSArray * _keyPaths;
    <NSObject> * _object;
    id /* block */  _observer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *keyPaths;
@property (nonatomic) <NSObject> *object;
@property (nonatomic, copy) id /* block */ observer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)keyPaths;
- (id)object;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id /* block */)observer;
- (void)remove;
- (void)setKeyPaths:(id)arg1;
- (void)setObject:(id)arg1;
- (void)setObserver:(id /* block */)arg1;

@end
