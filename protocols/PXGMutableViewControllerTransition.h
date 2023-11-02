
@protocol PXGMutableViewControllerTransition

@required

- (void)cancel;
- (PXGItemPlacement *)detailItemPlacementOverride;
- (void)finish;
- (double)fractionCompleted;
- (void)installCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setDetailItemPlacementOverride:(PXGItemPlacement *)arg1;
- (void)setFractionCompleted:(double)arg1;
- (void)setSummaryItemPlacementOverride:(PXGItemPlacement *)arg1;
- (PXGItemPlacement *)summaryItemPlacementOverride;

@end
