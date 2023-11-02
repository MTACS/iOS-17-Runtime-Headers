
@interface CSDashBoardQuickActionsButtonSettings : PTSettings {
    double  _bottomOutset;
    bool  _colorsBackground;
    double  _leadingOutset;
    bool  _showsButtons;
    double  _topOutset;
    double  _trailingOutset;
}

@property (nonatomic) double bottomOutset;
@property (nonatomic) bool colorsBackground;
@property (nonatomic) double leadingOutset;
@property (nonatomic) bool showsButtons;
@property (nonatomic) double topOutset;
@property (nonatomic) double trailingOutset;

+ (id)settingsControllerModule;

- (double)bottomOutset;
- (bool)colorsBackground;
- (double)leadingOutset;
- (void)setBottomOutset:(double)arg1;
- (void)setColorsBackground:(bool)arg1;
- (void)setDefaultValues;
- (void)setLeadingOutset:(double)arg1;
- (void)setShowsButtons:(bool)arg1;
- (void)setTopOutset:(double)arg1;
- (void)setTrailingOutset:(double)arg1;
- (bool)showsButtons;
- (double)topOutset;
- (double)trailingOutset;

@end
