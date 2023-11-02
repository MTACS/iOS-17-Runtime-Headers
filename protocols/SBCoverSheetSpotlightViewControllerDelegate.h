
@protocol SBCoverSheetSpotlightViewControllerDelegate <NSObject>

@required

- (void)coverSheetSpotlightViewControllerAddContentView:(SBCoverSheetSpotlightViewController *)arg1;
- (void)coverSheetSpotlightViewControllerRemoveContentView:(SBCoverSheetSpotlightViewController *)arg1;
- (void)coverSheetSpotlightViewControllerShouldDismiss:(SBCoverSheetSpotlightViewController *)arg1 animated:(bool)arg2;

@end
