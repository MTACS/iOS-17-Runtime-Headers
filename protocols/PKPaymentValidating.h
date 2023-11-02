
@protocol PKPaymentValidating <NSObject>

@required

- (bool)isValidWithError:(id*)arg1;

@optional

+ (Class)validatedClass;
+ (id)validatorWithObject:(id)arg1;

- (bool)isValidWithAPIType:(long long)arg1 withError:(id*)arg2;

@end
