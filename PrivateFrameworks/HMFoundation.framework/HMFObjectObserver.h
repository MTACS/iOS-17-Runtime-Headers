
@interface HMFObjectObserver : HMFObject {
    unsigned long long  _cachedHash;
    id /* block */  _deallocationBlock;
    id  _observedObject;
}

@property (readonly) unsigned long long cachedHash;
@property (copy) id /* block */ deallocationBlock;
@property (readonly) id observedObject;

- (void).cxx_destruct;
- (void)_startObserving;
- (void)_stopObserving;
- (unsigned long long)cachedHash;
- (void)dealloc;
- (id /* block */)deallocationBlock;
- (unsigned long long)hash;
- (id)init;
- (id)initWithObservedObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)observedObject;
- (void)setDeallocationBlock:(id /* block */)arg1;

@end
