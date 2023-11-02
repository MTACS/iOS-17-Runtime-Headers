
@interface SeymourUI.SummaryContentSummaryView : UIView {
    void bookmarkButton;
    void bookmarkButtonBottomConstraint;
    void labels;
    void labelsBottomConstraint;
    void layoutGuide;
    void layoutGuideConstraints;
    void layoutGuideSecondaryConstraints;
    void onBookmarkTapped;
    void onShareButtonTapped;
    void shareButton;
    void thumbnailDimensions;
    void thumbnailHeightConstraint;
    void thumbnailView;
    void thumbnailWidthConstraint;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } intrinsicContentSize;

- (void).cxx_destruct;
- (void)bookmarkButtonTapped;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)shareButtonTapped;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;

@end
