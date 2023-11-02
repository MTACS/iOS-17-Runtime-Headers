
@interface ACUISMutableActivitySceneMetrics : ACUISActivitySceneMetrics {
    double  cornerRadius;
    ACUISEdgeInsets * edgeInsets;
    struct CGSize { 
        double width; 
        double height; 
    }  size;
}

@property (nonatomic) double cornerRadius;
@property (nonatomic, copy) ACUISEdgeInsets *edgeInsets;
@property (nonatomic) struct CGSize { double x1; double x2; } size;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)cornerRadius;
- (id)edgeInsets;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setEdgeInsets:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;

@end
