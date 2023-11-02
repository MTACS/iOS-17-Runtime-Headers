
@interface _UIRemoteKeyboardPlaceholderView : UIView <UISplittableInputView, _UIRemoteKeyboardInputViewPlaceholder> {
    UIView * _associatedView;
    UIView * _fallbackView;
    struct CGSize { 
        double width; 
        double height; 
    }  _fixedSize;
    bool  _isLocalMinimumHeight;
    UIView * _mirroredView;
    UIWindowScene * _sceneForHeight;
    id /* block */  _sizeBlock;
}

@property (nonatomic, retain) UIView *associatedView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView *fallbackView;
@property (nonatomic) struct CGSize { double x1; double x2; } fixedSize;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isLocalMinimumHeightPlaceholder;
@property (readonly) UIView *placeheldView;
@property (readonly) Class superclass;

+ (id)placeholderForView:(id)arg1;
+ (id)placeholderWithWidth:(double)arg1 height:(double)arg2;
+ (id)placeholderWithWidthSizer:(id /* block */)arg1 heightWithScene:(id)arg2;

- (void).cxx_destruct;
- (void)_beginSplitTransitionIfNeeded:(double)arg1 gapWidth:(double)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_compatibleBounds;
- (void)_configureDebugOverlayIfNecessary;
- (void)_endSplitTransitionIfNeeded:(bool)arg1;
- (void)_isPlaceholderViewSelector;
- (void)_setLeftOffset:(double)arg1 gapWidth:(double)arg2;
- (void)_setProgress:(double)arg1 boundedBy:(double)arg2;
- (id)associatedView;
- (id)description;
- (void)didEndSplitTransition;
- (id)fallbackView;
- (struct CGSize { double x1; double x2; })fixedSize;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isEqual:(id)arg1;
- (bool)isLocalMinimumHeightPlaceholder;
- (void)layoutMergedSubviews;
- (void)layoutSplitSubviewsWithLeftContentSize:(struct CGSize { double x1; double x2; })arg1 rightContentSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGSize { double x1; double x2; })leftContentViewSize;
- (id)placeheldView;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (bool)refreshPlaceholder;
- (struct CGSize { double x1; double x2; })rightContentViewSize;
- (void)setAssociatedView:(id)arg1;
- (void)setFallbackView:(id)arg1;
- (void)setFixedSize:(struct CGSize { double x1; double x2; })arg1;
- (void)updateMergedSubviewConstraints;
- (void)updateSplitSubviewContraintsWithLeftContentSize:(struct CGSize { double x1; double x2; })arg1 rightContentSize:(struct CGSize { double x1; double x2; })arg2;
- (void)willBeginSplitTransition;

@end
