
@protocol PXGViewControllerTransitionEndPoint <NSObject>

@required

- (<PXGItemPlacementController> *)itemPlacementControllerForItemReference:(id)arg1;

@optional

- (bool)allowsTransition:(PXGViewControllerTransition *)arg1 withEndPoint:(id <PXGViewControllerTransitionEndPoint>)arg2;
- (id)detailItemReferenceForTransitionWithSummaryEndPoint:(id <PXGViewControllerTransitionEndPoint>)arg1;
- (void)didEndTransition:(PXGViewControllerTransition *)arg1 withEndPoint:(id <PXGViewControllerTransitionEndPoint>)arg2 finished:(bool)arg3;
- (id)summaryItemReferenceForTransitionWithSummaryEndPoint:(id <PXGViewControllerTransitionEndPoint>)arg1;
- (void)willBeginTransition:(PXGViewControllerTransition *)arg1 withEndPoint:(id <PXGViewControllerTransitionEndPoint>)arg2 anchorItemReference:(id)arg3;
- (void)willDismissWithoutTransitionToEndPoint:(id <PXGViewControllerTransitionEndPoint>)arg1;

@end
