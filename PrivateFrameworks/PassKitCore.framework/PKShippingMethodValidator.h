
@interface PKShippingMethodValidator : PKPaymentSummaryItemValidator <PKPaymentValidating>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)validatedClass;
+ (id)validatorWithObject:(id)arg1;

- (id)initWithShippingMethod:(id)arg1;
- (bool)isValidWithAPIType:(long long)arg1 withError:(id*)arg2;
- (bool)isValidWithError:(id*)arg1;

@end
