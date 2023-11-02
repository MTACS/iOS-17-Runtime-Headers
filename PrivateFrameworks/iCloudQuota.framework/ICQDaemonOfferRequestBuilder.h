
@interface ICQDaemonOfferRequestBuilder : NSObject {
    ACAccount * _account;
    _ICQAccountManager * _accountManager;
    ICQRequestProvider * _requestProvider;
}

- (void).cxx_destruct;
- (void)addPremiumOffersHeaderIfNeededForRequest:(id)arg1;
- (id)initWithAccount:(id)arg1 accountManager:(id)arg2;
- (id)requestWithQuotaKey:(id)arg1 reason:(id)arg2 offerStub:(id)arg3 notificationID:(id)arg4 contextDictionary:(id)arg5 mlDaemonExtraFields:(id)arg6 sourceIsServerSample:(bool)arg7;

@end
