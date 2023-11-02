
@protocol ASCServices <NSObject>

@required

- (AMSPromise *)lockupFetcherService;
- (AMSPromise *)metricsService;
- (AMSPromise *)offerStateServiceWithDelegate:(id <ASCAppOfferStateDelegate>)arg1;
- (AMSBinaryPromise *)testConnection;

@end
