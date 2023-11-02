
@interface PCCAttestation : NSObject {
    NSData * _applicationEnclaveQuote;
    NSString * _certificate;
    NSData * _quotingEnclaveQuote;
    NSData * _routingToken;
}

@property (nonatomic, retain) NSData *applicationEnclaveQuote;
@property (nonatomic, retain) NSString *certificate;
@property (nonatomic, retain) NSData *quotingEnclaveQuote;
@property (nonatomic, retain) NSData *routingToken;

- (void).cxx_destruct;
- (id)applicationEnclaveQuote;
- (id)certificate;
- (id)initWithCertificate:(id)arg1 applicationEnclaveQuote:(id)arg2 quotingEnclaveQuote:(id)arg3 routingToken:(id)arg4;
- (id)quotingEnclaveQuote;
- (id)routingToken;
- (void)setApplicationEnclaveQuote:(id)arg1;
- (void)setCertificate:(id)arg1;
- (void)setQuotingEnclaveQuote:(id)arg1;
- (void)setRoutingToken:(id)arg1;

@end
