
@interface NewsFeed.CoverIssueView : UIView {
    void accessoryLabel;
    void cloudIcon;
    void debugButton;
    void downloadButtonDataProvider;
    void downloadProgressBar;
    void downloadProgressDisposable;
    void downloadStateDisposable;
    void followButton;
    void isEditSelected;
    void issueCoverView;
    void moreActionsButton;
    void onEditSelection;
    void secondaryIssueCoverView;
    void selectionImageView;
    void titleLabel;
}

@property (nonatomic, copy) NSString *accessibilityValue;

- (void).cxx_destruct;
- (id)accessibilityValue;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAccessibilityValue:(id)arg1;

@end
