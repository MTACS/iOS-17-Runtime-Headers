
@interface PXPhotosGridFooterPresentation : NSObject <PXChangeObserver, PXPhotosGlobalFooterViewDelegate, PXScrollViewControllerObserver, _PXPhotosGridFooterMaskViewDelegate> {
    NSTimer * _autoRevealMinimumIdleTimer;
    <PXPhotosGridFooterPresentationDelegate> * _delegate;
    bool  _didAutoReveal;
    bool  _footerFullyMasked;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _footerMaskPadding;
    UIView * _footerMaskView;
    PXGView * _gridView;
    bool  _hasAppearedOnce;
    bool  _hasReachedInitialPosition;
    double  _lastUserScrollTime;
    PXPhotosLayout * _layout;
    PXPhotosGlobalFooterView * _reusableFooterView;
    bool  _shouldAutoReveal;
    PXPhotosViewModel * _viewModel;
    bool  _wantsFooter;
    bool  _wantsFooterMask;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXPhotosGridFooterPresentationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isFooterFullyMasked, nonatomic) bool footerFullyMasked;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } footerMaskPadding;
@property (nonatomic, retain) UIView *footerMaskView;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldAutoReveal;
@property (readonly) Class superclass;
@property (nonatomic) bool wantsFooter;
@property (nonatomic) bool wantsFooterMask;

- (void).cxx_destruct;
- (void)_conditionallyAutoRevealFooterView;
- (void)_conditionallyAutoRevealFooterViewWithLastUserScrollTime:(double)arg1;
- (double)_footerVisibleAmountIncludingSafeAreaInsets:(bool)arg1;
- (bool)_shouldAutoRevealFooterView;
- (void)_updateFooterAndMaskVisibility;
- (void)_updateFooterMaskPadding;
- (void)_updateFooterMaskViewFrame;
- (void)_updateFooterMaskViewOrder;
- (void)_updateFooterView;
- (void)_updateWantsFooter;
- (id)delegate;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })footerMaskPadding;
- (id)footerMaskView;
- (void)footerMaskViewDidMoveToWindow:(id)arg1;
- (id)init;
- (id)initWithViewModel:(id)arg1 gridView:(id)arg2 layout:(id)arg3;
- (bool)isFooterFullyMasked;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)photosGlobalFooterView:(id)arg1 presentViewController:(id)arg2;
- (void)photosGlobalFooterViewDidChangeHeight:(id)arg1;
- (void)photosGlobalFooterViewDidMoveToWindow:(id)arg1;
- (void)scrollViewControllerContentBoundsDidChange:(id)arg1;
- (void)scrollViewControllerDidScroll:(id)arg1;
- (void)scrollViewControllerWillBeginScrolling:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFooterFullyMasked:(bool)arg1;
- (void)setFooterMaskPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setFooterMaskView:(id)arg1;
- (void)setShouldAutoReveal:(bool)arg1;
- (void)setWantsFooter:(bool)arg1;
- (void)setWantsFooterMask:(bool)arg1;
- (bool)shouldAutoReveal;
- (void)viewDidAppear;
- (void)viewDidScrollToInitialPosition;
- (void)viewWillAppear;
- (bool)wantsFooter;
- (bool)wantsFooterMask;

@end
