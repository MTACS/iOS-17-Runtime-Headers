
@interface WBUCreditCardDataController : WBSCreditCardDataController

+ (id)sharedCreditCardDataController;

- (bool)_shouldOfferVirtualCards;
- (bool)hasUsedNonVirtualCard;
- (void)setHasUsedNonVirtualCard;
- (unsigned long long)virtualCardFieldsToRequest;

@end
