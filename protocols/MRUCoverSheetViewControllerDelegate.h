
@protocol MRUCoverSheetViewControllerDelegate <NSObject>

@optional

- (void)coverSheetViewController:(MRUCoverSheetViewController *)arg1 didReceiveInteractionEvent:(UIGestureRecognizer *)arg2;
- (void)coverSheetViewController:(MRUCoverSheetViewController *)arg1 didUpdatePreferredContentSize:(struct CGSize { double x1; double x2; })arg2;
- (void)coverSheetViewController:(MRUCoverSheetViewController *)arg1 didUpdateRestrictedRects:(NSArray *)arg2;
- (void)coverSheetViewController:(void *)arg1 willChangeToLayout:(void *)arg2 animations:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 12: MRUCoverSheetViewController *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, id /* block */, void*, void, id /* block */, void*

@end
