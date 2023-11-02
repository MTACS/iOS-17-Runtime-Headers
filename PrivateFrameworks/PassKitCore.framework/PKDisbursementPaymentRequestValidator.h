
@interface PKDisbursementPaymentRequestValidator : NSObject <PKPaymentValidating> {
    NSString * _currencyCode;
    PKDisbursementPaymentRequest * _disbursementPaymentRequest;
}

@property (nonatomic, copy) NSString *currencyCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PKDisbursementPaymentRequest *disbursementPaymentRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)validatedClass;
+ (id)validatorWithObject:(id)arg1;

- (void).cxx_destruct;
- (id)currencyCode;
- (id)disbursementPaymentRequest;
- (id)initWithDisbursementPaymentRequest:(id)arg1;
- (bool)isValidWithAPIType:(long long)arg1 withError:(id*)arg2;
- (bool)isValidWithError:(id*)arg1;
- (void)setCurrencyCode:(id)arg1;

@end
