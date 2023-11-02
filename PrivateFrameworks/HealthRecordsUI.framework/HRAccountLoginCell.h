
@interface HRAccountLoginCell : UITableViewCell {
    void accountStatusView;
}

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)configureWithAccount:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
