
@interface HUInlineDatePickerCell : UITableViewCell <HUDisableableCellProtocol> {
    NSArray * _allConstraints;
    UIDatePicker * _datePicker;
    <HUInlineDatePickerCellDelegate> * _delegate;
    bool  _disabled;
    bool  _hideTitleLabel;
    double  _leftMargin;
    NSString * _title;
}

@property (nonatomic, retain) NSArray *allConstraints;
@property (nonatomic, retain) UIDatePicker *datePicker;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUInlineDatePickerCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideTitleLabel;
@property (nonatomic) double leftMargin;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDateComponents *timeComponents;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (void)_valueChanged:(id)arg1;
- (id)allConstraints;
- (id)datePicker;
- (id)delegate;
- (bool)hideTitleLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isDisabled;
- (double)leftMargin;
- (void)setAllConstraints:(id)arg1;
- (void)setDatePicker:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setHideTitleLabel:(bool)arg1;
- (void)setLeftMargin:(double)arg1;
- (void)setTimeComponents:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)timeComponents;
- (id)title;
- (void)updateConstraints;

@end
