
@interface AMSMescalAccountPrimeSession : NSObject {
    <AMSBagProtocol> * _bag;
    AMSMescalSession * _session;
}

@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (nonatomic, retain) AMSMescalSession *session;

- (void).cxx_destruct;
- (id)bag;
- (id)initWithBag:(id)arg1;
- (id)primeSignatureForData:(id)arg1;
- (id)session;
- (void)setBag:(id)arg1;
- (void)setSession:(id)arg1;
- (id)signData:(id)arg1;
- (id)verifyPrimeSignature:(id)arg1;

@end
