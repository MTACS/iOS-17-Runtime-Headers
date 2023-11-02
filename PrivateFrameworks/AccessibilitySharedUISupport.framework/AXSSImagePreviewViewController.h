
@interface AXSSImagePreviewViewController : UIViewController <UIGestureRecognizerDelegate, UIScrollViewDelegate> {
    UIView * _contentSnapshot;
    <AXSSImagePreviewViewControllerDelegate> * _delegate;
    UITapGestureRecognizer * _doubleTapGestureRecognizer;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _edgeInsets;
    bool  _isManualZoomActive;
    UIPinchGestureRecognizer * _pinchGestureRecognizer;
    UIScrollView * _scrollView;
    UISwipeGestureRecognizer * _swipeGestureRecognizer;
}

@property (nonatomic, retain) UIView *contentSnapshot;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AXSSImagePreviewViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UITapGestureRecognizer *doubleTapGestureRecognizer;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property (readonly) unsigned long long hash;
@property bool isManualZoomActive;
@property (nonatomic, retain) UIPinchGestureRecognizer *pinchGestureRecognizer;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UISwipeGestureRecognizer *swipeGestureRecognizer;

- (void).cxx_destruct;
- (void)_addGestureRecognizers;
- (bool)_canShowWhileLocked;
- (void)_centerImageIfNeeded;
- (void)_doubleTapGestureRecognized:(id)arg1;
- (void)_fitImageIfNeeded:(bool)arg1;
- (void)_imagePreviewViewControllerSetupUI;
- (bool)_isSnapshotViewAttached;
- (void)_pinchGestureRecognized:(id)arg1;
- (void)_removeGestureRecognizers;
- (struct CGSize { double x1; double x2; })_scrollViewClippedSize;
- (void)_stopScrollViewAnimations;
- (void)_swipeGestureRecognized:(id)arg1;
- (void)_toggleManualZoomMode;
- (void)_viewShouldExpand;
- (void)_zoomImage:(double)arg1 withContentOffset:(struct CGPoint { double x1; double x2; })arg2 animated:(bool)arg3;
- (void)_zoomImageToBestScaleIfNeeded:(bool)arg1;
- (id)contentSnapshot;
- (id)delegate;
- (id)doubleTapGestureRecognizer;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithContentSnapshot:(id)arg1;
- (bool)isManualZoomActive;
- (id)pinchGestureRecognizer;
- (id)scrollView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)setContentSnapshot:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDoubleTapGestureRecognizer:(id)arg1;
- (void)setEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setIsManualZoomActive:(bool)arg1;
- (void)setPinchGestureRecognizer:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setSwipeGestureRecognizer:(id)arg1;
- (id)swipeGestureRecognizer;
- (void)viewDidLoad;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
