
@interface CSPageControl : UIPageControl {
    unsigned long long  _cameraPageIndex;
    _UILegibilitySettings * _sbLegibilitySettings;
}

@property (nonatomic) unsigned long long cameraPageIndex;

+ (struct CGSize { double x1; double x2; })defaultSize;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })suggestedFrameForPageBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })suggestedFrameForPageBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 desiredSize:(struct CGSize { double x1; double x2; })arg2;

- (void).cxx_destruct;
- (id)_cameraIndicator;
- (id)_currentPageIndicatorColor;
- (id)_pageIndicatorColor;
- (void)_rebuildIndicators;
- (void)_updateForLegibility;
- (unsigned long long)cameraPageIndex;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCameraPageIndex:(unsigned long long)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForNumberOfPages:(long long)arg1;

@end
