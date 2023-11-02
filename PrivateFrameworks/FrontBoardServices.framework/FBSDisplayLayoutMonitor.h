
@interface FBSDisplayLayoutMonitor : NSObject <BSInvalidatable> {
    long long  _deprecated_displayType;
    BSServiceConnectionEndpoint * _deprecated_endpoint;
    bool  _deprecated_mutable;
    BOOL  _deprecated_qos;
    bool  _deprecated_singleton;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id /* block */  _lock_deprecated_handler;
    NSMapTable * _lock_deprecated_observerAssertions;
    _FBSDisplayLayoutServiceAssertion * _lock_handlerAssertion;
    bool  _lock_invalidated;
}

@property (nonatomic, readonly) FBSDisplayLayout *currentLayout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_endpointForDisplayType:(long long)arg1;
+ (id)interface;
+ (id)mainDisplayInstanceIdentifier;
+ (id)monitorWithConfiguration:(id)arg1;
+ (id)serviceIdentifier;
+ (id)sharedMonitorForDisplayType:(long long)arg1;

- (void).cxx_destruct;
- (id)_initWithConfiguration:(id)arg1 singleton:(bool)arg2 needsDefaultPriority:(bool)arg3 mutable:(bool)arg4 displayType:(long long)arg5 mutableHandler:(id /* block */)arg6;
- (void)addObserver:(id)arg1;
- (id)currentLayout;
- (void)dealloc;
- (long long)displayType;
- (id /* block */)handler;
- (id)init;
- (id)initWithDisplayType:(long long)arg1;
- (id)initWithDisplayType:(long long)arg1 handler:(id /* block */)arg2;
- (id)initWithDisplayType:(long long)arg1 qualityOfService:(unsigned long long)arg2 handler:(id /* block */)arg3;
- (void)invalidate;
- (unsigned long long)qualityOfService;
- (void)removeObserver:(id)arg1;
- (void)setHandler:(id /* block */)arg1;

@end
