
@protocol PXMessagesStackViewDelegate <NSObject>

@optional

- (void)stackView:(PXMessagesStackView *)arg1 didChangeCurrentAssetReference:(PXAssetReference *)arg2 isProgrammaticChange:(bool)arg3 didChangeIndex:(bool)arg4;
- (void)stackView:(PXMessagesStackView *)arg1 didSelectAssetReference:(PXAssetReference *)arg2;
- (bool)stackView:(PXMessagesStackView *)arg1 shouldAutoplayAsset:(id <PXDisplayAsset>)arg2;
- (void)stackViewDidSelectAdditionalItemsCard:(PXMessagesStackView *)arg1;

@end
