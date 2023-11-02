
@interface NPKRemotePassActionResponse : NPKRemotePassAction

@property (nonatomic, readonly) PKCurrencyAmount *currencyAmount;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) int result;

- (id)currencyAmount;
- (id)description;
- (id)identifier;
- (int)result;

@end
