
@interface TPSCallWaitingController : NSObject <TPSRequestControllerDelegate> {
    <TPSCallWaitingControllerDelegate> * _delegate;
    TPSCallWaitingRequestController * _requestController;
    long long  _state;
    CTXPCServiceSubscriptionContext * _subscriptionContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TPSCallWaitingControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) TPSCallWaitingRequestController *requestController;
@property (nonatomic) long long state;
@property (nonatomic, readonly) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)init;
- (id)initWithSubscriptionContext:(id)arg1;
- (id)requestController;
- (void)requestController:(id)arg1 didReceiveResponse:(id)arg2;
- (void)requestStateChange:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;
- (id)subscriptionContext;

@end
