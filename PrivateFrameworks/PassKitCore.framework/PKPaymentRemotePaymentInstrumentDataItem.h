
@interface PKPaymentRemotePaymentInstrumentDataItem : PKPaymentDataItem

@property (nonatomic, readonly) CNContact *billingAddress;
@property (nonatomic, readonly) PKPaymentApplication *paymentApplication;
@property (nonatomic, readonly) PKRemoteDevice *remoteDevice;
@property (nonatomic, readonly) PKRemotePaymentInstrument *remotePaymentInstrument;
@property (nonatomic, readonly) bool requiresBillingAddress;

+ (long long)dataType;

- (id)billingAddress;
- (long long)context;
- (id)errors;
- (bool)hasAssociatedPeerPaymentAccount;
- (bool)isValidWithError:(id*)arg1;
- (id)paymentApplication;
- (id)paymentContactFormatErrors;
- (id)peerPaymentAccountBalance;
- (unsigned long long)peerPaymentAccountState;
- (id)remoteDevice;
- (id)remotePaymentInstrument;
- (bool)requiresBillingAddress;

@end
