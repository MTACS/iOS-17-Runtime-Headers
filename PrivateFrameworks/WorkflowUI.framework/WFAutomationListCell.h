
@interface WFAutomationListCell : UITableViewCell {
    WFConfiguredTrigger * _configuredTrigger;
    <WFAutomationListCellDelegate> * _delegate;
    UILabel * _descriptionLabel;
    HFTriggerItem * _homeTrigger;
    NSString * _identifier;
    WFAutomationSummaryIconsView * _summaryIconsView;
    UILabel * _titleLabel;
    WFWorkflow * _workflow;
}

@property (nonatomic, retain) WFConfiguredTrigger *configuredTrigger;
@property (nonatomic) <WFAutomationListCellDelegate> *delegate;
@property (nonatomic, readonly) UILabel *descriptionLabel;
@property (nonatomic, retain) HFTriggerItem *homeTrigger;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, readonly) WFAutomationSummaryIconsView *summaryIconsView;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, retain) WFWorkflow *workflow;

- (void).cxx_destruct;
- (id)configuredTrigger;
- (id)delegate;
- (id)descriptionLabel;
- (id)homeTrigger;
- (id)identifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)setConfiguredTrigger:(id)arg1;
- (void)setConfiguredTrigger:(id)arg1 workflow:(id)arg2 delegate:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)setHomeTrigger:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setTitle:(id)arg1 description:(id)arg2 triggerIcon:(id)arg3 triggerTintColor:(id)arg4 triggerCornerRadius:(double)arg5 actionIcons:(id)arg6;
- (void)setWorkflow:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)summaryIconsView;
- (id)titleLabel;
- (void)updateUI;
- (id)workflow;

@end
