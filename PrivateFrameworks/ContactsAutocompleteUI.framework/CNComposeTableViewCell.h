
@interface CNComposeTableViewCell : NUITableViewContainerCell <NUIContainerViewDelegate> {
    UIColor * _backgroundColor;
    UILabel * _detailLabel;
    UIColor * _labelColor;
    NUIContainerStackView * _labelViewStack;
    CNComposeRecipient * _recipient;
    UILabel * _titleLabel;
    double  _trailingButtonMidlineInsetFromLayoutMargin;
    double  _trailingButtonWidth;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, readonly) bool canCollapseRecipient;
@property (nonatomic, readonly) bool canExpandRecipient;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UILabel *detailLabel;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIColor *labelColor;
@property (nonatomic, retain) NUIContainerStackView *labelViewStack;
@property (nonatomic, retain) CNComposeRecipient *recipient;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAvatarView;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic) double trailingButtonMidlineInsetFromLayoutMargin;
@property (nonatomic, readonly) double trailingButtonWidth;

+ (double)additionalSeparatorInset;
+ (id)axCappedFontWithTextStyle:(id)arg1 bold:(bool)arg2;
+ (id)axCappedSymbolConfigurationIsBold:(bool)arg1;
+ (Class)containerViewClass;
+ (id)identifier;
+ (void)requireIntrinsicSizeForView:(id)arg1;

- (void).cxx_destruct;
- (id)backgroundColor;
- (bool)canCollapseRecipient;
- (bool)canExpandRecipient;
- (struct CGSize { double x1; double x2; })containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg2 forArrangedSubview:(id)arg3;
- (void)containerViewDidLayoutArrangedSubviews:(id)arg1;
- (id)detailLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)labelColor;
- (id)labelViewStack;
- (id)labelWithTextStyle:(id)arg1;
- (void)labelsChangedWidth:(double)arg1;
- (void)layoutMarginsDidChange;
- (double)leadingInsetsFromCurrentMargins:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)recipient;
- (void)setBackgroundColor:(id)arg1;
- (void)setDetailLabel:(id)arg1;
- (void)setLabelColor:(id)arg1;
- (void)setLabelViewStack:(id)arg1;
- (void)setRecipient:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTrailingButtonMidlineInsetFromLayoutMargin:(double)arg1;
- (bool)supportsAvatarView;
- (id)titleLabel;
- (id)titleTextStyle;
- (double)trailingButtonMidlineInsetFromLayoutMargin;
- (double)trailingButtonWidth;

@end
