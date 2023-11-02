
@protocol EDSearchableIndexTesting <NSObject>

@required

- (EMSearchableIndexQueryExpression *)expressionFromDataSamples:(NSDictionary *)arg1;
- (NSArray *)fetchAttributes;
- (EDSearchableIndexVerificationData *)transformDataForVerification:(EDSearchableIndexVerificationData *)arg1;
- (bool)verifySearchableItem:(CSSearchableItem *)arg1 againstExpectedData:(EDSearchableIndexVerificationData *)arg2;

@end
