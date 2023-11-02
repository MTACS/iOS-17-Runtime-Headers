
@interface PKNotifySubregistration : NSObject <PKInvalidatable> {
    id /* block */  _handler;
    bool  _invalidated;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    PKNotifyRegistration * _parent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInvalidated, nonatomic, readonly) bool invalidated;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invalidateFromParent:(bool)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithParent:(id)arg1 handler:(id /* block */)arg2;
- (void)invalidate;
- (void)invokeHandler;
- (bool)isInvalidated;

@end
