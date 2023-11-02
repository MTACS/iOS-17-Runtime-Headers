
@protocol PKPassShareRedemptionActivationCodeSectionControllerDelegate <NSObject>

@required

- (void)activationCodeDidChange;
- (UICollectionViewCell *)cellForItem:(id)arg1;
- (void)deselectCells;
- (void)reloadDataAnimated:(bool)arg1;
- (void)setIsEnteringActivationCode:(bool)arg1;

@end
