
@interface FAMemberCardContainerTableViewCell : PSTableCell <FAMemberStackViewDelegate> {
    <FAFamilyMemberCardTapHandler> * _tapHandler;
    FAMemberStackView * cardOneView;
    UIStackView * cardRowView;
    FAMemberStackView * cardTwoView;
}

@property (retain) <FAFamilyMemberCardTapHandler> *tapHandler;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)layoutSubviews;
- (void)memberCardTappedInStackViewWith:(id)arg1;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setTapHandler:(id)arg1;
- (void)setupCardRowView;
- (void)setupCellView;
- (void)setupConstraints;
- (id)tapHandler;

@end
