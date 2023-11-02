
@protocol WFCompactContentPreviewViewControllerDelegate <NSObject>

@required

- (void)previewViewControllerDidInvalidateSize:(WFCompactContentPreviewViewController *)arg1;
- (double)targetHeightForAnimatingPreviewViewController:(WFCompactContentPreviewViewController *)arg1 toProposedHeight:(double)arg2;

@end
