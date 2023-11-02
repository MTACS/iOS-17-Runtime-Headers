
@interface VKRouteContextObserverThunk : NSObject <VKRouteContextObserver> {
    struct _retain_ptr<VKRouteContext *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { 
        int (**_vptr$_retain_ptr)(); 
        VKRouteContext *_obj; 
        struct _retain_objc_arc { } _retain; 
        struct _release_objc_arc { } _release; 
    }  _routeContext;
    void * _transitSupport;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRouteContext:(id)arg1 transitSupport:(void*)arg2;
- (void)routeContextStateDidChange:(id)arg1;

@end
