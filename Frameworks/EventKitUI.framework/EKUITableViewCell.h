
@interface EKUITableViewCell : UITableViewCell {
    UIVisualEffectView * _bottomRowSeparatorParentView;
    RowSeparatorView * _bottomSeparatorViewForNonOpaqueTables;
    bool  _disableSelectedBackground;
    bool  _drawsOwnRowSeparators;
    UIColor * _rowSeparatorColor;
    UIVisualEffect * _rowSeparatorVisualEffect;
    unsigned long long  _separatorEdges;
    UIVisualEffectView * _topRowSeparatorParentView;
    RowSeparatorView * _topSeparatorViewForNonOpaqueTables;
    bool  _usesInsetMargin;
}

@property (nonatomic) bool disableSelectedBackground;
@property (nonatomic) bool drawsOwnRowSeparators;
@property (nonatomic, retain) UIColor *rowSeparatorColor;
@property (nonatomic, retain) UIVisualEffect *rowSeparatorVisualEffect;
@property (nonatomic) unsigned long long separatorEdges;
@property (nonatomic) bool usesInsetMargin;

+ (id)reuseIdentifier;
+ (double)rowSeparatorThickness;
+ (bool)vibrant;

- (void).cxx_destruct;
- (void)_layoutSeparator;
- (void)_setMarginExtendsToFullWidth:(bool)arg1;
- (bool)disableSelectedBackground;
- (bool)drawsOwnRowSeparators;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)rowSeparatorColor;
- (id)rowSeparatorVisualEffect;
- (unsigned long long)separatorEdges;
- (id)separatorParentView;
- (id)separatorView;
- (void)setDisableSelectedBackground:(bool)arg1;
- (void)setDrawsOwnRowSeparators:(bool)arg1;
- (void)setRowSeparatorColor:(id)arg1;
- (void)setRowSeparatorVisualEffect:(id)arg1;
- (void)setSeparatorEdges:(unsigned long long)arg1;
- (void)setUsesInsetMargin:(bool)arg1;
- (void)updateConfigurationUsingState:(id)arg1;
- (void)updateRowSeparators;
- (bool)usesInsetMargin;

@end
