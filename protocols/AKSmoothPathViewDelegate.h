
@protocol AKSmoothPathViewDelegate <NSObject>

@required

- (void)inputView:(AKSmoothPathView *)arg1 didCollectPath:(struct CGPath { }*)arg2;
- (void)inputView:(AKSmoothPathView *)arg1 didCollectPrestrokedPath:(struct CGPath { }*)arg2;
- (void)inputViewWillStartDrawing:(AKSmoothPathView *)arg1;

@end
