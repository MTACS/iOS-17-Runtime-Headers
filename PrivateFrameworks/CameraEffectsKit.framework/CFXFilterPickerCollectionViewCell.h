
@interface CFXFilterPickerCollectionViewCell : CFXEffectPickerCollectionViewCell {
    bool  _compactMode;
    UIView * _selectionView;
    UILabel * _titleView;
}

@property (getter=isInCompactMode, nonatomic) bool compactMode;
@property (nonatomic) UIView *selectionView;
@property (retain) UILabel *titleView;

+ (id)selectionColor;

- (void).cxx_destruct;
- (void)CFX_updateLayerProperties;
- (void)CFX_updateSelectionView;
- (void)CFX_updateTitle;
- (void)configureCellAppearence;
- (bool)isInCompactMode;
- (void)prepareForReuse;
- (id)selectionView;
- (void)setCompactMode:(bool)arg1;
- (void)setEffect:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelectionView:(id)arg1;
- (void)setTitleView:(id)arg1;
- (id)titleView;

@end
