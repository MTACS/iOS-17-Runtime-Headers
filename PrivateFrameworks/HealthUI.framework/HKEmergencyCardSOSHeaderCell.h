
@interface HKEmergencyCardSOSHeaderCell : UITableViewCell {
    UILabel * _headerLabel;
}

@property (nonatomic, retain) UILabel *headerLabel;

- (void).cxx_destruct;
- (void)_updateTextColor;
- (id)headerLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setHeaderLabel:(id)arg1;
- (void)setupConstraints;
- (void)setupSubviews;
- (void)tintColorDidChange;

@end
