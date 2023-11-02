
@interface CKScrollViewController : CKViewController {
    double  _bottomInsetPadding;
    double  _contentPinningThreshold;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSizeForPinning;
    bool  _enableContentPinning;
    bool  _keyboardInteractionCancelled;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _keyboardScreenFrame;
    bool  _keyboardVisible;
    double  _minimumBottomInset;
    id /* block */  _overrideScrollBlock;
    UIScrollView * _scrollView;
    bool  _topInsetIncludesPalette;
    double  _topInsetPadding;
    IMScheduledUpdater * _updater;
}

@property (nonatomic, readonly) double bottomInsetPadding;
@property (nonatomic) double contentPinningThreshold;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentSizeForPinning;
@property (nonatomic) bool enableContentPinning;
@property (nonatomic, readonly) bool isUsingVisibleInputViewHeightWhenUpdatingScrollGeometry;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } keyboardFrame;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } keyboardFrameInViewCoordinates;
@property (nonatomic) bool keyboardInteractionCancelled;
@property (getter=isKeyboardOnscreenWithoutAccessoryView, nonatomic, readonly) bool keyboardOnscreenWithoutAccessoryView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } keyboardScreenFrame;
@property (getter=isKeyboardUndocked, nonatomic, readonly) bool keyboardUndocked;
@property (getter=isKeyboardVisible, nonatomic) bool keyboardVisible;
@property (nonatomic, readonly) double minimumBottomInset;
@property (nonatomic, copy) id /* block */ overrideScrollBlock;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic, readonly) bool topInsetIncludesPalette;
@property (nonatomic, readonly) double topInsetPadding;
@property (nonatomic, retain) IMScheduledUpdater *updater;
@property (nonatomic, readonly) double visibleInputViewHeight;

- (void).cxx_destruct;
- (double)_bottomRotatingFooterHeight;
- (void)_changedStatusBarFrame:(id)arg1;
- (void)_entryViewWillRotate:(id)arg1;
- (void)_keyboardWillShowOrHide:(id)arg1;
- (void)_updateKeyboardScreenFrameForShowOrHideWithNewScreenFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 previousFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 duration:(double)arg3 animationCurve:(long long)arg4 isShowEvent:(bool)arg5;
- (double)_visibleKeyboardHeight;
- (double)accessoryViewHeight;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })bannerInsets;
- (void)beginHoldingScrollGeometryUpdatesForKey:(id)arg1;
- (double)bottomInsetPadding;
- (double)bottomInsetWithoutAccessoryView;
- (void)contentInsetDidChange;
- (void)contentInsetWillChange:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 animated:(bool)arg2 duration:(double)arg3 animationCurve:(long long)arg4;
- (double)contentPinningThreshold;
- (struct CGSize { double x1; double x2; })contentSizeForPinning;
- (void)dealloc;
- (bool)enableContentPinning;
- (void)endHoldingScrollGeometryUpdatesForAllKeys;
- (void)endHoldingScrollGeometryUpdatesForKey:(id)arg1;
- (id)init;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })inputAccessoryViewFrameForFloatingKeyboard;
- (void)inputAccessoryViewFrameUpdatedForFloatingKeyboard;
- (bool)isHoldingScrollGeometryUpdates;
- (bool)isKeyboardFloating;
- (bool)isKeyboardOnscreenWithoutAccessoryView;
- (bool)isKeyboardUndocked;
- (bool)isKeyboardVisible;
- (bool)isUsingVisibleInputViewHeightWhenUpdatingScrollGeometry;
- (void)keyboardDidChangeFrame:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })keyboardFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })keyboardFrameInViewCoordinates;
- (bool)keyboardInteractionCancelled;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })keyboardScreenFrame;
- (void)keyboardVisibilityWillChange;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillHideViaGesture;
- (void)keyboardWillShow:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })macToolbarInsets;
- (bool)manuallyUpdateKeyboardScreenFrameWithFrameIfNeeded:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animationDuration:(double)arg2 animationCurve:(long long)arg3;
- (double)minimumBottomInset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })navigationBarInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })navigationBarInsetsWithoutPalette;
- (id /* block */)overrideScrollBlock;
- (void)primeWithKeyboardFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })screenFrameForNotification:(id)arg1;
- (id)scrollView;
- (void)scrollWithDuration:(double)arg1 animationCurve:(long long)arg2 scrollBlock:(id /* block */)arg3;
- (void)setContentPinningThreshold:(double)arg1;
- (void)setEnableContentPinning:(bool)arg1;
- (void)setKeyboardInteractionCancelled:(bool)arg1;
- (void)setKeyboardScreenFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setKeyboardVisible:(bool)arg1;
- (void)setOverrideScrollBlock:(id /* block */)arg1;
- (void)setUpdater:(id)arg1;
- (bool)topInsetIncludesPalette;
- (double)topInsetPadding;
- (void)updateScrollGeometry;
- (void)updateScrollGeometryAndMaintainScrollPosition;
- (void)updateScrollGeometryIfNeeded;
- (void)updateScrollGeometryWithDuration:(double)arg1 animationCurve:(long long)arg2;
- (id)updater;
- (void)viewSafeAreaInsetsDidChange;
- (double)visibleHeightAboveKeyboard;
- (double)visibleInputViewHeight;

@end
