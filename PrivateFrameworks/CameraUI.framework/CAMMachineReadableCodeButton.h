
@interface CAMMachineReadableCodeButton : UIButton {
    <CAMMachineReadableCodeButtonDelegate> * _delegate;
    bool  _dismissable;
    NSString * _title;
    UIImage * _titleImage;
}

@property (nonatomic) <CAMMachineReadableCodeButtonDelegate> *delegate;
@property (getter=isDismissable, nonatomic) bool dismissable;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) UIImage *titleImage;

- (void).cxx_destruct;
- (void)_didTapDismiss:(id)arg1;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDismissable;
- (void)layoutSubviews;
- (void)setAttributedTitleWithTitle:(id)arg1 image:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDismissable:(bool)arg1;
- (id)title;
- (id)titleImage;
- (void)updateConfiguration;

@end
