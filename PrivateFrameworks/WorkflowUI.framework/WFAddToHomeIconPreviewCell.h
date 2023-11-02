
@interface WFAddToHomeIconPreviewCell : WFIconCell {
    WFHomeScreenIcon * _icon;
    UIImageView * _iconImageView;
    UILabel * _iconLabel;
}

@property (nonatomic, retain) WFHomeScreenIcon *icon;
@property (nonatomic) UIImageView *iconImageView;
@property (nonatomic) UILabel *iconLabel;

+ (double)defaultRowHeight;

- (void).cxx_destruct;
- (void)configureIcon:(id)arg1;
- (void)configureName:(id)arg1;
- (void)configureWithName:(id)arg1 icon:(id)arg2;
- (id)icon;
- (id)iconImageView;
- (id)iconLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)redrawIcon;
- (void)setIcon:(id)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setIconLabel:(id)arg1;

@end
