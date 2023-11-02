
@interface PXCompositeEditorialLayoutMetrics : PXLayoutMetrics {
    PXCompositeEditorialLayoutSpec * _editorialLayoutSpec;
    double  _interTileSpacing;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
    bool  _useSaliency;
}

@property (nonatomic, readonly) PXCompositeEditorialLayoutSpec *editorialLayoutSpec;
@property (nonatomic) double interTileSpacing;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property (nonatomic) bool useSaliency;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)editorialLayoutSpec;
- (id)init;
- (double)interTileSpacing;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (void)setInterTileSpacing:(double)arg1;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setUseSaliency:(bool)arg1;
- (bool)useSaliency;

@end
