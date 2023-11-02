
@interface CSDashBoardNotificationVersusPagingScrollSettings : PTSettings {
    bool  _colorsBackground;
    double  _leadingInset;
    double  _trailingInset;
}

@property (nonatomic) bool colorsBackground;
@property (nonatomic) double leadingInset;
@property (nonatomic) double trailingInset;

+ (id)settingsControllerModule;

- (bool)colorsBackground;
- (double)leadingInset;
- (void)setColorsBackground:(bool)arg1;
- (void)setDefaultValues;
- (void)setLeadingInset:(double)arg1;
- (void)setTrailingInset:(double)arg1;
- (double)trailingInset;

@end
