
@interface SFSectionDisclosureButton : UIButton {
    bool  _expanded;
    bool  _expandsModally;
    UIImageView * _imageView;
    bool  _labelHidden;
    UILabel * _labelWhenCollapsed;
    NSLayoutConstraint * _labelWhenCollapsedLeadingConstraint;
    UILabel * _labelWhenExpanded;
    NSLayoutConstraint * _labelWhenExpandedLeadingConstraint;
}

@property (nonatomic, readonly) UIImageView *chevron;
@property (getter=isExpanded, nonatomic) bool expanded;
@property (getter=isLabelHidden, nonatomic) bool labelHidden;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } sizeIncludingLabels;

- (void).cxx_destruct;
- (void)buttonShapesEnabledDidChange;
- (id)chevron;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 expanded:(bool)arg2 modally:(bool)arg3;
- (bool)isExpanded;
- (bool)isLabelHidden;
- (void)setExpanded:(bool)arg1;
- (void)setLabelHidden:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeIncludingLabels;
- (void)toggleExpanded;
- (void)updateExpanded;

@end
