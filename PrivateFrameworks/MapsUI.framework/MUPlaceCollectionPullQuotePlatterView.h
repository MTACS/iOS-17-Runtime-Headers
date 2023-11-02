
@interface MUPlaceCollectionPullQuotePlatterView : UIView {
    MUCuratedCollectionSummaryView * _collectionSummaryView;
    <MUPlaceCollectionPullQuotePlatterViewDelegate> * _delegate;
    MUPullQuoteView * _pullQuoteView;
    UITapGestureRecognizer * _tapGestureRecognizer;
    <MUPlaceCollectionPullQuoteViewModel> * _viewModel;
}

@property (nonatomic) <MUPlaceCollectionPullQuotePlatterViewDelegate> *delegate;
@property (nonatomic, retain) <MUPlaceCollectionPullQuoteViewModel> *viewModel;

- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (void)_didSelectCollection;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (void)_updateAppearance;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setDelegate:(id)arg1;
- (void)setViewModel:(id)arg1;
- (id)viewModel;

@end
