
@interface AIAudiogramResultDateCell : UITableViewCell {
    NSLayoutConstraint * _collapsedConstraint;
    NSDate * _date;
    UIDatePicker * _datePicker;
    <AIAudiogramResultDateCellDelegate> * _delegate;
    NSArray * _expandedConstraints;
    UIStackView * _labelStackView;
    UILabel * _titleLabel;
    UILabel * _valueLabel;
}

@property (nonatomic, retain) NSLayoutConstraint *collapsedConstraint;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic, retain) UIDatePicker *datePicker;
@property (nonatomic) <AIAudiogramResultDateCellDelegate> *delegate;
@property (nonatomic, retain) NSArray *expandedConstraints;
@property (nonatomic, retain) UIStackView *labelStackView;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) UILabel *valueLabel;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_datePickerValueChanged:(id)arg1;
- (unsigned long long)accessibilityTraits;
- (id)collapsedConstraint;
- (void)configureLayout;
- (id)date;
- (id)datePicker;
- (id)delegate;
- (id)expandedConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)labelStackView;
- (void)setCollapsedConstraint:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDatePicker:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExpandedConstraints:(id)arg1;
- (void)setLabelStackView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setValueLabel:(id)arg1;
- (void)showActive:(bool)arg1;
- (id)titleLabel;
- (id)valueLabel;

@end
