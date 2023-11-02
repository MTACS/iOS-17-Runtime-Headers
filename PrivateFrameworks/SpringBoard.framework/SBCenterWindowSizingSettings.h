
@interface SBCenterWindowSizingSettings : PTSettings {
    double  _bottomInset;
    double  _fullHeightScaleFactor;
    double  _fullWidthScaleFactor;
    double  _leftInset;
    double  _rightInset;
    double  _topInset;
    bool  _useCustomSizingForNewWindows;
}

@property (nonatomic) double bottomInset;
@property (nonatomic) double fullHeightScaleFactor;
@property (nonatomic) double fullWidthScaleFactor;
@property (nonatomic) double leftInset;
@property (nonatomic) double rightInset;
@property (nonatomic) double topInset;
@property (nonatomic) bool useCustomSizingForNewWindows;

+ (id)settingsControllerModule;

- (double)bottomInset;
- (double)fullHeightScaleFactor;
- (double)fullWidthScaleFactor;
- (double)leftInset;
- (double)rightInset;
- (void)setBottomInset:(double)arg1;
- (void)setDefaultValues;
- (void)setFullHeightScaleFactor:(double)arg1;
- (void)setFullWidthScaleFactor:(double)arg1;
- (void)setLeftInset:(double)arg1;
- (void)setRightInset:(double)arg1;
- (void)setTopInset:(double)arg1;
- (void)setUseCustomSizingForNewWindows:(bool)arg1;
- (double)topInset;
- (bool)useCustomSizingForNewWindows;

@end
