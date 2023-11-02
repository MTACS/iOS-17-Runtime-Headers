
@interface PKAutomaticReloadPaymentRequestValidator : NSObject <PKPaymentValidating> {
    PKAutomaticReloadPaymentRequest * _automaticReloadPaymentRequest;
    NSString * _currencyCode;
    unsigned long long  _requestType;
}

@property (nonatomic, readonly) PKAutomaticReloadPaymentRequest *automaticReloadPaymentRequest;
@property (nonatomic, copy) NSString *currencyCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long requestType;
@property (readonly) Class superclass;

+ (Class)validatedClass;
+ (id)validatorWithObject:(id)arg1;

- (void).cxx_destruct;
- (id)automaticReloadPaymentRequest;
- (id)currencyCode;
- (id)initWithAutomaticReloadPaymentRequest:(id)arg1;
- (bool)isValidWithAPIType:(long long)arg1 withError:(id*)arg2;
- (bool)isValidWithError:(id*)arg1;
- (unsigned long long)requestType;
- (void)setCurrencyCode:(id)arg1;
- (void)setRequestType:(unsigned long long)arg1;

@end
