
@interface VUIListCollectionViewCell : UICollectionViewCell {
    UIColor * _backgroundColor;
    UIColor * _highlightedBackgroundColor;
    bool  _shouldAppearSelected;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) UIColor *highlightedBackgroundColor;
@property (nonatomic) bool shouldAppearSelected;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)highlightedBackgroundColor;
- (void)prepareForReuse;
- (void)setBackgroundColor:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlightedBackgroundColor:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setShouldAppearSelected:(bool)arg1;
- (bool)shouldAppearSelected;

@end
