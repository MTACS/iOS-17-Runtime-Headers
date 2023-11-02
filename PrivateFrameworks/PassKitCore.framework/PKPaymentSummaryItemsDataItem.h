
@interface PKPaymentSummaryItemsDataItem : PKPaymentDataItem

@property (nonatomic, readonly) NSString *currencyCode;
@property (nonatomic, readonly) NSArray *paymentSummaryItems;

+ (long long)dataType;

- (long long)context;
- (id)currencyCode;
- (bool)isValidWithError:(id*)arg1;
- (id)paymentSummaryItems;

@end
