
@interface WFInfoButtonTableViewCell : UITableViewCell {
    unsigned long long  _accessoryMode;
    UIImageView * _checkmarkView;
    <WFInfoButtonTableViewCellDelegate> * _delegate;
    UIButton * _infoButton;
}

@property (nonatomic) unsigned long long accessoryMode;
@property (nonatomic, readonly) NSArray *accessoryViews;
@property (getter=isChecked, nonatomic) bool checked;
@property (nonatomic, readonly) UIImageView *checkmarkView;
@property (nonatomic) <WFInfoButtonTableViewCellDelegate> *delegate;
@property (nonatomic, readonly) UIButton *infoButton;

- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (unsigned long long)accessoryMode;
- (id)accessoryViews;
- (id)checkmarkView;
- (id)delegate;
- (id)infoButton;
- (void)infoButtonPressed:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isChecked;
- (void)layoutSubviews;
- (void)setAccessoryMode:(unsigned long long)arg1;
- (void)setChecked:(bool)arg1;
- (void)setDelegate:(id)arg1;

@end
