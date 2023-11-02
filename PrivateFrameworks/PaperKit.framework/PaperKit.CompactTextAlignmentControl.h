
@interface PaperKit.CompactTextAlignmentControl : UIControl <UIPopoverPresentationControllerDelegate> {
    void imageView;
    void selectedTextAlignment;
    void symbolConfiguration;
    void viewControllerProvider;
}

@property (nonatomic) bool highlighted;

- (void).cxx_destruct;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)didTapSelf;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHighlighted;
- (void)layoutSubviews;
- (void)setHighlighted:(bool)arg1;
- (void)textAlignmentValueDidChange:(id)arg1;

@end
