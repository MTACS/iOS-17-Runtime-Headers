
@interface UIDraggingSystemSession : NSObject {
    bool  _commandeered;
    UIDraggingSystemSessionInfo * _info;
    UIDraggingSystemTouchRoutingPolicy * _routingPolicy;
    <_DUIServerSessionSystemApp> * _serverSession;
}

@property (getter=isCommandeered, nonatomic) bool commandeered;
@property (nonatomic, retain) UIDraggingSystemSessionInfo *info;
@property (nonatomic, retain) UIDraggingSystemTouchRoutingPolicy *routingPolicy;
@property (getter=_serverSession, nonatomic, retain) <_DUIServerSessionSystemApp> *serverSession;

- (void).cxx_destruct;
- (unsigned long long)_indexOfDragItemInSession:(id)arg1;
- (id)_serverSession;
- (void)commandeerImmediately;
- (id)info;
- (bool)isCommandeered;
- (void)loadURLForItem:(id)arg1 completion:(id /* block */)arg2;
- (void)loadUserActivityForItem:(id)arg1 completion:(id /* block */)arg2;
- (void)requestDragContinuationEndpointWithCompletion:(id /* block */)arg1;
- (id)routingPolicy;
- (void)setCommandeered:(bool)arg1;
- (void)setInfo:(id)arg1;
- (void)setRoutingPolicy:(id)arg1;
- (void)setServerSession:(id)arg1;

@end
