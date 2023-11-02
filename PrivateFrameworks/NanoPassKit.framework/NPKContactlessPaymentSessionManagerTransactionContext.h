
@interface NPKContactlessPaymentSessionManagerTransactionContext : NSObject {
    unsigned long long  _action;
    bool  _authenticationRequested;
    NSArray * _displayablePassItems;
    PKPassTile * _passTile;
    NPKPaymentBarcode * _paymentBarcode;
    NSString * _paymentMethodDescription;
    PKPaymentTransaction * _paymentTransaction;
    STS18013ReaderAuthInfo * _readerAuthInfo;
    STSTransaction18013Request * _releaseDataRequest;
    unsigned long long  _releaseDataStatus;
    NSString * _transactionDescription;
    PKPass * _transactionPass;
    unsigned long long  _transactionStatus;
    unsigned long long  _transactionType;
    PKPass * _valueAddedServicePass;
}

@property (nonatomic) unsigned long long action;
@property (nonatomic) bool authenticationRequested;
@property (nonatomic, retain) NSArray *displayablePassItems;
@property (nonatomic, retain) PKPassTile *passTile;
@property (nonatomic, retain) NPKPaymentBarcode *paymentBarcode;
@property (nonatomic, retain) NSString *paymentMethodDescription;
@property (nonatomic, retain) PKPaymentTransaction *paymentTransaction;
@property (nonatomic, retain) STS18013ReaderAuthInfo *readerAuthInfo;
@property (nonatomic, retain) STSTransaction18013Request *releaseDataRequest;
@property (nonatomic) unsigned long long releaseDataStatus;
@property (nonatomic, retain) NSString *transactionDescription;
@property (nonatomic, retain) PKPass *transactionPass;
@property (nonatomic) unsigned long long transactionStatus;
@property (nonatomic) unsigned long long transactionType;
@property (nonatomic, retain) PKPass *valueAddedServicePass;

+ (id)_NPKTransactionContextActionDescriptionForNPKTransactionContextAction:(unsigned long long)arg1;

- (void).cxx_destruct;
- (unsigned long long)action;
- (bool)authenticationRequested;
- (id)description;
- (id)displayablePassItems;
- (void)forceToTransitTypeTransactionWithTransactionStatus:(unsigned long long)arg1;
- (id)init;
- (id)passTile;
- (id)paymentBarcode;
- (id)paymentMethodDescription;
- (id)paymentTransaction;
- (id)readerAuthInfo;
- (id)releaseDataRequest;
- (unsigned long long)releaseDataStatus;
- (void)setAction:(unsigned long long)arg1;
- (void)setAuthenticationRequested:(bool)arg1;
- (void)setDisplayablePassItems:(id)arg1;
- (void)setPassTile:(id)arg1;
- (void)setPaymentBarcode:(id)arg1;
- (void)setPaymentMethodDescription:(id)arg1;
- (void)setPaymentTransaction:(id)arg1;
- (void)setReaderAuthInfo:(id)arg1;
- (void)setReleaseDataRequest:(id)arg1;
- (void)setReleaseDataStatus:(unsigned long long)arg1;
- (void)setTransactionDescription:(id)arg1;
- (void)setTransactionPass:(id)arg1;
- (void)setTransactionStatus:(unsigned long long)arg1;
- (void)setTransactionType:(unsigned long long)arg1;
- (void)setValueAddedServicePass:(id)arg1;
- (id)transactionDescription;
- (id)transactionPass;
- (unsigned long long)transactionStatus;
- (unsigned long long)transactionType;
- (void)updateWithConcreteTransactions:(id)arg1 ephemeralTransaction:(id)arg2 updatedPassTransitItems:(id)arg3 paymentApplication:(id)arg4;
- (id)valueAddedServicePass;

@end
