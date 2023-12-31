
@interface PSKeychainSyncHeaderView : UIView <PSHeaderFooterView> {
    UILabel * _detailLabel;
    UILabel * _titleLabel;
    bool  _usesCompactLayout;
}

@property (nonatomic) bool usesCompactLayout;

- (void).cxx_destruct;
- (id)initWithSpecifier:(id)arg1;
- (void)layoutSubviews;
- (double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2;
- (void)setDetailText:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)setUsesCompactLayout:(bool)arg1;
- (bool)usesCompactLayout;

@end
