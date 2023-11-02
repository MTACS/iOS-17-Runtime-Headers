
@interface PKPaymentCouponCodeDataItem : PKPaymentDataItem

@property (getter=isAwaitingCouponCodeUpdate, nonatomic, readonly) bool awaitingCouponCodeUpdate;
@property (nonatomic, readonly, copy) NSString *couponCode;
@property (nonatomic, readonly, copy) NSArray *errors;

+ (long long)dataType;

- (long long)context;
- (id)couponCode;
- (id)errors;
- (bool)isAwaitingCouponCodeUpdate;
- (bool)isValidWithError:(id*)arg1;

@end
