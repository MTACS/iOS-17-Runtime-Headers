
@interface CPSInlineCardContainerView : UIView <UIGestureRecognizerDelegate> {
    UIView * _contentView;
    <CPSInlineCardViewDelegate> * _delegate;
    UITapGestureRecognizer * _tapRecognizer;
}

@property (nonatomic, retain) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CPSInlineCardViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)contentView;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setContentView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)tappedView:(id)arg1;

@end
