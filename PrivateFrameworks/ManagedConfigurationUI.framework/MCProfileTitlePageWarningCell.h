
@interface MCProfileTitlePageWarningCell : UITableViewCell {
    UILabel * _label;
    UIView * _separatorLine;
}

@property (nonatomic, readonly) UILabel *label;
@property (nonatomic, retain) UIView *separatorLine;

- (void).cxx_destruct;
- (void)_updateConstraintsWithLabel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)label;
- (void)layoutSubviews;
- (id)separatorLine;
- (void)setSeparatorLine:(id)arg1;

@end
