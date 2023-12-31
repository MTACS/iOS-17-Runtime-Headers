
@protocol SKUIViewElementOfferButton <NSObject>

@required

- (<SKUIItemOfferButtonDelegate> *)itemOfferDelegate;
- (void)setItemOfferDelegate:(id <SKUIItemOfferButtonDelegate>)arg1;
- (bool)setValuesUsingBuyButtonDescriptor:(SKUIBuyButtonDescriptor *)arg1 itemState:(SKUIItemState *)arg2 clientContext:(SKUIClientContext *)arg3 animated:(bool)arg4;

@end
