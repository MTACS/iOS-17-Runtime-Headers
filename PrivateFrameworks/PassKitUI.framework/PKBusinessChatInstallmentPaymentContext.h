
@interface PKBusinessChatInstallmentPaymentContext : NSObject <PKBusinessChatContext> {
    PKAccount * _account;
    PKPaymentPass * _paymentPass;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bodyText;
- (id)businessIdentifier;
- (id)groupParameters;
- (id)initWithAccount:(id)arg1 paymentPass:(id)arg2;
- (id)intentParameters;
- (bool)requiresAuthorization;

@end
