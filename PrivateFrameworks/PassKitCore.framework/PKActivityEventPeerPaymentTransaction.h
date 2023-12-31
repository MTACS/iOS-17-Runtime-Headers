
@interface PKActivityEventPeerPaymentTransaction : PKActivityEventTransaction {
    PKPaymentTransaction * _relatedTopUpFundingSourceWithdrawlTransaction;
    PKPaymentTransaction * _relatedTopUpPeerPaymentAccountDepositTransaction;
}

@property (nonatomic, readonly) PKPaymentTransaction *relatedTopUpFundingSourceWithdrawlTransaction;
@property (nonatomic, readonly) PKPaymentTransaction *relatedTopUpPeerPaymentAccountDepositTransaction;

- (void).cxx_destruct;
- (id)eventType;
- (unsigned long long)hash;
- (id)initWithTransaction:(id)arg1 relatedTopUpWithdrawlTransaction:(id)arg2 relatedTopUpDepositTransaction:(id)arg3 unread:(bool)arg4;
- (bool)isEqualToActivityEvent:(id)arg1;
- (id)relatedTopUpFundingSourceWithdrawlTransaction;
- (id)relatedTopUpPeerPaymentAccountDepositTransaction;

@end
