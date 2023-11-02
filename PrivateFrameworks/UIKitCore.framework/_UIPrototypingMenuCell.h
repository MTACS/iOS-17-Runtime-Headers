
@interface _UIPrototypingMenuCell : UITableViewCell {
    _UIPrototypingValue * _prototypingSetting;
    UIStackView * _stackView;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) _UIPrototypingValue *prototypingSetting;
@property (nonatomic, readonly) UIStackView *stackView;
@property (nonatomic, readonly) UILabel *titleLabel;

+ (long long)_layoutAxis;

- (void).cxx_destruct;
- (void)_prototypingSettingDidChange;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)prototypingSetting;
- (void)setPrototypingSetting:(id)arg1;
- (id)stackView;
- (id)titleLabel;

@end
