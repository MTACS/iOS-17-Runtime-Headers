
@protocol INRestaurantOfferExport <NSObject, JSExport>

@required

- (id)init;
- (NSString *)offerDetailText;
- (NSString *)offerIdentifier;
- (NSString *)offerTitleText;
- (void)setOfferDetailText:(NSString *)arg1;
- (void)setOfferIdentifier:(NSString *)arg1;
- (void)setOfferTitleText:(NSString *)arg1;

@end
