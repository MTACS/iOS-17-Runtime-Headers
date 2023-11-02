
@interface CPSSessionRemoteObserver : NSObject <CPSSessionObserving> {
    <NSXPCProxyCreating> * _xpcProxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)observerWithXPCProxy:(id)arg1;

- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithXPCProxy:(id)arg1;

@end
