
@interface SiriSharedUIContentPlatterScrollView : SiriSharedUIStandardScrollView {
    bool  _adjustContentSizeOnNextLayout;
    bool  _automaticScrollingEnabled;
    <SiriSharedUIContentPlatterScrollViewDelegate> * _platterDelegate;
}

@property (nonatomic) bool adjustContentSizeOnNextLayout;
@property (getter=isAutomaticScrollingEnabled, nonatomic) bool automaticScrollingEnabled;
@property (nonatomic) <SiriSharedUIContentPlatterScrollViewDelegate> *platterDelegate;

- (void).cxx_destruct;
- (id)_parentScrollView;
- (void)_sharedInit;
- (bool)adjustContentSizeOnNextLayout;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAutomaticScrollingEnabled;
- (void)layoutSubviews;
- (id)platterDelegate;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2;
- (void)setAdjustContentSizeOnNextLayout:(bool)arg1;
- (void)setAutomaticScrollingEnabled:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPlatterDelegate:(id)arg1;

@end
