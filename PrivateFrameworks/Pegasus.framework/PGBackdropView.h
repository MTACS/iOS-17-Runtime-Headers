
@interface PGBackdropView : __PGView {
    CAFilter * _averageColorFilter;
    CAFilter * _gaussianBlurFilter;
}

@property (nonatomic) double backdropScale;
@property (nonatomic) double gaussianBlurRadius;
@property (nonatomic, copy) NSString *groupName;

+ (Class)layerClass;

- (void).cxx_destruct;
- (void)_updateFilters;
- (double)backdropScale;
- (void)dealloc;
- (double)gaussianBlurRadius;
- (id)groupName;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBackdropScale:(double)arg1;
- (void)setGaussianBlurRadius:(double)arg1;
- (void)setGroupName:(id)arg1;

@end
