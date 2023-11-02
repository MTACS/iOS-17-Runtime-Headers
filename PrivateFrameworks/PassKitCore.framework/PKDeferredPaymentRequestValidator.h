
@interface PKDeferredPaymentRequestValidator : NSObject <PKPaymentValidating> {
    NSString * _currencyCode;
    PKDeferredPaymentRequest * _deferredPaymentRequest;
}

@property (nonatomic, copy) NSString *currencyCode;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) PKDeferredPaymentRequest *deferredPaymentRequest;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)validatedClass;
+ (id)validatorWithObject:(id)arg1;

- (void).cxx_destruct;
- (id)currencyCode;
- (id)deferredPaymentRequest;
- (id)initWithDeferredPaymentRequest:(id)arg1;
- (bool)isValidWithAPIType:(long long)arg1 withError:(id*)arg2;
- (bool)isValidWithError:(id*)arg1;
- (void)setCurrencyCode:(id)arg1;

@end
