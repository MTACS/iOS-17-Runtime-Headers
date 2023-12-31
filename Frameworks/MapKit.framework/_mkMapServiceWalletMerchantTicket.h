
@interface _mkMapServiceWalletMerchantTicket : NSObject <MKMapServiceWalletMerchantTicket> {
    <GEOMapServiceTicket> * _ticket;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithRequest:(id)arg1 traits:(id)arg2;
- (void)submitWithCompletionQueue:(id)arg1 handler:(id /* block */)arg2;

@end
