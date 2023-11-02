
@interface WFTimeTriggerDayOfWeekCell : UITableViewCell {
    NSArray * _buttons;
    <WFTimeTriggerDayOfWeekCellDelegate> * _delegate;
    NSSet * _selectedRecurrences;
    UIStackView * _stackView;
}

@property (nonatomic, retain) NSArray *buttons;
@property (nonatomic) <WFTimeTriggerDayOfWeekCellDelegate> *delegate;
@property (nonatomic, retain) NSSet *selectedRecurrences;
@property (nonatomic, retain) UIStackView *stackView;

- (void).cxx_destruct;
- (id)buttons;
- (id)delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)selectedRecurrences;
- (void)setButtons:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSelectedRecurrences:(id)arg1;
- (void)setStackView:(id)arg1;
- (void)setupConstraints;
- (id)stackView;
- (void)tintColorDidChange;
- (void)toggleWeekdayButton:(id)arg1;
- (void)updateSelectedDays;

@end
