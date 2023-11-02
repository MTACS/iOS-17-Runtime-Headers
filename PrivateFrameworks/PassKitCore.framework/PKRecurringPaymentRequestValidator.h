
@interface PKRecurringPaymentRequestValidator : NSObject <PKPaymentValidating> {
    NSString * _currencyCode;
    PKRecurringPaymentRequest * _recurringPaymentRequest;
}

@property (nonatomic, copy) NSString *currencyCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKRecurringPaymentRequest *recurringPaymentRequest;
@property (readonly) Class superclass;

+ (Class)validatedClass;
+ (id)validatorWithObject:(id)arg1;

- (void).cxx_destruct;
- (id)currencyCode;
- (id)initWithRecurringPaymentRequest:(id)arg1;
- (bool)isValidWithAPIType:(long long)arg1 withError:(id*)arg2;
- (bool)isValidWithError:(id*)arg1;
- (id)recurringPaymentRequest;
- (void)setCurrencyCode:(id)arg1;

@end
