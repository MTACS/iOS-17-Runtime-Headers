
@interface _NACRoutesObserverRecord : NSObject {
    MPAVRoutingController * _routingController;
    NACRunAssertion * _runAssertion;
}

@property (nonatomic, retain) MPAVRoutingController *routingController;
@property (nonatomic, retain) NACRunAssertion *runAssertion;

- (void).cxx_destruct;
- (id)routingController;
- (id)runAssertion;
- (void)setRoutingController:(id)arg1;
- (void)setRunAssertion:(id)arg1;

@end
