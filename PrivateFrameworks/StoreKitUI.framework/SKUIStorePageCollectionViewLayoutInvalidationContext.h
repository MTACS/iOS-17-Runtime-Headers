
@interface SKUIStorePageCollectionViewLayoutInvalidationContext : UICollectionViewFlowLayoutInvalidationContext {
    bool  _invalidateItemPinningLayoutInformation;
    bool  _invalidatePinnedBackdropViewStyle;
}

@property (nonatomic) bool invalidateItemPinningLayoutInformation;
@property (nonatomic) bool invalidatePinnedBackdropViewStyle;

- (bool)invalidateItemPinningLayoutInformation;
- (bool)invalidatePinnedBackdropViewStyle;
- (void)setInvalidateItemPinningLayoutInformation:(bool)arg1;
- (void)setInvalidatePinnedBackdropViewStyle:(bool)arg1;

@end
