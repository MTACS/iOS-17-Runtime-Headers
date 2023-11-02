
@interface CPLayoutArea : CPRotatedRegion {
    bool  hasRotatedCharacters;
    bool  isFirstLayout;
}

- (void)accept:(id)arg1;
- (void)addColumnBreaks;
- (id)description;
- (bool)hasRotatedCharacters;
- (id)init;
- (bool)isBoxRegion;
- (bool)isFirstLayout;
- (bool)isGraphicalRegion;
- (bool)isImageRegion;
- (bool)isRowRegion;
- (bool)isShapeRegion;
- (bool)isSimilarTo:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layoutAreaBounds;
- (id)properties;
- (double)selectionBottom;
- (void)setHasRotatedCharacters:(bool)arg1;
- (void)setIsFirstLayout:(bool)arg1;
- (void)setIsImageRegion:(bool)arg1;

@end
