
@interface WFShortcutSummaryCell : UITableViewCell {
    WFRowOfIconsView * _actionIconsView;
    UIStackView * _mainStackView;
    UILabel * _summaryLabel;
}

@property (nonatomic, retain) WFRowOfIconsView *actionIconsView;
@property (nonatomic, retain) UIStackView *mainStackView;
@property (nonatomic, retain) UILabel *summaryLabel;

- (void).cxx_destruct;
- (id)actionIconsView;
- (void)addActionViewIfNeeded;
- (void)configureWithTitle:(id)arg1 actionIcons:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)mainStackView;
- (void)prepareForReuse;
- (void)removeActionViewIfNeeded;
- (void)setActionIconsView:(id)arg1;
- (void)setMainStackView:(id)arg1;
- (void)setSummaryLabel:(id)arg1;
- (id)summaryLabel;

@end
