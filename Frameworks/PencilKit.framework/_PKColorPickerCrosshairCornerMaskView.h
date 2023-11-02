
@interface _PKColorPickerCrosshairCornerMaskView : UIView {
    unsigned long long  _cornerPosition;
    bool  _excludeCorner;
}

@property (nonatomic) unsigned long long cornerPosition;
@property (nonatomic) bool excludeCorner;

+ (Class)layerClass;

- (void)_setFillColor:(id)arg1;
- (void)_setPath:(id)arg1;
- (id)_shapeLayer;
- (unsigned long long)cornerPosition;
- (bool)excludeCorner;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)maskPath;
- (void)setCornerPosition:(unsigned long long)arg1;
- (void)setExcludeCorner:(bool)arg1;

@end
