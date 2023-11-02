
@interface PRXCardContainerView : UIView <UIGestureRecognizerDelegate> {
    PRXCardBackgroundView * _backgroundView;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _containerLayoutMargins;
    UIView * _contentContainerView;
    NSLayoutConstraint * _contentHeightConstraint;
    NSLayoutConstraint * _contentTopConstraint;
    NSLayoutConstraint * _contentWidthConstraint;
    bool  _defersKeyboardUpdates;
    <PRXCardContainerViewDelegate> * _delegate;
    double  _keyboardHeight;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredContentSize;
    PRXPullDismissalScrollView * _pullDismissalScrollView;
    NSLayoutConstraint * _scrollViewBottomConstraint;
    NSLayoutConstraint * _scrollViewHeightConstraint;
    NSLayoutConstraint * _scrollViewTopConstraint;
    bool  _shouldDismissKeyboardOnTap;
    UITapGestureRecognizer * _tapRecognizer;
    bool  _usePortraitTopInset;
    NSLayoutConstraint * _visibleHeightConstraint;
}

@property (nonatomic, readonly) PRXCardBackgroundView *backgroundView;
@property (nonatomic, readonly) UIView *contentContainerView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool defersKeyboardUpdates;
@property (nonatomic) <PRXCardContainerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize { double x1; double x2; } preferredContentSize;
@property (nonatomic, readonly) PRXPullDismissalScrollView *pullDismissalScrollView;
@property (readonly) Class superclass;
@property (nonatomic) bool usePortraitTopInset;

- (void).cxx_destruct;
- (void)_updateKeyboardDeferred:(bool)arg1;
- (id)backgroundView;
- (id)contentContainerView;
- (bool)defersKeyboardUpdates;
- (id)delegate;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 containerLayoutMargins:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (id)pullDismissalScrollView;
- (void)setDefersKeyboardUpdates:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setUsePortraitTopInset:(bool)arg1;
- (void)tappedView:(id)arg1;
- (bool)usePortraitTopInset;

@end
