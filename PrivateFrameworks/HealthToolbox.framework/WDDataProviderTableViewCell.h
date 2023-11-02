
@interface WDDataProviderTableViewCell : UITableViewCell {
    bool  _active;
    UIButton * _checkmarkButton;
    NSLayoutConstraint * _checkmarkLeadingConstraint;
    NSLayoutConstraint * _iconImageWidth;
    UILabel * _inactiveLabel;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, retain) NSLayoutConstraint *checkmarkLeadingConstraint;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } iconSize;

- (void).cxx_destruct;
- (void)_setupUI;
- (id)checkmarkLeadingConstraint;
- (struct CGSize { double x1; double x2; })iconSize;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isActive;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setActive:(bool)arg1;
- (void)setCheckmarkLeadingConstraint:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setIconImage:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
