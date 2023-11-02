
@interface PSMultilineTitleTableCell : PSTableCell {
    NSLayoutConstraint * _titleLeadingCon;
    NSLayoutConstraint * _valueTrailingCon;
}

@property (nonatomic, retain) NSLayoutConstraint *titleLeadingCon;
@property (nonatomic, retain) NSLayoutConstraint *valueTrailingCon;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setTitleLeadingCon:(id)arg1;
- (void)setValueTrailingCon:(id)arg1;
- (id)titleLeadingCon;
- (id)valueTrailingCon;

@end
