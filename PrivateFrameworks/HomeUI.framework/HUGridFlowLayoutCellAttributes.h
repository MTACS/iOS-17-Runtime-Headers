
@interface HUGridFlowLayoutCellAttributes : UICollectionViewLayoutAttributes {
    <HUBackgroundEffectViewGrouping> * _backgroundEffectViewGrouper;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _normalizedWallpaperRect;
}

@property (nonatomic) <HUBackgroundEffectViewGrouping> *backgroundEffectViewGrouper;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedWallpaperRect;

- (void).cxx_destruct;
- (id)backgroundEffectViewGrouper;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isEqual:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedWallpaperRect;
- (void)setBackgroundEffectViewGrouper:(id)arg1;
- (void)setNormalizedWallpaperRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
