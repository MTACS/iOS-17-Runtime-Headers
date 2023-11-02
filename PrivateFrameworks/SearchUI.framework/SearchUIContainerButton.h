
@interface SearchUIContainerButton : UIButton {
    SearchUIHorizontallyScrollingContainerButtonController * _buttonController;
    UIView * _contentView;
}

@property (nonatomic) SearchUIHorizontallyScrollingContainerButtonController *buttonController;
@property (nonatomic, retain) UIView *contentView;

- (void).cxx_destruct;
- (id)buttonController;
- (id)contentView;
- (id)initWithContainerButtonController:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setButtonController:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;

@end
