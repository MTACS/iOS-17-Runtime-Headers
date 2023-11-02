
@interface HMDDelegatingMessageRouter : NSObject <HMDMessageRouter, HMFLogging> {
    <HMDDelegatingMessageRouterDataSource> * _dataSource;
    HMFMessageDispatcher * _messageDispatcher;
    NSArray * _routers;
}

@property <HMDDelegatingMessageRouterDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) NSArray *routers;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)dataSource;
- (id)initWithMessageDispatcher:(id)arg1 routers:(id)arg2;
- (id)messageDispatcher;
- (void)routeMessage:(id)arg1 allowRemoteRelayFromPrimary:(bool)arg2 localHandler:(id /* block */)arg3;
- (void)routeMessage:(id)arg1 localHandler:(id /* block */)arg2;
- (id)routers;
- (void)setDataSource:(id)arg1;

@end
