
@interface PKPaymentTokenContextValidator : NSObject <PKPaymentValidating> {
    PKPaymentTokenContext * _context;
    NSString * _currencyCode;
}

@property (nonatomic, readonly) PKPaymentTokenContext *context;
@property (nonatomic, copy) NSString *currencyCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)validatedClass;
+ (id)validatorWithObject:(id)arg1;

- (void).cxx_destruct;
- (id)context;
- (id)currencyCode;
- (id)initWithPaymentTokenContext:(id)arg1;
- (bool)isValidWithAPIType:(long long)arg1 withError:(id*)arg2;
- (bool)isValidWithError:(id*)arg1;
- (void)setCurrencyCode:(id)arg1;

@end
