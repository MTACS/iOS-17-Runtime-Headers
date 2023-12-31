
@interface PKBusinessChatPhysicalCardContext : NSObject <PKBusinessChatContext> {
    long long  _intent;
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
- (id)initWithPaymentPass:(id)arg1 intent:(long long)arg2;
- (id)intentParameters;
- (bool)requiresAuthorization;

@end
