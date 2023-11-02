
@interface WFParameterValuePickerVariableTableViewCell : UITableViewCell {
    WFIconHostingView * _iconView;
    UILabel * _nameLabel;
}

@property (nonatomic, readonly) WFIconHostingView *iconView;
@property (nonatomic, readonly) UILabel *nameLabel;

- (void).cxx_destruct;
- (id)iconView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)nameLabel;
- (void)tintColorDidChange;
- (void)updateWithName:(id)arg1 icon:(id)arg2;

@end
