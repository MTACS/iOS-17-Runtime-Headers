
@interface STStorageTableCell : PSTableCell {
    NSLayoutConstraint * _cloudIconConstraint;
    UIImageView * _cloudIconView;
    NSLayoutConstraint * _iconSizeConstraint;
    UIImageView * _iconView;
    NSMutableArray * _infoConstraints;
    UILabel * _infoLabel;
    NSMutableArray * _largeFontConstraints;
    NSLayoutConstraint * _minHeightConstraint;
    NSLayoutConstraint * _noCloudIconConstraint;
    NSMutableArray * _normalFontConstraints;
    long long  _size;
    UILabel * _sizeLabel;
    NSLayoutConstraint * _sizeRightConstraint;
    UIActivityIndicatorView * _spinner;
    UIView * _titleInfoView;
    UILabel * _titleLabel;
}

@property bool cloudIconHidden;
@property (retain) UIImage *icon;
@property (retain) NSString *info;
@property bool infoHidden;
@property long long size;
@property (retain) NSString *sizeString;
@property (retain) UIActivityIndicatorView *spinner;
@property (retain) NSString *title;

+ (double)defaultCellHeight;

- (void).cxx_destruct;
- (id)_cloudIconColor;
- (bool)cloudIconHidden;
- (void)createLargeFontConstraints;
- (void)createNormalFontConstraints;
- (id)icon;
- (id)info;
- (bool)infoHidden;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)setCloudIconHidden:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setIcon:(id)arg1;
- (void)setInfo:(id)arg1;
- (void)setInfoHidden:(bool)arg1;
- (void)setSize:(long long)arg1;
- (void)setSizeString:(id)arg1;
- (void)setSpinner:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setupTitleAndInfoConstraints;
- (long long)size;
- (id)sizeString;
- (id)spinner;
- (id)title;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;

@end
