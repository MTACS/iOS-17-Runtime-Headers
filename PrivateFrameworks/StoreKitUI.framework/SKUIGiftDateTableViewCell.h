
@interface SKUIGiftDateTableViewCell : UITableViewCell {
    UIView * _bottomBorderView;
    bool  _checked;
    UIImageView * _checkmarkView;
    UIDatePicker * _datePicker;
    <SKUIGiftDateTableViewCellDelegate> * _delegate;
    SKUIGiftConfiguration * _giftConfiguration;
    UILabel * _labelLabel;
    bool  _leftToRight;
    UILabel * _placeholderLabel;
    UIView * _topBorderView;
}

@property (getter=isChecked, nonatomic) bool checked;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic) <SKUIGiftDateTableViewCellDelegate> *delegate;
@property (nonatomic, retain) SKUIGiftConfiguration *giftConfiguration;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) bool leftToRight;
@property (nonatomic, copy) NSString *placeholder;

- (void).cxx_destruct;
- (void)_datePickerDateDidChange;
- (void)_datePickerEditingDidBegin;
- (id)_labelColor;
- (id)_labelForDate:(id)arg1;
- (id)_newLabel;
- (id)date;
- (id)delegate;
- (id)giftConfiguration;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isChecked;
- (id)label;
- (void)layoutSubviews;
- (bool)leftToRight;
- (id)placeholder;
- (void)setChecked:(bool)arg1;
- (void)setDate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGiftConfiguration:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLeftToRight:(bool)arg1;
- (void)setPlaceholder:(id)arg1;

@end
