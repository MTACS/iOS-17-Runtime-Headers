
@interface PXPhotosGridEdgeSwipeInteractiveDismissalTransition : UIPercentDrivenInteractiveTransition {
    <PXPhotosGridEdgeSwipeInteractiveDismissalDelegate> * _delegate;
    UIScreenEdgePanGestureRecognizer * _edgeSwipeGesture;
    UIViewController * _viewController;
    bool  isRTL;
}

@property (nonatomic) <PXPhotosGridEdgeSwipeInteractiveDismissalDelegate> *delegate;
@property (nonatomic, readonly) UIScreenEdgePanGestureRecognizer *edgeSwipeGesture;
@property (nonatomic, readonly) UIViewController *viewController;

- (void).cxx_destruct;
- (void)_handleEdgeSwipeGesture:(id)arg1;
- (bool)_shouldCompleteTransition;
- (id)delegate;
- (id)edgeSwipeGesture;
- (id)initWithEdgeSwipeGesture:(id)arg1 viewController:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (id)viewController;

@end
