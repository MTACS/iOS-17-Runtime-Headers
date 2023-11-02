
@interface WFAutomationListCollectionViewCell : UICollectionViewCell {
    WFConfiguredTrigger * _configuredTrigger;
    UILabel * _descriptionLabel;
    HFTriggerItem * _homeTrigger;
    NSString * _identifier;
    UIView * _separatorView;
    NSLayoutConstraint * _separatorViewHeightConstraint;
    WFAutomationSummaryIconsView * _summaryIconsView;
    UILabel * _titleLabel;
    WFWorkflow * _workflow;
}

@property (nonatomic, retain) WFConfiguredTrigger *configuredTrigger;
@property (nonatomic, readonly) UILabel *descriptionLabel;
@property (nonatomic, retain) HFTriggerItem *homeTrigger;
@property (nonatomic, retain) NSString *identifier;
@property unsigned long long maskedCorners;
@property (nonatomic, readonly) UIView *separatorView;
@property (nonatomic, readonly) NSLayoutConstraint *separatorViewHeightConstraint;
@property bool showsSeparator;
@property (nonatomic, readonly) WFAutomationSummaryIconsView *summaryIconsView;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, retain) WFWorkflow *workflow;

- (void).cxx_destruct;
- (id)configuredTrigger;
- (id)descriptionLabel;
- (id)homeTrigger;
- (id)identifier;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)maskedCorners;
- (void)prepareForReuse;
- (id)separatorView;
- (id)separatorViewHeightConstraint;
- (void)setConfiguredTrigger:(id)arg1;
- (void)setConfiguredTrigger:(id)arg1 workflow:(id)arg2;
- (void)setHomeTrigger:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMaskedCorners:(unsigned long long)arg1;
- (void)setShowsSeparator:(bool)arg1;
- (void)setWorkflow:(id)arg1;
- (bool)showsSeparator;
- (id)summaryIconsView;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateUI;
- (id)workflow;

@end
