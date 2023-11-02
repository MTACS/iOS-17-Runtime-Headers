
@interface HMFKeyValueBlockObserver : HMFObject <HMFLogging> {
    id /* block */  _handler;
    NSString * _keyPath;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id  _observedObject;
    bool  _observing;
    unsigned long long  _options;
    bool  _valid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *keyPath;
@property (readonly) id observedObject;
@property (readonly) unsigned long long options;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (bool)__invalidate;
- (void)dealloc;
- (id /* block */)handler;
- (id)init;
- (id)initWithKeyPath:(id)arg1 object:(id)arg2;
- (id)initWithKeyPath:(id)arg1 object:(id)arg2 options:(unsigned long long)arg3;
- (void)invalidate;
- (id)keyPath;
- (id)logIdentifier;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)observedObject;
- (unsigned long long)options;
- (void)setHandler:(id /* block */)arg1;

@end
