
@interface MUHoursSummaryView : UIView {
    id /* block */  _actionHandler;
    bool  _expanded;
    UIImageView * _expansionIndicator;
    UIView<MULabelViewProtocol> * _hoursLabel;
    NSLayoutConstraint * _hoursToOpenStateConstraint;
    UIView<MULabelViewProtocol> * _openStateLabel;
    UILayoutGuide * _summaryStackLayoutGuide;
    UITapGestureRecognizer * _tapGestureRecognizer;
    UIView<MULabelViewProtocol> * _titleLabel;
    NSLayoutConstraint * _titleToHoursConstraint;
    NSLayoutConstraint * _titleToOpenStateConstraint;
    MUHoursSummaryViewModel * _viewModel;
}

@property (nonatomic, copy) id /* block */ actionHandler;
@property (nonatomic, readonly) MUHoursSummaryViewModel *viewModel;

- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (void)_handleAnimationStartForNormalHours;
- (void)_handleNormalHoursAnimation;
- (void)_handleServiceHoursAnimation;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (void)_updateAppearance;
- (void)_updateExpandButton;
- (void)_updateForPlatterAvailability;
- (id /* block */)actionHandler;
- (void)expandButtonTapped;
- (void)handleAnimation;
- (void)handleAnimationStart;
- (id)initWithViewModel:(id)arg1;
- (void)setActionHandler:(id /* block */)arg1;
- (id)viewModel;

@end
