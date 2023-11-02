
@interface CRKConcreteIDSMessageDidSendSubscription : NSObject <CRKCancelable, CRKResumable> {
    <CRKConcreteIDSMessageDidSendSubscriptionDelegate> * _delegate;
    id /* block */  _handler;
    bool  _resumed;
}

@property (nonatomic) <CRKConcreteIDSMessageDidSendSubscriptionDelegate> *delegate;
@property (nonatomic, copy) id /* block */ handler;
@property (getter=isResumed, nonatomic) bool resumed;

- (void).cxx_destruct;
- (void)cancel;
- (id)delegate;
- (id /* block */)handler;
- (id)initWithHandler:(id /* block */)arg1;
- (bool)isResumed;
- (void)receiveMessageIdentifier:(id)arg1 didSucceed:(bool)arg2 error:(id)arg3;
- (void)resume;
- (void)setDelegate:(id)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setResumed:(bool)arg1;

@end
