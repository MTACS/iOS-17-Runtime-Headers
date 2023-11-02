
@interface MUPlaceReviewPlatterView : UIView {
    id /* block */  _actionHandler;
    UIView<MULabelViewProtocol> * _reviewTextView;
    UILabel * _starLabel;
    UITapGestureRecognizer * _tapGestureRecognizer;
    UIImageView * _userAvatarImageView;
    UIView<MULabelViewProtocol> * _userLabel;
    UILayoutGuide * _userLabelLayoutGuide;
    MUPlaceReviewViewModel * _viewModel;
}

@property (nonatomic, copy) id /* block */ actionHandler;
@property (nonatomic, readonly) NSAttributedString *starString;
@property (nonatomic, readonly) NSAttributedString *userLabelString;
@property (nonatomic, retain) MUPlaceReviewViewModel *viewModel;

- (void).cxx_destruct;
- (id)_attributesWithFont:(id)arg1 color:(id)arg2;
- (void)_contentSizeDidChange;
- (void)_platterTapped;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (void)_updateAppearance;
- (id /* block */)actionHandler;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setActionHandler:(id /* block */)arg1;
- (void)setViewModel:(id)arg1;
- (id)starString;
- (id)userLabelString;
- (id)viewModel;

@end
