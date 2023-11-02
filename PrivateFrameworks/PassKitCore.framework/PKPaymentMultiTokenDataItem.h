
@interface PKPaymentMultiTokenDataItem : PKPaymentDataItem

@property (nonatomic, readonly) NSArray *multiTokenContexts;

+ (long long)dataType;

- (long long)context;
- (bool)isValidWithError:(id*)arg1;
- (id)multiTokenContexts;

@end
