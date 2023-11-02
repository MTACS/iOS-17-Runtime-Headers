
@interface PXEditorialLayoutMetrics : PXLayoutMetrics {
    double  _headerHeight;
    double  _interTileSpacing;
    unsigned long long  _lowerItemCountThreshold;
    unsigned long long  _numberOfColumns;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
    bool  _useNewImplementation;
    bool  _useSaliency;
}

@property (nonatomic) double headerHeight;
@property (nonatomic) double interTileSpacing;
@property (nonatomic) unsigned long long lowerItemCountThreshold;
@property (nonatomic) unsigned long long numberOfColumns;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property (nonatomic) bool useNewImplementation;
@property (nonatomic) bool useSaliency;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)headerHeight;
- (id)init;
- (double)interTileSpacing;
- (unsigned long long)lowerItemCountThreshold;
- (unsigned long long)numberOfColumns;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (void)setHeaderHeight:(double)arg1;
- (void)setInterTileSpacing:(double)arg1;
- (void)setLowerItemCountThreshold:(unsigned long long)arg1;
- (void)setNumberOfColumns:(unsigned long long)arg1;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setUseNewImplementation:(bool)arg1;
- (void)setUseSaliency:(bool)arg1;
- (bool)useNewImplementation;
- (bool)useSaliency;

@end
