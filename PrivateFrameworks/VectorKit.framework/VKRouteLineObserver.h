
@interface VKRouteLineObserver : NSObject <VKRouteLineObserverProtocol> {
    VKRouteLine * _routeLine;
    void * _transitSupport;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTransitSupport:(void*)arg1 andRouteLine:(id)arg2;
- (void)routeLineDidUpdateSections:(id)arg1;

@end
