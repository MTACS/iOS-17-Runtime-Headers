
@protocol PBFPosterSelectionViewControllerDelegate <NSObject>

@required

- (void)posterSelectionViewController:(PBFPosterSelectionViewController *)arg1 didDismissWithResponse:(PRUIModalEntryPointResponse *)arg2;
- (void)posterSelectionViewController:(PBFPosterSelectionViewController *)arg1 willDismissWithResponse:(PRUIModalEntryPointResponse *)arg2;

@end
