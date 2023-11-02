
@protocol HMDDelegatingMessageRouterDataSource <NSObject>

@required

- (bool)router:(HMDDelegatingMessageRouter *)arg1 shouldHandleMessage:(HMFMessage *)arg2 usingRouter:(id <HMDMessageRouter>)arg3;

@end
