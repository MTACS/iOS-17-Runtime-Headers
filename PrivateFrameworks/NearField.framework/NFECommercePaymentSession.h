
@interface NFECommercePaymentSession : NFSession <NFECommercePaymentSessionCallbacks> {
    NSDictionary * _appletsById;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allApplets;
- (id)appletWithIdentifier:(id)arg1;
- (void)didStartSession:(id)arg1;
- (id)performECommercePayment:(id)arg1 request:(id)arg2;
- (id)performECommercePayment:(id)arg1 request:(id)arg2 error:(id*)arg3;

@end
