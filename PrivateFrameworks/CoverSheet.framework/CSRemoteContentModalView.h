
@interface CSRemoteContentModalView : CSModalView {
    UIButton * _backgroundDismissButton;
    <CSRemoteModalContentViewTouchDelegate> * _touchDelegate;
}

@property (nonatomic, retain) UIButton *backgroundDismissButton;
@property (nonatomic) <CSRemoteModalContentViewTouchDelegate> *touchDelegate;

- (void).cxx_destruct;
- (id)backgroundDismissButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBackgroundDismissButton:(id)arg1;
- (void)setTouchDelegate:(id)arg1;
- (id)touchDelegate;

@end
