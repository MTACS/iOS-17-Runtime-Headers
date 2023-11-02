
@interface PKTransactionMerchantLookupSource : NSObject <PKMerchantLookupRequestSource> {
    bool  _clearingAttempt;
    PKPaymentApplication * _paymentApplication;
    PKPaymentTransaction * _transaction;
}

@property (getter=isClearingAttempt, nonatomic) bool clearingAttempt;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithTransaction:(id)arg1 paymentApplication:(id)arg2;
- (bool)isClearingAttempt;
- (bool)isRefund;
- (bool)isSettlement;
- (id)mapsMerchantLookupRequest;
- (id)mapsURL;
- (void)setClearingAttempt:(bool)arg1;
- (long long)type;

@end
