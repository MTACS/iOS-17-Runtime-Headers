
@interface AIAudiogramResultTimeCell : UITableViewCell {
    NSDate * _date;
    <AIAudiogramResultTimeCellDelegate> * _delegate;
    UIStackView * _labelStackView;
    UIDatePicker * _timePicker;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) NSDate *date;
@property (nonatomic) <AIAudiogramResultTimeCellDelegate> *delegate;
@property (nonatomic, retain) UIStackView *labelStackView;
@property (nonatomic, retain) UIDatePicker *timePicker;
@property (nonatomic, retain) UILabel *titleLabel;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_datePickerValueChanged:(id)arg1;
- (unsigned long long)accessibilityTraits;
- (void)configureLayout;
- (id)date;
- (id)delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)labelStackView;
- (void)setDate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLabelStackView:(id)arg1;
- (void)setTimePicker:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)timePicker;
- (id)titleLabel;

@end
