
@interface WFAutomationEmptyStateCell : UITableViewCell {
    WFAutomationTypeExplanationPlatterView * _automationTypeView;
    NSArray * _currentConstraints;
}

@property (nonatomic, readonly) WFAutomationTypeExplanationPlatterView *automationTypeView;
@property (nonatomic, retain) NSArray *currentConstraints;

- (void).cxx_destruct;
- (id)automationTypeView;
- (void)configureForAutomationType:(unsigned long long)arg1 buttonTarget:(id)arg2 action:(SEL)arg3;
- (id)currentConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)setCurrentConstraints:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateLayoutConstraints;

@end
