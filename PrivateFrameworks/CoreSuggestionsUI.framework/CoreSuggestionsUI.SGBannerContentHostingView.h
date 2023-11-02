
@interface CoreSuggestionsUI.SGBannerContentHostingView : UIView {
    void banner;
    void computeViewBounds;
    void hostingController;
    void invalidateBannerConstraints;
    void suggestionStore;
    void updateViewModel;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } intrinsicContentSize;

- (void).cxx_destruct;
- (double)actionButtonLeadingEdgeOffset;
- (id)initWithBanner:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)invalidateBannerView;
- (void)reload;
- (void)setSuggestionWithStore:(id)arg1;
- (void)updateBannerViews;
- (void)updateWithBanner:(id)arg1;

@end
