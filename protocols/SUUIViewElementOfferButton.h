
@protocol SUUIViewElementOfferButton <NSObject>

@required

- (<SUUIItemOfferButtonDelegate> *)itemOfferDelegate;
- (void)setItemOfferDelegate:(id <SUUIItemOfferButtonDelegate>)arg1;
- (bool)setValuesUsingBuyButtonDescriptor:(SUUIBuyButtonDescriptor *)arg1 itemState:(SUUIItemState *)arg2 clientContext:(SUUIClientContext *)arg3 animated:(bool)arg4;

@end
