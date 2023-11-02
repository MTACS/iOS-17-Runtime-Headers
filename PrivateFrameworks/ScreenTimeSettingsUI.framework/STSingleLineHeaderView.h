
@interface STSingleLineHeaderView : STTableViewHeaderFooterView <PSHeaderFooterView> {
    PSSpecifier * _specifier;
    UILabel * _titleLabel;
}

@property (nonatomic) PSSpecifier *specifier;
@property (nonatomic, readonly) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)initWithSpecifier:(id)arg1;
- (id)initWithSpecifier:(id)arg1 useContentLayoutGuide:(bool)arg2;
- (double)preferredHeightForWidth:(double)arg1;
- (void)reloadFromSpecifier;
- (void)setSpecifier:(id)arg1;
- (id)specifier;
- (id)titleLabel;

@end
