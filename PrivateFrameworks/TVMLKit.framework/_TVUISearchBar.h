
@interface _TVUISearchBar : UISearchBar

+ (id)_clearGlyph;
+ (id)_searchGlyph;
+ (id)_tvmlKitBundle;

- (void)_updateRightView;
- (void)layoutSubviews;
- (void)setSemanticContentAttribute:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
