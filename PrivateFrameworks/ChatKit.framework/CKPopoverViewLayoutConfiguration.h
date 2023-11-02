
@interface CKPopoverViewLayoutConfiguration : NSObject {
    double  _defaultAppCompactHeight;
    double  _maximumHeight;
    double  _minimumSendMenuDimension;
    double  _minimumTopSpacing;
    double  _minimumTrailingSpacing;
    double  _preferredAppWidth;
}

@property (nonatomic) double defaultAppCompactHeight;
@property (nonatomic) double maximumHeight;
@property (nonatomic) double minimumSendMenuDimension;
@property (nonatomic) double minimumTopSpacing;
@property (nonatomic) double minimumTrailingSpacing;
@property (nonatomic) double preferredAppWidth;

- (double)defaultAppCompactHeight;
- (double)maximumHeight;
- (double)minimumSendMenuDimension;
- (double)minimumTopSpacing;
- (double)minimumTrailingSpacing;
- (struct CGSize { double x1; double x2; })optimalSizeForPreferredContentSize:(struct CGSize { double x1; double x2; })arg1 state:(unsigned long long)arg2;
- (struct CGSize { double x1; double x2; })optimalSizeForPresentingAppInCompactStyle:(bool)arg1;
- (struct CGSize { double x1; double x2; })optimalSizeForPresentingSendMenuWithPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (double)preferredAppWidth;
- (void)setDefaultAppCompactHeight:(double)arg1;
- (void)setMaximumHeight:(double)arg1;
- (void)setMinimumSendMenuDimension:(double)arg1;
- (void)setMinimumTopSpacing:(double)arg1;
- (void)setMinimumTrailingSpacing:(double)arg1;
- (void)setPreferredAppWidth:(double)arg1;

@end
