
@interface SBWindowedAccessoryView : UIView {
    UIColor * _backgroundColor;
    <SBWindowedAccessoryViewDelegate> * _delegate;
    UIButton * _forceDetachWindowedAcessoryButton;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic) <SBWindowedAccessoryViewDelegate> *delegate;
@property (nonatomic, retain) UIButton *forceDetachWindowedAcessoryButton;

- (void).cxx_destruct;
- (void)_forceDetachWindowedAcessoryButtonTapped:(id)arg1;
- (id)backgroundColor;
- (id)delegate;
- (id)forceDetachWindowedAcessoryButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setForceDetachWindowedAcessoryButton:(id)arg1;

@end
