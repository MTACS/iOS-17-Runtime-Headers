
@interface STAppStoreIconCell : STTableCell {
    UIImageView * _appIconView;
    UILabel * _nameLabel;
}

@property (nonatomic, readonly) UIImageView *appIconView;
@property (nonatomic, readonly) UILabel *nameLabel;

- (void).cxx_destruct;
- (void)_didFetchAppInfoOrIcon:(id)arg1;
- (id)appIconView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (id)nameLabel;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
