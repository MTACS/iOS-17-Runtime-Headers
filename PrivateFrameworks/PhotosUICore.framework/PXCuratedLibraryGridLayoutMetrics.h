
@interface PXCuratedLibraryGridLayoutMetrics : PXLayoutMetrics {
    double  _headerAspectRatio;
    double  _interitemSpacing;
    double  _itemAspectRatio;
    long long  _numberOfColumns;
    long long  _numberOfPrecedingAssets;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
    double  _screenScale;
    long long  _style;
}

@property (nonatomic) double headerAspectRatio;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) double itemAspectRatio;
@property (nonatomic) long long numberOfColumns;
@property (nonatomic) long long numberOfPrecedingAssets;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property (nonatomic) double screenScale;
@property (nonatomic) long long style;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)headerAspectRatio;
- (id)init;
- (double)interitemSpacing;
- (double)itemAspectRatio;
- (long long)numberOfColumns;
- (long long)numberOfPrecedingAssets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (double)screenScale;
- (void)setHeaderAspectRatio:(double)arg1;
- (void)setInteritemSpacing:(double)arg1;
- (void)setItemAspectRatio:(double)arg1;
- (void)setNumberOfColumns:(long long)arg1;
- (void)setNumberOfPrecedingAssets:(long long)arg1;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setScreenScale:(double)arg1;
- (void)setStyle:(long long)arg1;
- (long long)style;

@end
