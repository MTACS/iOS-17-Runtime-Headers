
@interface WFWorkflowWizardNameIconButton : WFIconButton {
    UIImageView * _backgroundImageView;
    NSData * _customImageData;
    WFWorkflowIcon * _icon;
}

@property (nonatomic) UIImageView *backgroundImageView;
@property (nonatomic, readonly) NSData *customImageData;
@property (nonatomic, readonly) WFWorkflowIcon *icon;

- (void).cxx_destruct;
- (id)backgroundImageView;
- (id)customImageData;
- (id)icon;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)redrawIcon;
- (void)setBackgroundImageView:(id)arg1;
- (void)setIcon:(id)arg1 customImageData:(id)arg2;

@end
