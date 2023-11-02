
@interface _CNDonationAgentXPCMethodScope : NSObject {
    CNPromise * _promise;
    <DonationAgentProtocol> * _proxy;
}

@property (nonatomic, readonly) CNPromise *promise;
@property (nonatomic, readonly) <DonationAgentProtocol> *proxy;

- (void).cxx_destruct;
- (id)init;
- (id)initWithConnection:(id)arg1 promise:(id)arg2 proxy:(id)arg3;
- (id)initWithPromise:(id)arg1 proxy:(id)arg2;
- (id)promise;
- (id)proxy;

@end
