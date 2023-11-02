
@interface PXSmallCollectionLayoutMetrics : PXLayoutMetrics {
    unsigned long long  _edgesForExtendedLayout;
    double  _headerAspectRatio;
    double  _interitemSpacing;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _safeAreaInsets;
    unsigned long long  _style;
}

@property (nonatomic) unsigned long long edgesForExtendedLayout;
@property (nonatomic) double headerAspectRatio;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaInsets;
@property (nonatomic) unsigned long long style;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)edgesForExtendedLayout;
- (double)headerAspectRatio;
- (double)interitemSpacing;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsets;
- (void)setEdgesForExtendedLayout:(unsigned long long)arg1;
- (void)setHeaderAspectRatio:(double)arg1;
- (void)setInteritemSpacing:(double)arg1;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSafeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setStyle:(unsigned long long)arg1;
- (unsigned long long)style;

@end
