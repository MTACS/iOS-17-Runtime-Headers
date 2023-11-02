
@interface CRKConcreteIDSMessageDidReceiveSubscription : NSObject <CRKCancelable, CRKResumable> {
    <CRKConcreteIDSMessageDidReceiveSubscriptionDelegate> * _delegate;
    id /* block */  _handler;
    bool  _resumed;
}

@property (nonatomic) <CRKConcreteIDSMessageDidReceiveSubscriptionDelegate> *delegate;
@property (nonatomic, copy) id /* block */ handler;
@property (getter=isResumed, nonatomic) bool resumed;

- (void).cxx_destruct;
- (void)cancel;
- (id)delegate;
- (id /* block */)handler;
- (id)initWithHandler:(id /* block */)arg1;
- (bool)isResumed;
- (void)receiveMessage:(id)arg1 senderAppleID:(id)arg2 senderAddress:(id)arg3;
- (void)resume;
- (void)setDelegate:(id)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setResumed:(bool)arg1;

@end
