
@interface SRAppUsageCell : UITableViewCell {
    UIButton * _button;
    UILabel * _label;
}

@property (nonatomic, readonly) UIButton *button;
@property (nonatomic, readonly) UILabel *label;

- (id)button;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)label;

@end
