
@interface TMLJSONObserverInfo : NSObject {
    id /* block */  _callback;
    unsigned long long  _hash;
    NSString * _keyPath;
    id  _target;
    id  _targetUnsafe;
}

@property (nonatomic, readonly) id /* block */ callback;
@property (nonatomic, readonly, copy) NSString *keyPath;
@property (nonatomic, readonly) id target;
@property (nonatomic, readonly) id targetUnsafe;

- (void).cxx_destruct;
- (id /* block */)callback;
- (unsigned long long)hash;
- (id)initWithObserver:(id)arg1 keyPath:(id)arg2 callback:(id /* block */)arg3;
- (bool)isEqual:(id)arg1;
- (id)keyPath;
- (void)notify:(id)arg1;
- (id)target;
- (id)targetUnsafe;

@end
