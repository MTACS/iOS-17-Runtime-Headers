
@interface PKPaymentDataItem : NSObject <PKPaymentValidating> {
    PKPaymentAuthorizationDataModel * _model;
    long long  _status;
    long long  _type;
}

@property (nonatomic, readonly) long long context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *errors;
@property (readonly) unsigned long long hash;
@property (nonatomic) PKPaymentAuthorizationDataModel *model;
@property (nonatomic, readonly) NSArray *paymentContactFormatErrors;
@property (getter=isRejected, nonatomic, readonly) bool rejected;
@property (nonatomic) long long status;
@property (readonly) Class superclass;
@property (nonatomic) long long type;

+ (long long)dataType;
+ (bool)supportsMultipleItems;
+ (bool)validateBillingAddressForItem:(id)arg1 billingAddress:(id)arg2 outError:(id*)arg3;

- (void).cxx_destruct;
- (long long)context;
- (id)errors;
- (id)initWithModel:(id)arg1;
- (bool)isRejected;
- (bool)isValidWithError:(id*)arg1;
- (bool)isValidWithError:(id*)arg1 errorStatus:(long long*)arg2;
- (id)model;
- (id)paymentContactFormatErrors;
- (void)setModel:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)setType:(long long)arg1;
- (long long)status;
- (long long)type;

@end
