
@interface _FBSDisplayLayoutServiceAssertion : NSObject <BSInvalidatable> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    _FBSDisplayLayoutService * _lock_service;
}

@property (nonatomic, readonly) FBSDisplayLayout *currentLayout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)currentLayout;
- (void)dealloc;
- (id)init;
- (id)initWithEndpoint:(id)arg1 qos:(BOOL)arg2 observer:(id /* block */)arg3;
- (void)invalidate;

@end
