
@interface PXYearsLayoutMetrics : PXLayoutMetrics {
    double  _defaultItemAspectRatio;
    double  _interitemSpacing;
    double  _multiColumnAspectRatio;
    long long  _orientation;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
    long long  _sizeClass;
}

@property (nonatomic) double defaultItemAspectRatio;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) double multiColumnAspectRatio;
@property (nonatomic) long long orientation;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property (nonatomic) long long sizeClass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)defaultItemAspectRatio;
- (unsigned long long)hash;
- (id)init;
- (double)interitemSpacing;
- (bool)isEqual:(id)arg1;
- (double)multiColumnAspectRatio;
- (long long)orientation;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (void)setDefaultItemAspectRatio:(double)arg1;
- (void)setInteritemSpacing:(double)arg1;
- (void)setMultiColumnAspectRatio:(double)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSizeClass:(long long)arg1;
- (long long)sizeClass;

@end
