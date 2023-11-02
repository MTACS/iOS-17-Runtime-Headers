
@interface WDCheckmarkTableViewCell : UITableViewCell {
    UIButton * _button;
    <WDCheckmarkTableViewCellDelegate> * _delegate;
    UILabel * _displayLabel;
}

@property (nonatomic) <WDCheckmarkTableViewCellDelegate> *delegate;
@property (getter=isOn, nonatomic) bool on;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_setupUI;
- (void)clickToggle:(id)arg1;
- (id)delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isOn;
- (void)setDelegate:(id)arg1;
- (void)setDisplayText:(id)arg1;
- (void)setOn:(bool)arg1;

@end
