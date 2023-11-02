
@interface GKDiscoveryBonjourResolveContainer : NSObject {
    GKDiscoveryBonjour * _context;
    id /* block */  _resolveCompletionHandler;
    NSMutableArray * _serviceRefList;
}

@property (nonatomic) GKDiscoveryBonjour *context;
@property (nonatomic, copy) id /* block */ resolveCompletionHandler;
@property (nonatomic, retain) NSMutableArray *serviceRefList;

- (id)context;
- (void)dealloc;
- (id)init;
- (id /* block */)resolveCompletionHandler;
- (id)serviceRefList;
- (void)setContext:(id)arg1;
- (void)setResolveCompletionHandler:(id /* block */)arg1;
- (void)setServiceRefList:(id)arg1;

@end
