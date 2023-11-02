
@interface HKTitledBuddyHeaderView : UIView {
    NSLayoutConstraint * _bodyBottomConstraint;
    NSLayoutConstraint * _bodyFirstBaselineConstraint;
    NSLayoutConstraint * _bodyLastBaselineToLinkConstraint;
    NSString * _bodyText;
    long long  _bodyTextAlignment;
    UITextView * _bodyTextView;
    NSLayoutConstraint * _bodyZeroHeightConstraint;
    <HKTitledBuddyHeaderViewDelegate> * _delegate;
    NSLayoutConstraint * _linkButtonLastBaselineToBottomConstraint;
    NSLayoutConstraint * _logoTitleGapConstraint;
    UIButton * _optionalLinkButton;
    NSLayoutConstraint * _titleBottomConstraint;
    UILabel * _titleLabel;
    NSLayoutConstraint * _titleLabelBaselineConstraint;
}

@property (nonatomic, copy) NSString *bodyText;
@property (nonatomic) long long bodyTextAlignment;
@property (nonatomic) <HKTitledBuddyHeaderViewDelegate> *delegate;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, copy) NSString *titleText;

- (void).cxx_destruct;
- (id)_attributedBodyTextWithString:(id)arg1 alignment:(long long)arg2;
- (void)_linkButtonTapped:(id)arg1;
- (void)_updateBodyTextViewConstraints;
- (void)_updateForCurrentSizeCategory;
- (id)bodyText;
- (long long)bodyTextAlignment;
- (id)bodyTextView;
- (double)bottomPadding;
- (void)deactivateDefaultTitleLabelBaselineConstraint;
- (id)delegate;
- (id)initWithTopInset:(double)arg1 linkButtonTitle:(id)arg2;
- (void)setBodyText:(id)arg1;
- (void)setBodyText:(id)arg1 alignment:(long long)arg2;
- (void)setBodyTextAlignment:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTitleText:(id)arg1;
- (id)titleLabel;
- (id)titleText;
- (void)traitCollectionDidChange:(id)arg1;

@end
