
@interface _HUDownloadProgressRingView : UIView {
    double  _progress;
}

@property (nonatomic) double progress;

+ (Class)layerClass;

- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_updateShapePath;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)progress;
- (void)setProgress:(double)arg1;
- (void)tintColorDidChange;

@end
