
@interface _CNDRemoteExtensionContext : _CNDExtensionContext <_CNDRemoteExtensionContextProtocol> {
    CNDonationExtensionRequestHandler * _requestHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CNDonationExtensionRequestHandler *requestHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)hostContext;
- (void)redonateAllValuesWithReason:(unsigned long long)arg1;
- (void)renewExpirationDateForDonatedValue:(id)arg1 acknowledgementHandler:(id /* block */)arg2;
- (id)requestHandler;
- (void)setRequestHandler:(id)arg1;

@end
