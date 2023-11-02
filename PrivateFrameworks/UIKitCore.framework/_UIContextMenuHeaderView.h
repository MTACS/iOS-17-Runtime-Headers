
@interface _UIContextMenuHeaderView : UICollectionReusableView {
    UIVisualEffectView * _bgView;
    UIView * _contentView;
    bool  _isMenuTitle;
    bool  _needsConstraintRebuild;
    UIView * _separator;
    unsigned long long  _separatorStyle;
    NSString * _title;
    UILabel * _titleLabel;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _unscaledLayoutMargins;
}

@property (nonatomic, retain) UIVisualEffectView *bgView;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic) bool isMenuTitle;
@property (nonatomic, retain) UIView *separator;
@property (nonatomic) unsigned long long separatorStyle;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } unscaledLayoutMargins;

- (void).cxx_destruct;
- (bool)_isDisplayingTitleLabel;
- (long long)_labelRenderingMode;
- (double)_separatorHeight;
- (void)_setNeedsConstraintRebuild;
- (id)_titleFont;
- (id)_titleLabelFilterForCurrentTraits;
- (unsigned long long)_titleLabelNumberOfLines;
- (void)_updateCompositingFilterForCurrentState;
- (void)_updateLayoutMargins;
- (id)bgView;
- (id)contentView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isMenuTitle;
- (id)separator;
- (unsigned long long)separatorStyle;
- (void)setBackgroundMaterialGroupName:(id)arg1;
- (void)setBgView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setIsMenuTitle:(bool)arg1;
- (void)setSeparator:(id)arg1;
- (void)setSeparatorStyle:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setUnscaledLayoutMargins:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)title;
- (id)titleLabel;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })unscaledLayoutMargins;
- (void)updateConstraints;

@end
