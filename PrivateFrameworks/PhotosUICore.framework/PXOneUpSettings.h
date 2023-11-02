
@interface PXOneUpSettings : PXSettings {
    bool  _hideFloatingInfoPanel;
    double  _maximumWhitespaceWidthForInitialZoomToFill;
}

@property (nonatomic) bool hideFloatingInfoPanel;
@property (nonatomic) double maximumWhitespaceWidthForInitialZoomToFill;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (bool)hideFloatingInfoPanel;
- (double)maximumWhitespaceWidthForInitialZoomToFill;
- (id)parentSettings;
- (void)setDefaultValues;
- (void)setHideFloatingInfoPanel:(bool)arg1;
- (void)setMaximumWhitespaceWidthForInitialZoomToFill:(double)arg1;
- (bool)shouldInitiallyZoomContentWithSize:(struct CGSize { double x1; double x2; })arg1 toFillViewWithSize:(struct CGSize { double x1; double x2; })arg2;
- (double)zoomFactorForContentWithSize:(struct CGSize { double x1; double x2; })arg1 toFillViewWithSize:(struct CGSize { double x1; double x2; })arg2;

@end
