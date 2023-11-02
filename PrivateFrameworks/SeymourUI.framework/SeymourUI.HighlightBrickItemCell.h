
@interface SeymourUI.HighlightBrickItemCell : UICollectionViewCell {
    void artworkView;
    void currentConstraints;
    void delegate;
    void hasIndex;
    void headlineLabel;
    void indexLabel;
    void indexLeadingConstraint;
    void isCurrentTitleRTL;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  itemInfo;
    void layout;
    void layoutGuide;
    void layoutGuideLeadingConstraint;
    void platter;
    void subtitleLabel;
    void titleLabel;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)traitCollectionDidChange:(id)arg1;

@end
