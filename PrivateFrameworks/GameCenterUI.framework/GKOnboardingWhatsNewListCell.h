
@interface GKOnboardingWhatsNewListCell : UIView {
    NSArray * _axConstraints;
    unsigned long long  _currentCellType;
    UIImageView * _icon;
    NSArray * _normalConstraints;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) NSArray *axConstraints;
@property (nonatomic, readonly) unsigned long long currentCellType;
@property (nonatomic, retain) UIImageView *icon;
@property (nonatomic, retain) NSArray *normalConstraints;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)axConstraints;
- (void)createConstarints;
- (unsigned long long)currentCellType;
- (id)getIconImageFromBundle:(id)arg1;
- (id)getIconImageFromSFSymbol:(id)arg1;
- (id)icon;
- (id)initWithType:(unsigned long long)arg1;
- (void)loadView;
- (id)normalConstraints;
- (void)setAxConstraints:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setNormalConstraints:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setupCell;
- (id)subtitleLabel;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;

@end
