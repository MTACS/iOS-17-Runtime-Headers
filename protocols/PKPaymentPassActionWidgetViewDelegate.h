
@protocol PKPaymentPassActionWidgetViewDelegate <NSObject>

@optional

- (void)addMoney;
- (void)callIssuer;
- (void)emailIssuer;
- (void)openBusinessChat;
- (void)openIssuerWebsite;
- (void)performPaymentPassActionBundle:(PKPaymentPassActionWidgetButton *)arg1;
- (void)presentContactIssuerSheet;
- (void)redeemGiftCard;
- (void)transferToBank;

@end
