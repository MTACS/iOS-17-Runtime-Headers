
@interface BSServiceConnectionEndpointInjector : NSObject <BSInvalidatable, BSServiceConnectionEndpointInjectorConfiguring> {
    NSArray * _additionalAttributes;
    RBSAssertion * _assertion;
    NSString * _domain;
    NSString * _inheritingEnvironment;
    NSString * _instance;
    bool  _invalidated;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    BSServiceManager * _manager;
    NSString * _service;
    RBSTarget * _target;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)injectorWithConfigurator:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)invalidate;
- (void)setAdditionalAttributes:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setInheritingEnvironment:(id)arg1;
- (void)setInstance:(id)arg1;
- (void)setService:(id)arg1;
- (void)setTarget:(id)arg1;

@end
